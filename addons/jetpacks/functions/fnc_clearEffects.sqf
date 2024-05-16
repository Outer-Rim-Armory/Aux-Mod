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
 * ace_player call BNA_KC_jetpacks_clearEffects;
 *
 * Public: No
 */

params ["_unit"];

private _effects = _unit getVariable [QGVAR(effects), []];
private _numEffects = count _effects;
TRACE_3("fnc_clearEffects",_unit,_effects,_numEffects);

{deleteVehicle _x;} forEach _effects;

_unit setVariable [QGVAR(effects), nil];
GVAR(totalParticles) = (GVAR(totalParticles) - _numEffects) max 0;

nil;