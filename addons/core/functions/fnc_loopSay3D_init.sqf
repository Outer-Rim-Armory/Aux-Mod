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
private ["_sound", "_soundDelay", "_condition"];
TRACE_1("fnc_loopSay3D_init",_object);

if (isNull _object or {!hasInterface}) exitWith {};

_sound = getText (configOf _object >> QGVAR(soundLoop));
_soundDelay = getNumber (configOf _object >> QGVAR(soundLoopDelay));
_condition = compile (getText (configOf _object >> QGVAR(soundLoopCondition)));

[{!isNull findDisplay 46;}, {
    _this call FUNC(loopSay3D);
}, [_object, _sound, _soundDelay, _condition]] call CBA_fnc_waitUntilAndExecute;
nil;
