/*
 * Author: DartRuffian
 * Insert Children function for Mark Self ACE Action, adds children color actions
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Examples:
 * call BNAKC_fnc_loadAllSettings;
 */


params ["_target", "_player", "_params"];
private _colorNames = parseSimpleArray BNA_KC_Map_QuickMarkColors;
private _actions = [];

{
    private _childStatement = { [BNA_KC_Map_MarkChannel, _this#2#0] call BNAKC_fnc_CreateMarkOnSelf; };
    private _action =
    [
        format ["mark%1", _x], "", ["", "#FFFFFF"], _childStatement, {true}, {}, [_x], [0,0,0], 0, [0,1,1,0,1],
        {
            params ["_target", "_player", "_params", "_actionData"];
            _params params ["_color"];

            private _colorCode =
            [
                configFile >> "CfgMarkerColors" >> _color,
                "color",
                [0, 0, 0, 1]
            ] call BIS_fnc_returnConfigEntry;

            (_actionData select 2) set [1, [_colorCode] call BNAKC_fnc_rgbToHex];
        }
    ] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach _colorNames;

_actions;