#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Child actions for "Mark Self" interaction.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * Sub-actions <ARRAY>
 *
 * Example:
 * insertChildren = "call BNA_KC_map_fnc_insertChildren";
 *
 * Public: No
 */

params ["_target", "_player", "_params"];
private ["_colorNames", "_actions"];
TRACE_3("fnc_markSelfInsertChildren",_target,_player,_params);
_colorNames = parseSimpleArray GVAR(quickMarkColors);
_actions = [];

{
    private ["_childStatement", "_action"];
    _childStatement = {
        [GVAR(markSelfChannel), _this#2#0] call FUNC(markSelf);
    };

    _action = [
        format ["mark%1", _x], "", ["", "#FFFFFF"],
        _childStatement, {true}, {}, [_x], [0,0,0], 0, [0,1,1,0,1], {
            params ["_target", "_player", "_params", "_actionData"];
            _params params ["_color"];
            private ["_colorCode"];

            _colorCode = [
                configFile >> "CfgMarkerColors" >> _color,
                "color",
                [0, 0, 0, 1]
            ] call BIS_fnc_returnConfigEntry;

            (_actionData select 2) set [1, [_colorCode] call EFUNC(core,rgbToHex)];
        }
    ] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach _colorNames;

_actions;
