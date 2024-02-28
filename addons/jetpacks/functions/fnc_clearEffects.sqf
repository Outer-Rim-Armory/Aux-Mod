#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deletes jetpack effects from a unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ace_player call FUNC(clearEffects);
 */

params ["_unit"];
private ["_effects", "_totalEffects"];

_effects = _unit getVariable [QGVAR(effectSources), []];
_numEffects = count _effects;
TRACE_3("fnc_clearEffects",_unit,_effects,_numEffects);

{deleteVehicle _x;} forEach _effects;

_unit setVariable [QGVAR(effectSources), nil, true];

_totalEffects = missionNamespace getVariable [QGVAR(totalEffects), _numEffects];
_totalEffects = _totalEffects - _numEffects;
missionNamespace setVariable [QGVAR(totalEffects), _totalEffects, true];

nil;