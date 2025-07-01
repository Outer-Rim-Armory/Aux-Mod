/*
 * Author: DartRuffian
 * Event handler for ace_unconscious, plays a voice line when a player is knocked unconscious
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call CWR_fnc_unconsciousEH;
 */


if (isDedicated) exitWith {};
if !(isClass (configFile >> "CfgPatches" >> "ace_medical")) exitWith {};
if !(CWR_AutoMessages_Uncon) exitWith {};

["ace_unconscious", {
    params ["_unit", "_state"];
    if !(isPlayer _unit) exitWith {};
    if !(_state) exitWith {};

    private _nearbyPlayers = [getPosATL _unit, CWR_Voice_VoiceRadius, CWR_Voice_RCUnitsSendsMessages] call CWR_fnc_getNearbyPlayers;
    format ["_nearbyPlayers = %1", _nearbyPlayers] call CWR_fnc_devLog;

    _nearbyPlayers = _nearbyPlayers select { [_x] call ace_common_fnc_isAwake; };
    if (count _nearbyPlayers == 0) exitWith {}; // No nearby conscious players

    _nearbyPlayers = [_unit, _nearbyPlayers] call CWR_fnc_sortByDistance;
    format ["Sorted _nearbyPlayers = %1", _nearbyPlayers] call CWR_fnc_devLog;

    private _closestPlayer = _nearbyPlayers#0;

    [_closestPlayer, format ["%1 is down!", name _unit]] call CWR_fnc_sendLocalMessage;

    private _isOnCooldown = ((time - (_closestPlayer getVariable ["CWR_playerLastUsedVoice", -CWR_Voice_CoolDown])) < CWR_Voice_CoolDown);

    private _config = (configFile >> "CWR_VoiceLines" >> "Unconscious");
    if (isClass _config and !_isOnCooldown) then {
        private _voiceLine = selectRandom getArray (_config >> "voiceLines");
        [_voiceLine, getPosASL _closestPlayer] call CWR_fnc_playLocalSound;
        _closestPlayer setVariable ["CWR_playerLastUsedVoice", time];
    };
}] call CBA_fnc_addEventHandler;
