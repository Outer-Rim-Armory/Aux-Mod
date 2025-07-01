#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Calculates the shield health color based off the current and maximum health.
 *
 * Arguments:
 * 0: Current health <NUMBER>
 * 1: Maximum health <NUMBER>
 *
 * Return Value:
 * Hex code for color <STRING>
 *
 * Example:
 * [50, 100] call BNA_KC_shields_fnc_healthColor;
 *
 * Public: No
 */

params [
    ["_health", 0, [0]],
    ["_maxHealth", 0, [0]]
];
private ["_color"];
TRACE_2("fnc_healthColor",_health,_maxHealth);

_color = SHIELD_DAMAGE_COLOR_SCALE select (
    linearConversion [0, 1, (_health/_maxHealth), 0, 8, true]
);
_color;
