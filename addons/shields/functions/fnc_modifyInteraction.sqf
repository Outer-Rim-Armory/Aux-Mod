#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Modifier for the main shield ace action
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * None
 *
 * Examples:
 * modifierFunction = "_this call BNA_KC_shields_fnc_modifyInteraction;"
 *
 * Public: No
 */

params ["_target", "_player", "_params", "_actionData"];
private ["_color", "_actionName"];
TRACE_4("fnc_modifyInteraction",_target,_player,_params,_actionData);

[_target, true, true] call FUNC(getHealth) params ["_health", "_maxHealth"];
_color = [_health, _maxHealth] call FUNC(healthColor);

_actionName = _actionData#1;
_actionName = format [_actionName, format [
    "<t color='%1'>%2%3</t>",
    _color,
    _health,
    "%"
]];
_actionData set [1, _actionName];
