/*
 * Author: DartRuffian
 * Spawns jetpack handlers without the initial jump boost if the player is on the ground.
 *
 * Arguments:
 * None, uses ace_player.
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_Jetpacks_fnc_slowFall;
 */


// Exit if unit does not have / can not use a jetpack
if !(ace_player call BNAKC_Jetpacks_fnc_hasJetpack) exitWith {};
if !(ace_player call BNAKC_Jetpacks_fnc_canUseJetpack) exitWith
{
    if (isNull (objectParent ace_player) and [ace_player] call ace_common_fnc_isAwake) then
    {
        playSound3D ["MRC\JLTS\jumppacks\sounds\error.wss", ace_player];
    };
};

// If a handler doesn't exist, then create it
if (isNil "BNA_KC_Jet_JetpackHandle") then
{
    // Handle visual effects, global so all players see them
    ["BNA_KC_Jet_JetpackFired", [ace_player]] call CBA_fnc_GlobalEvent;

    BNA_KC_Jet_JetpackHandle =
    [
        BNAKC_Jetpacks_fnc_frameHandler
    ] call CBA_fnc_AddPerFrameHandler;
};

if (isNil "BNA_KC_Jet_JetpackSoundHandle") then
{
    BNA_KC_Jet_JetpackSoundHandle =
    [
        BNAKC_Jetpacks_fnc_soundHandler,
        0.3 // Time inbetween each execution
    ] call CBA_fnc_AddPerFrameHandler;
};

if (isNil "BNA_KC_Jet_JetpackFuelHandle") then
{
    BNA_KC_Jet_JetpackFuelHandle =
    [
        BNAKC_Jetpacks_fnc_fuelHandler,
        0.5 // Time inbetween each execution
    ] call CBA_fnc_AddPerFrameHandler;
};