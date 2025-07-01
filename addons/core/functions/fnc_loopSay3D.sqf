#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a sound with a given delay. As long as the parameters are valid, the sound will always play at least once.
 *
 * Arguments:
 * 0: Sound source <OBJECT>
 * 1: CfgSounds class <STRING>
 * 2: Delay between each sound (optional: default 1) <NUMBER>
 * 3: Condition to play sound (optional: default {true}) <CODE>
 *    - Sound will be played as long as condition returns true.
 *      E.g. {alive (_this#0);} would stop sounds when the object is dead.
 *    - Condition gets [_object, _sound, _delay] passed as parameters
 *
 * Return Value:
 * None
 *
 * Example:
 * [_source, _sound, 3] call BNA_KC_core_fnc_loopSay3D;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_sound", "", [""]],
    ["_delay", 1, [0]],
    ["_condition", {true}, [{}]]
];
private ["_function"];
TRACE_4("fnc_loopSay3D",_object,_sound,_delay,_condition);

if (isNull _object or {_sound isEqualTo ""}) exitWith {};

(getArray (configFile >> "CfgSounds" >> _sound >> "sound")) params ["", "", "", "_distance"];
[QGVAR(forceSay3D), [_object, _sound, _distance]] call CBA_fnc_globalEvent;

_function = {
    params ["_object", "_sound", "_distance", "_delay", "_function", "_condition"];
    TRACE_6("fnc_loopSay3D (inner)",_object,_sound,_distance,_delay,_function,_condition);
    if !([_object, _sound, _delay] call _condition) exitWith {};
    [QGVAR(forceSay3D), [_object, _sound, _distance]] call CBA_fnc_globalEvent;

    [{private _function = _this#4; _this call _function;}, _this, _delay] call CBA_fnc_waitAndExecute;
};

[{
    private _function = _this#4;
    _this call _function;
}, [_object, _sound, _distance, _delay, _function, _condition], _delay] call CBA_fnc_waitAndExecute;
nil;
