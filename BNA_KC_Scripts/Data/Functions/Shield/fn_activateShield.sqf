/*
 * Author: DartRuffian
 * Activates a vehicle's shield (if configured)
 *
 * Arguments:
 * vehicle: The vehicle to activate a shield on
 *
 * Return Value:
 * None
 *
 * Examples:
 * (vehicle player) call BNAKC_fnc_activateShield;
 */


#include "script_component.sqf"
params [["_vehicle", objNull, [objNull]]];
private ["_hasShield", "_shieldHealth"];

_hasShield =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_hasShield",
    0
] call BIS_fnc_returnConfigEntry;

if (isNull _vehicle) exitWith {};
if (_hasShield isEqualTo 0) exitWith {};

_shieldHealth =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_maxHealth",
    BASE_SHIELD_HEALTH
] call BIS_fnc_returnConfigEntry;

_vehicle setVariable ["BNA_KC_Shield_isActive", true, true];
if (_vehicle getVariable ["BNA_KC_Shield_health", -1] isEqualTo -1) then
{
    // -1 = shield is being activated for the first time
    _vehicle setVariable ["BNA_KC_Shield_health", _shieldHealth, true];
};
_vehicle call BNAKC_fnc_addShieldHandler;