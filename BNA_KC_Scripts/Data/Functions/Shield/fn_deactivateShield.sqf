/*
 * Author: DartRuffian
 * Dectivates a vehicle's shield
 *
 * Arguments:
 * vehicle: The vehicle to deactivate the shield of
 *
 * Return Value:
 * None
 *
 * Examples:
 * (vehicle player) call BNAKC_fnc_deactivateShield;
 */


params [["_vehicle", objNull, [objNull]]];
private ["_hasShield", "_shieldHealth", "_damageHandler"];

_hasShield =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_hasShield",
    0
] call BIS_fnc_returnConfigEntry;
_damageHandler = _vehicle getVariable ["BNA_KC_Shield_damageHandler", -1]; // EH ids will never be negative

if (isNull _vehicle) exitWith {};
if (_hasShield isEqualTo 0) exitWith {};
if (_damageHandler isEqualTo -1) exitWith {};

_vehicle setVariable ["BNA_KC_Shield_isActive", false, true];
_vehicle removeEventHandler ["HandleDamage", _damageHandler];
["BNA_KC_shieldToggle", [_vehicle, false, _vehicle getVariable "BNA_KC_Shield_health"]] call CBA_fnc_localEvent;