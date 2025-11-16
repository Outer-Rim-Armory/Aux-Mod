#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns a vehicle's shield health. Can optionally return max health and current health, or format health as a percent.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: Whether to return the value as a percent (optional, default: false) <BOOL>
 * 2: Return max health with current health (optional, default: false)
 *    - [currentHealth, maxHealth]
 *
 * Return Value:
 * Shield health <NUMBER>
 *
 * Example:
 * objectParent ace_player call BNA_KC_shields_fnc_getHealth;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_returnPercent", false, [true]],
    ["_returnMax", false, [true]]
];
private ["_maxHealth", "_health", "_return"];
TRACE_3("fnc_getHealth",_vehicle,_returnPercent,_returnMax);

_hasShield = getNumber (configOf _vehicle >> QGVAR(hasShield));

if (isNull _vehicle or
    {!alive _vehicle} or
    {_hasShield isEqualTo FALSE}
) exitWith {-1};

_maxHealth = getNumber (configOf _vehicle >> QGVAR(health));
_health = _vehicle getVariable [QGVAR(health), _maxHealth];

_return = switch (true) do {
    case (_returnPercent and !_returnMax): {
        round ((_health / _maxHealth) * 100);
    };
    case (_returnPercent and _returnMax): {
        [round ((_health / _maxHealth) * 100), 100];
    };
    case (!_returnPercent and _returnMax): {
        [_health, _maxHealth];
    };
    default {_health;};
};

_return;
