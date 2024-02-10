#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a sound file with a given delay.
 *
 * Arguments:
 * 0: Sound source <OBJECT>
 * 1: Path to sound <STRING>
 * 2: Delay between each sound (optional: default 1) <NUMBER>
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
    ["_delay", 1, [0]]
];
private ["_function"];
TRACE_3("fnc_soundLoop",_object,_filePath,_delay);

if (isNull _object or {_filePath isEqualTo ""}) exitWith {};
playSound3D [_filePath, objNull, false, getPosASL _object, 1, 1, 50];

_function = {
    params ["_object", "_filePath", "_delay", "_function"];
    if (isNull _object) exitWith {};
    playSound3D [_filePath, objNull, false, getPosASL _object, 1, 1, 50];

    [{
        params ["_object", "_filePath", "_delay", "_function"];
        [_object, _filePath, _delay, _function] call _function;
    }, [_object, _filePath, _delay, _function], _delay] call CBA_fnc_waitAndExecute;
};

[
    {
        params ["_object", "_filePath", "_delay", "_function"];
        [_object, _filePath, _delay, _function] call _function;
    },
    [_object, _filePath, _delay, _function],
    _delay
] call CBA_fnc_waitAndExecute;

nil;