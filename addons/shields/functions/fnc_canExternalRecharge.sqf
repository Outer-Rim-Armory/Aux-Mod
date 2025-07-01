#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if a player can recharge a vehicle's shield while grounded.
 *
 * Arguments:
 * 0: The vehicle to recharge <OBJECT>
 * 1: The unit attempting to recharge the vehicle <OBJECT>
 *
 * Return Value:
 * Whether the vehicle's shield can be recharged <BOOL>
 *
 * Example:
 * [_vehicle, ace_player] call BNA_KC_shields_fnc_canExternalRecharge;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
];
private ["_shieldHealth", "_hasToolkit"];
TRACE_2("fnc_canExternalRecharge",_vehicle,_unit);

_shieldHealth = [_vehicle, true] call FUNC(getHealth);
_hasToolkit = false;
{if (_x in items _unit) exitWith {_hasToolKit = true};} forEach ace_repair_allToolKits;

if (isNull _vehicle or
    {!isTouchingGround _vehicle} or
    {isNull _unit} or
    {!_hasToolkit} or
    {_shieldHealth == 100} or
    {!(_unit call ace_repair_fnc_isEngineer)}
) exitWith {false;};

true;
