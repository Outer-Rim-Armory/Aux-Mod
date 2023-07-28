/*
 * Author: DartRuffian
 * "Controller" function for jetpack system. Handles spawning jetpack handlers if player can jetpack,
 * and initial jump if player is on the ground.
 *
 * Arguments:
 * None, uses ace_player.
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_fnc_Jetpack;
 */


#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
#define DEV_LOG(message) (if (BNA_KC_DevMode) then {systemChat str message})

// Exit if unit does not have a jetpack
if !(ace_player call BNAKC_fnc_HasJetpack) exitWith {};

// Jetpack properties
private _jetpack = backpack ace_player;
private _jetStrength = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_strength", 1);

/*
CBA_fnc_RemovePerFrameHandler returns True or False depending on whether it can remove a given handler.
If the jetpack handler does *not* exist, create it.
Else, do nothing.
*/
if (isNil "BNA_KC_Jet_JetpackHandle") then
{   
    // Speed and position, used for an initial boost
    private _velocity = velocity ace_player;
    private _position = getPosASL ace_player;

    // Give slight boost to start jetpacking, but only if starting from the ground
    if (ace_player call BNAKC_fnc_CanUseJetpack and isTouchingGround ace_player) then
    {
        // Teleport is needed so player will actually move upwards
        _position set [2, (_position select 2) + 0.05];
        _velocity set [2, (_velocity select 2) + (_jetStrength / 2 max 6)];
        // Cap initial jump at 6 to avoid taking damage on flat terrain

        ace_player setPosASL _position;
        ace_player setVelocity _velocity;
    };

    // Handle visual effects, global so all players see them
    ["BNA_KC_Jet_JetpackFired", [ace_player]] call CBA_fnc_GlobalEvent;

    BNA_KC_Jet_JetpackHandle =
    [
        BNAKC_fnc_JetpackFrameHandler
    ] call CBA_fnc_AddPerFrameHandler;
}
else
{
    // Unit is already jetpacking
};


if (isNil "BNA_KC_Jet_JetpackSoundHandle") then
{
    BNA_KC_Jet_JetpackSoundHandle =
    [
        BNAKC_fnc_JetpackSoundHandler,
        0.3 // Time inbetween each execution
    ] call CBA_fnc_AddPerFrameHandler;
};