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

private _sources = _unit getVariable ["BNA_KC_Jet_effectSources", []];
format ["_sources: %1", _sources] call BNAKC_fnc_devLog;
{
    format ["_x: %1", _x] call BNAKC_fnc_devLog;
    deleteVehicle _x;
} forEach _sources;

_unit setVariable ["BNA_KC_Jet_effectSources", nil, true];

_sources = _unit getVariable ["BNA_KC_Jet_effectSources", []];
format ["_sources: %1", _sources] call BNAKC_fnc_devLog;