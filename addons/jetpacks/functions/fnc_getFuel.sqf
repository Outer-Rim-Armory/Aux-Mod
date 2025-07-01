#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Gets the fuel level of an object.
 * Can optionally return fuel level as a percentage of max fuel.
 *
 * Arguments:
 * 0: Object to check <OBJECT>
 *    - If unit is passed, it will check backpackContainer
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
    ["_object", objNull, [objNull]],
    ["_returnPercent", false, [false]]
];
TRACE_2("fnc_getFuel",_object,_returnPercent);

if (_object isKindOf "CAManBase") then {
    _object = backpackContainer _object;
};

private _maxFuel = _object getVariable [QGVAR(maxFuel), getNumber (configOf _object >> QGVAR(fuel))];
if (isNull _object or {_maxFuel <= 0}) exitWith {-1};

private _fuel = _object getVariable [QGVAR(fuel), _maxFuel];

_object setVariable [QGVAR(fuel), _fuel, true];
_object setVariable [QGVAR(maxFuel), _maxFuel, true];

if (_returnPercent) then {
    _fuel = _fuel / _maxFuel;
};

_fuel;
