/*
 * Author: DartRuffian
 * Removed jetpack effects from a given unit.
 *
 * Arguments:
 * unit: Object - The unit to remove particles from.
 *
 * Return Value:
 * None
 *
 * Example:
 * player call BNAKC_Jetpacks_fnc_deleteEffects;
 */


params ["_unit"];

private _allSources = _unit getVariable ["BNA_KC_Jet_effectSources", [[]]];
format ["_allSources: %1", _allSources] call BNAKC_fnc_devLog;
private _sources = _allSources deleteAt 0;
format ["_sources: %1", _sources] call BNAKC_fnc_devLog;
{
    format ["_x: %1", _x] call BNAKC_fnc_devLog;
    deleteVehicle _x;
} forEach _sources;

if (_allSources isEqualTo []) then { _allSources = nil; };
_unit setVariable ["BNA_KC_Jet_effectSources", _allSources, true];

_allSources = _unit getVariable ["BNA_KC_Jet_effectSources", [[]]];
format ["_allSources: %1", _allSources] call BNAKC_fnc_devLog;