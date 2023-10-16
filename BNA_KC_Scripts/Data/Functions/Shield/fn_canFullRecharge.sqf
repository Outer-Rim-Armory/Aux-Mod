/*
* Author: DartRuffian
* Checks whether the "Recharge Shields" external action should appear
*
* Arguments:
* vehicle: Object - The vehicle to recharge
* engineer: Object - The person repairing the vehicle
*
* Return Value:
* Boolean - Whether a vehicle's shields can be recharged
*
* Examples:
* [vehicle player, player] call BNAKC_fnc_canFullRecharge;
*/


#include "script_component.sqf"
params [["_vehicle", objNull, [objNull]], ["_engineer", objNull, [objNull]]];
private ["_shieldHealth", "_canRepair", "_hasToolkit", "_isRecharging"];

if (isNull _vehicle or isNull _engineer) exitWith {false};

_shieldHealth = [_vehicle, true] call BNAKC_fnc_getShieldHealth;
if (_shieldHealth == 100) exitWith {false};

if !(isTouchingGround _vehicle) exitWith {false};
if (_engineer distance _vehicle > 8) exitWith {false};

_canRepair = _engineer call ace_repair_fnc_isEngineer or _engineer call ace_repair_fnc_isNearRepairVehicle or _engineer call ace_repair_fnc_isInRepairFacility;
if !(_canRepair) exitWith {false};

_hasToolkit = false;
{if (_x in items player) exitWith {_hasToolKit = true};} forEach ace_repair_allToolKits;
if !(_hasToolKit) exitWith {false};

_isRecharging = _vehicle getVariable ["BNA_KC_Shield_isRecharging", false];
if (_isRecharging) exitWith {false};

true;