#include "..\script_component.hpp"
/*
 * Author: WebKnight
 * Rewritten by DartRuffian
 * Initalizes a B2 Super Battle Droid type unit.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * _unit call BNA_KC_droids_fnc_initB2
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
private ["_health", "_hitCount"];
TRACE_1("fnc_initB2",_unit);

if (!alive _unit or {!local _unit}) exitWith {};

_health = _unit getVariable [QGVAR(health), GVAR(healthB2)];
_unit setVariable [QGVAR(health), _health, true];

_hitCount = _unit getVariable [QGVAR(hitCount), GVAR(minimumHitsB2)];
_unit setVariable [QGVAR(hitCount), _hitCount, true];

// Animations are set onto the unit so a single handleDamage function can be used for all droids
_unit setVariable [QGVAR(hitAnim), QGVAR(B2_hit)];
_unit setVariable [QGVAR(idleAnim), QGVAR(B2_idle)];
_unit addEventHandler ["HandleDamage", LINKFUNC(handleDamage)];

_unit forceWalk true;
// _unit execVM "\WebKnightsRobotics\AI\AI_WBK_B2_BattleDroid.sqf";

if (isNull objectParent _unit) then {
    _unit switchMove QGVAR(B2_idle);
};

_unit addEventHandler ["GetOutMan", {
    params ["_unit"];
    _unit switchMove QGVAR(B2_idle);
}];

nil;