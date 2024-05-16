#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Sets the fuel level of a unit's jetpack.
 * Can optionally return fuel level as a percentage of max fuel.
 *
 * Arguments:
 * 0: Unit to check <OBJECT>
 * 1: Return value as percentage (optional, default: false) <BOOL>
 *    - Scale from 0..1
 *
 * Return Value:
 * Remaining fuel <NUMBER>
 *
 * Example:
 * [ace_player, true] call BNA_KC_jetpacks_fnc_getFuel;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_returnPercent", false, [false]]
];
TRACE_2("fnc_getFuel",_unit,_returnPercent);

if (isNull _unit or {!(_unit call FUNC(hasJetpack))}) exitWith {-1};

private _jetpack = backpackContainer _unit;
private _maxFuel = _jetpack getVariable [QGVAR(maxFuel), getNumber (configOf _jetpack >> QGVAR(fuel))];
private _fuel = _jetpack getVariable [QGVAR(fuel), _maxFuel];

_jetpack setVariable [QGVAR(fuel), _fuel, true];
_jetpack setVariable [QGVAR(maxFuel), _maxFuel, true];

if (_returnPercent) then {
    _fuel = _fuel / _maxFuel;
};

_fuel;