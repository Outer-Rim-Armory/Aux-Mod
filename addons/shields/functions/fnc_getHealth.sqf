#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns a vehicle's shield health.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: Whether to return the value as a percent (optional, default: false) <BOOL>
 *
 * Return Value:
 * Shield health <NUMBER>
 *
 * Example:
 * objectParent ace_player call BNA_KC_shields_fnc_getHealth;
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_returnPercent", false, [true]]
];
private ["_maxHealth", "_health"];
TRACE_2("fnc_getHealth",_vehicle,_returnPercent);

_hasShield = [
    configFile >> "CfgVehicles" >> typeOf _vehicle,
    QGVAR(hasShield),
    FALSE
];

if (isNull _vehicle or {
    !alive _vehicle or
    _hasShield isEqualTo FALSE
}) exitWith {0};

_maxHealth = [
    configFile >> "CfgVehicles" >> typeOf _vehicle,
    QGVAR(health),
    SHIELD_HEALTH_DEFAULT
] call BIS_fnc_returnConfigEntry;
_health = _vehicle getVariable [QGVAR(health), _maxHealth];

if (_returnPercent) then {
    _health = round ((_health / _maxHealth) * 100);
};

_health;