#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Registers the selected preset and budget from CBA settings
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call FUNC(registerPreset);
 */

params [];
private ["_allObjects", "_presets"];
INFO("fnc_registerPreset");

{
    [_x, 0, []] call acex_fortify_fnc_registerObjects;
} forEach [west, east, independent];

if (GVAR(preset) isEqualTo "Disabled") exitWith {};

_allObjects = [];
_presets = [
    configFile >> "ACEX_Fortify_Presets" >> GVAR(preset),
    "presets",
    []
] call BIS_fnc_returnConfigEntry;

{
    private ["_objects", "_presetName"];
    _presetName = _x;
    _objects = getArray (configFile >> "ACEX_Fortify_Presets" >> _presetName >> "objects");
    {_x pushBack _presetName} forEach _objects;

    _allObjects append _objects;
} foreach _presets;

_objects = [
    configFile >> "ACEX_Fortify_Presets" >> GVAR(preset),
    "objects",
    []
] call BIS_fnc_returnConfigEntry;

_allObjects append _objects;

{
    [
        _x,
        parseNumber GVAR(budget),
        _allObjects
    ] call acex_fortify_fnc_registerObjects;
} forEach GVAR(sides);