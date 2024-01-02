#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Gets properties assigned in an object's config and creates a looping audio track.
 *
 * Arguments:
 * 0: Sounde source <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _source call BNA_KC_core_fnc_soundLoopInit;
 */

params [
	["_object", objNull, [objNull]]
];
private ["_filePath", "_soundDelay"];
TRACE_1("fnc_soundLoopInit",_object);

if (isNull _object) exitWith {};

_filePath = [
    configFile >> "CfgVehicles" >> typeOf _object,
    QGVAR(soundLoop),
    ""
] call BIS_fnc_returnConfigEntry;

_soundDelay = [
    configFile >> "CfgVehicles" >> typeOf _object,
    QGVAR(soundLoopDelay),
    ""
] call BIS_fnc_returnConfigEntry;

[_object, _filePath, _soundDelay] call FUNC(soundLoop);