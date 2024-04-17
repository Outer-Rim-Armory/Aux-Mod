#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Inserts child actions for each of an AT-RT's TextureSources.
 *
 * Arguments:
 * 0: The target <OBJECT>
 *
 * Return Value:
 * Child actions <ARRAY>
 *
 * Examples:
 * insertChildren = call BNA_KC_vehicles_fnc_skin_insertChildren;
 *
 * Public: Yes
 */

params ["_target"];
private ["_atrt", "_actions", "_textureSources"];

_atrt = _target getVariable [QGVAR(atrt_riding), objNull];

TRACE_2("fnc_atrt_skin_insertChildren",_target,_atrt);

_actions = [];
_textureSources = configProperties [configOf _atrt >> "TextureSources"];

{
    private ["_displayName", "_textures", "_childStatement", "_action"];

    _displayName = getText (_x >> "displayName");
    _textures = getArray (_x >> "textures");

    _childStatement = {
        params ["_target", "_player", "_textures"];
        {
            _atrt = _target getVariable [QGVAR(atrt_riding), objNull];
            _atrt setObjectTextureGlobal [_forEachIndex, _x];
        } forEach _textures;
    };

    _action = [
        format [QGVAR(switchSkin_%1), _x],
        _displayName,
        "",
        _childStatement,
        {true},
        {},
        _textures,
        [],
        0,
        [0, 0, 1, 1]
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _target];
} forEach _textureSources;

_actions;