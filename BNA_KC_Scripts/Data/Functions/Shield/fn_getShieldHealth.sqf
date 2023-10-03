/*
* Author: DartRuffian
* Returns the shield health of a given vehicle. Either exact value or range from 0 to 100.
*
* Arguments:
* vehicle: Object - Vehicle to get the shield health of
* returnPercent: Boolean - (Optional, default False) Whether to return value as a percentage
*
* Return Value:
* Number - Current shield health, or percentage of shield health
*
* Examples:
* (vehicle player) call BNAKC_fnc_getShieldHealth; // 5
* [vehicle player, true] call BNAKC_fnc_getShieldHealth; // Range from 0 to 100
*/


#include "script_component.sqf"
params [["_vehicle", objNull, [objNull]], ["_returnPercent", false, [true]]];
private ["_shieldMaxHealth", "_shieldHealth"];

if (isNull _vehicle) exitWith {};

_shieldMaxHealth =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_maxHealth",
    BASE_SHIELD_HEALTH
] call BIS_fnc_returnConfigEntry;
_shieldHealth = _vehicle getVariable ["BNA_KC_Shield_health", _shieldMaxHealth];

if (_returnPercent) then
{
    _shieldHealth = round ((_shieldHealth / _shieldMaxHealth) * 100);
};

_shieldHealth;