#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Sets the fuel level of a unit's jetpack.
 * Can optionally return fuel level as a percentage of max fuel.
 *
 * Arguments:
 * 0: Unit to check <OBJECT>
 * 1: Return value as percentage (optional, default: false) <BOOL>
 *
 * Return Value:
 * Remaining fuel <NUMBER>
 *
 * Example:
 * [ace_player, true] call FUNC(getFuel);
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_returnPercent", false, [false]]
];
private ["_jetpack", "_maxFuel", "_fuel"];
TRACE_2("fnc_getFuel",_unit,_returnPercent);

_jetpack = backpackContainer _unit;

if (isNull _unit or {!(_unit call FUNC(hasJetpack))}) exitWith {};

_maxFuel = _jetpack getVariable [QGVAR(maxFuel), 100];
_fuel = _jetpack getVariable [QGVAR(fuel), _maxFuel];

_jetpack setVariable [QGVAR(fuel), _fuel, true];
_jetpack setVariable [QGVAR(maxFuel), _maxFuel, true];

if (_returnPercent) then {
    _fuel = _fuel / _maxFuel;
};

_fuel;