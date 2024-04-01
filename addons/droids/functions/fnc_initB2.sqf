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
private ["_health"];
TRACE_1("fnc_initB2",_unit);

if (isNull _unit or {!alive _unit} or {!local _unit}) exitWith {};

_unit setVariable ["Droid_Health", GVAR(healthB2), true];
_unit execVM "\WebKnightsRobotics\AI\AI_WBK_B2_BattleDroid.sqf";