#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a given sound local to each client based on a given CBA setting, or any global variable.
 *
 * Arguments:
 * 0: Path to sound to play if true <STRING>
 * 1: Path to sound to play if false <STRING>
 * 2: Position to play the sound at the format PositionASL <ARRAY>
 * 3: Condition to check <STRING>
 * 4: Code to run for volume (optional, default: "1") <STRING>
 * 5: Code to run for pitch (optional, default: "1") <STRING>
 *
 * Return Value:
 * None
 *
 * Examples:
 * ["path\to\trueSound.wss", "path\to\falseSound.wss", [0,0,0], "CBA_settingEnabled", "CBA_settingVolume", "1"] call BNA_KC_core_fnc_playLocalSound;
 */

params [
    ["_trueFile", "", [""]],
    ["_falseFile", "", [""]],
    ["_positionASL", [], [], 3],
    ["_condition", "false", [""]],
    ["_volume", "1", [""]],
    ["_pitch", "1", [""]]
];
private [];
TRACE_6("fnc_playLocalSound",_trueFile,_falseFile,_condition,_positionASL,_volume,_pitch);

if !(_positionASL isEqualTypeParams [0,0,0]) exitWith {WARNING_2("Array of non-numbers passed to %1. (%2)",_fnc_scriptName,_positionASL);};

if (call compile _condition) then {
    playSound3D [
        _trueFile,
        objNull,
        false,
        _positionASL,
        call compile _volume,
        call compile _pitch,
        0,
        0,
        true
    ];
} else {
    playSound3D [
        _falseFile,
        objNull,
        false,
        _positionASL,
        call compile _volume,
        call compile _pitch,
        0,
        0,
        true
    ];
};

nil;
