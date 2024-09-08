#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Registers a given preset and budget to a specific side(s). Server execution only.
 *
 * Arguments:
 * 0: Class name from ACEX_Fortify_Presets <STRING>
 * 1: Budget to use <NUMBER>
 * 2: What side(s) to load the preset for (optional, default: [west]) <SIDE|ARRAY>
 *    - Can be side or array of sides
 *
 * Return Value:
 * True if a preset was loaded, otherwise false <BOOL>
 *
 * Example:
 * ["BNA_KC_fortify_Common", 100] call BNA_KC_fortify_fnc_registerPreset;
 *
 * Public: Yes
 */

params [
    ["_preset", "", [""]],
    ["_budget", -1, [0]],
    ["_sides", [west], [sideUnknown, []]]
];
private ["_allObjects", "_subPresets"];
TRACE_3("fnc_registerPreset",_preset,_budget,_sides);

if (!isServer or {_preset isEqualTo ""} or {_budget < 0}) exitWith {false};

if !(_sides isEqualType []) then {
    _sides = [_sides];
};

_allObjects = [];
_subPresets = getArray (configFile >> "ACEX_Fortify_Presets" >> _preset >> "presets");

{
    private ["_objects", "_presetName"];
    _presetName = _x;
    _objects = getArray (configFile >> "ACEX_Fortify_Presets" >> _presetName >> "objects");
    {_x pushBack _presetName} forEach _objects;

    _allObjects append _objects;
} forEach _subPresets;

_objects = getArray (configFile >> "ACEX_Fortify_Presets" >> _preset >> "objects");

_allObjects append _objects;

{
    [_x, _budget, _allObjects] call acex_fortify_fnc_registerObjects;
} forEach _sides;
true;