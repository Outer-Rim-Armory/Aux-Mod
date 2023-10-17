/*
* Author: DartRuffian
* Recharges a vehicle's shield to full
*
* Arguments:
* vehicle: Object - The vehicle to recharge
*
* Return Value:
* None
*
* Examples:
* (vehicle player) call BNAKC_fnc_shieldFullCharge;
*/


#include "script_component.sqf"
params [["_vehicle", objNull, [objNull]]];
private ["_maxHealth", "_oldHealth"];

if (isNull _vehicle) exitWith {};

_maxHealth =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_maxHealth",
    BASE_SHIELD_HEALTH
] call BIS_fnc_returnConfigEntry;
_oldHealth = _vehicle call BNAKC_fnc_getShieldHealth;
_vehicle setVariable ["BNA_KC_Shield_health", _maxHealth, true];
["BNA_KC_shieldHealthChanged", [_vehicle, _oldHealth, _maxHealth]] call CBA_fnc_localEvent;