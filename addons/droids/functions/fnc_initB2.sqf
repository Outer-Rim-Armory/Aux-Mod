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
private ["_animation"];
TRACE_1("fnc_initB2",_unit);

_animation = animationState _unit;

if (isNull _unit or {!alive _unit} or {!local _unit}) exitWith {};

_unit setVariable ["Droid_Health", GVAR(healthB2), true];
[_unit, "forceWalk", QUOTE(ADDON), true] call ace_common_fnc_statusEffect_set;
_unit execVM "\WebKnightsRobotics\AI\AI_WBK_B2_BattleDroid.sqf";

if !(isNull objectParent _unit) then {
    [{
        params ["_unit", "_animation"];
        [_unit, _animation, 2] call ace_common_fnc_doAnimation;
    }, [_unit, _animation], 1] call CBA_fnc_waitAndExecute;
};

_unit addEventHandler ["GetOutMan", {
    params ["_unit"];
    [_unit, "B2_SupperBattleDroid_idle", 2] call ace_common_fnc_doAnimation;
}];

nil;