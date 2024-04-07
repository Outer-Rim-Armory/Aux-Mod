#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a sound file with a given delay.
 *
 * Arguments:
 * 0: Sound source <OBJECT>
 * 1: Path to sound <STRING>
 * 2: Delay between each sound (optional: default 1) <NUMBER>
 * 3: Condition to play sound (optional: default {true}) <CODE>
 *    - Condition always checks for isNull _object and is not required.
 *    - Condition gets [_object, _filePath, _delay] passed as parameters
 *
 * Return Value:
 * None
 *
 * Example:
 * [_source, _filePath, 3] call BNA_KC_core_fnc_soundLoop;
 */

params [
    ["_object", objNull, [objNull]],
    ["_filePath", "", [""]],
    ["_delay", 1, [0]],
    ["_condition", {true}, [{}]]
];
private ["_function"];
TRACE_4("fnc_soundLoop",_object,_filePath,_delay,_condition);

if (!alive _object or {
    _filePath isEqualTo "" or
    !([_object, _filePath, _delay] call _condition)
}) exitWith {};
playSound3D [_filePath, objNull, false, getPosASL _object, 1, 1, 50];

_function = {
    params ["_object", "_filePath", "_delay", "_function"];
    if (!alive _object or !([_object, _filePath, _delay] call _condition)) exitWith {};
    playSound3D [_filePath, objNull, false, getPosASL _object, 1, 1, 50];

    [{
        params ["_object", "_filePath", "_delay", "_function"];
        [_object, _filePath, _delay, _function] call _function;
    }, [_object, _filePath, _delay, _function], _delay] call CBA_fnc_waitAndExecute;
};

[{
    params ["_object", "_filePath", "_delay", "_function"];
    [_object, _filePath, _delay, _function] call _function;
}, [_object, _filePath, _delay, _function], _delay] call CBA_fnc_waitAndExecute;

nil;