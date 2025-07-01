#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Sets the fuel level of an object.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Fuel amount <NUMBER>
 *
 * Return Value:
 * The fuel amount of the container
 *
 * Examples:
 * [ace_player, 100] call BNA_KC_jetpacks_fnc_setFuel;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_fuelAmount", -1, [0]]
];
TRACE_2("fnc_setFuel",_object,_fuelAmount);

private _unit = objNull;
if (_object isKindOf "CAManBase") then {
    _unit = _object;
    _object = backpackContainer _object;
};

private _maxFuel = _object getVariable [QGVAR(maxFuel), getNumber (configOf _object >> QGVAR(fuel))];

if (isNull _object or {_maxFuel <= 0}) exitWith {-1};

private _oldFuel = _object getVariable [QGVAR(fuel), _maxFuel];
private _fuelAmount = CLAMP(_fuelAmount,0,_maxFuel);

_object setVariable [QGVAR(fuel), _fuelAmount, true];

if ([_unit, true] call ace_common_fnc_isPlayer) then {
    [QGVAR(fuelChanged), [_unit, _object, _oldFuel, _fuelAmount], _unit] call CBA_fnc_targetEvent;
};

_fuelAmount;
