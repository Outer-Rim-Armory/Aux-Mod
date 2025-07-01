#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds a unit's jetpack name and picture to an ACE interaction.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * None
 *
 * Examples:
 * modifierFunction = "call BNA_KC_jetpacks_fnc_modifyInteraction";
 *
 * Public: No
 */

params ["_target", "_player", "_params", "_actionData"];
TRACE_4("fnc_modifyInteraction",_target,_player,_params,_actionData);

private _jetpackName = getText (configOf backpackContainer _target >> "displayName");
private _picture = getText (configOf backpackContainer _target >> "picture");

_actionData set [1, format [_actionData#1, _jetpackName]];
_actionData set [2, _picture];
