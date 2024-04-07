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

if (!alive _object) exitWith {};

_filePath = getText (configOf _object >> QGVAR(soundLoop));
_soundDelay = getNumber (configOf _object >> QGVAR(soundLoopDelay));

[_object, _filePath, _soundDelay] call FUNC(soundLoop);
nil;