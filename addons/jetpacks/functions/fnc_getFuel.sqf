#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns current fuel level of a given jetpack, can optionally return value as percentage of current fuel / max fuel (range from 0..1).
 *
 * Arguments:
 * 0: Entity to check, can be unit or backpackContainer <OBJECT>
 * 1: Return value as percentage (optional, default: false) <BOOL>
 *
 * Return Value:
 * Remaining fuel <NUMBER>
 *
 * Example:
 * (backpackContainer ace_player) call FUNC(getFuel);
 * [ace_player, true] call FUNC(getFuel);
 */

params [
    ["_entity", objNull, [objNull]],
    ["_returnPercent", false, [false]]
];
private ["_jetpack", "_jetpackClass", "_maxFuel", "_fuel"];
TRACE_2("fnc_getFuel",_entity,_returnPercent);

if (isNull _entity) exitWith {};

_jetpack = objNull;
_jetpackClass = "";

if (_entity isKindOf "CAManBase") then {
    _jetpack = backpackContainer _entity;
    _jetpackClass = backpack _entity;
} else {
    _jetpack = _entity;
    _jetpackClass = typeOf _entity;
};

_maxFuel = getNumber (configFile >> "CfgVehicles" >> _jetpackClass >> QGVAR(fuel));
_fuel = _jetpack getVariable [QGVAR(fuel), _maxFuel];
_jetpack setVariable [QGVAR(fuel), _fuel, true];
_jetpack setVariable [QGVAR(maxFuel), _maxFuel, true];

if (_returnPercent) then {
    _fuel = _fuel / _maxFuel;
};

_fuel;