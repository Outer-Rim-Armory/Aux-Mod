/*
 * Author: DartRuffian
 * Registers the selected preset and budget to the west (blufor) side.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_fnc_registerPreset;
 */


private ["_allObjects", "_presets", "_objects"];
if (BNA_KC_FortifyPreset isEqualTo "Disabled") exitWith {};

_allObjects = [];
_presets =
[
    configFile >> "ACEX_Fortify_Presets" >> BNA_KC_FortifyPreset,
    "presets",
    []
] call BIS_fnc_returnConfigEntry;

{
    private ["_objects", "_presetName"];
    _presetName = _x;
    _objects = getArray (configFile >> "ACEX_Fortify_Presets" >> _presetName >> "objects");
    _objects apply {_x pushBack _presetName};

    _allObjects append _objects;
} foreach _presets;

_objects =
[
    configFile >> "ACEX_Fortify_Presets" >> BNA_KC_FortifyPreset,
    "objects",
    []
] call BIS_fnc_returnConfigEntry;

_allObjects append _objects;

[
    west,
    parseNumber BNA_KC_FortifyBudget,
    _allObjects
] call acex_fortify_fnc_registerObjects;