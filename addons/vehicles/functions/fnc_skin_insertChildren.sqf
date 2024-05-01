#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Inserts child actions for each of a vehicle's TextureSources.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: The player attempting to change the texture <OBJECT>
 *
 * Return Value:
 * Child actions <ARRAY>
 *
 * Examples:
 * insertChildren = call BNA_KC_vehicles_fnc_skin_insertChildren;
 *
 * Public: Yes
 */

params ["_target", "_player"];
private ["_actions", "_textureSources"];
TRACE_2("fnc_skin_insertChildren",_target,_player);

_actions = [];
_textureSources = configProperties [configOf _target >> "TextureSources"];

{
    private ["_displayName", "_textures", "_childStatement", "_action"];

    _displayName = getText (_x >> "displayName");
    _textures = getArray (_x >> "textures");

    _childStatement = {
        params ["_target", "_player", "_params"];
        _params params ["_config", "_textures"];
        {
            _target setObjectTextureGlobal [_forEachIndex, _x];
        } forEach _textures;
        _target setVariable [QGVAR(currentSkin), configName _config, true];
    };

    _action = [
        format [QGVAR(switchSkin_%1), _x],
        _displayName,
        "",
        _childStatement,
        {true},
        {},
        [_x, _textures],
        [],
        0,
        [0, 0, 1, 1]
    ] call ace_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _target];
} forEach _textureSources;

_actions;