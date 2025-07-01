#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Creates ACE child actions for deploying items.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * Child actions for interaction <ARRAY>
 *
 * Example:
 * insertChildren = "_this call BNA_KC_objects_deployInsertChildren";
 */

params [
    ["_target", objNull, [objNull]],
    ["_player", objNull, [objNull]]
];
private ["_actions", "_deployableItems"];
TRACE_2("fnc_deployInsertChildren",_target,_player);

_actions = [];

_deployableItems = (_player call ace_common_fnc_uniqueItems) select {
    private _canDeploy = [
        configFile >> "CfgWeapons" >> _x,
        QGVAR(isDeployable),
        FALSE
    ] call BIS_fnc_returnConfigEntry;
    _canDeploy isEqualTo TRUE;
};

{
    private ["_displayName", "_picture", "_action"];
    _displayName = [
        configFile >> "CfgWeapons" >> _x,
        "displayName",
        "Unknown"
    ] call BIS_fnc_returnConfigEntry;

    _picture = [
        configFile >> "CfgWeapons" >> _x,
        "picture",
        ""
    ] call BIS_fnc_returnConfigEntry;

    _action = [
        format [QUOTE(GVAR(deploy_%1)), _x],
        _displayName,
        _picture,
        {
            params ["_target", "_player", "_item"];
            TRACE_3("Deploy action",_target,_player,_item);
            [_player, _item] call FUNC(deployItem);
        },
        {true},
        {},
        _x
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _target];
} forEach _deployableItems;

_actions;
