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
private ["_hasShield", "_shieldHealth"];

_hasShield =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_hasShield",
    0
] call BIS_fnc_returnConfigEntry;

if (isNull _vehicle) exitWith {};
if (_hasShield isEqualTo 0) exitWith {};

_vehicle setVariable ["BNA_KC_Shield_isActive", false, true];