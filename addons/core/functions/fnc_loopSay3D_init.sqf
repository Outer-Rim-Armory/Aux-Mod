#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Loads config properties from a given object and then calls fnc_loopSay3D.
 *
 * Arguments:
 * 0: Sound source <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _source call BNA_KC_core_fnc_loopSay3D_init;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]]
];
private ["_filePath", "_soundDelay"];
TRACE_1("fnc_loopSay3D_init",_object);

if (isNull _object) exitWith {};

_filePath = getText (configOf _object >> QGVAR(soundLoop));
_soundDelay = getNumber (configOf _object >> QGVAR(soundLoopDelay));

[_object, _filePath, _soundDelay] call FUNC(loopSay3D);
nil;