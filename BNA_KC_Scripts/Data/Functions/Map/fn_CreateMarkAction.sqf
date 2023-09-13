/*
 * Author: DartRuffian
 * Adds an ACE Self Interact action to the player.
 * The action is only displayed if BNA_KC_Map_CreateMarkBind is not set.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_fnc_CreateMarkAction;
 */


private _markAction =
[
    "BNA_KC_CreateMark_Action",
    "Mark Self",
    "", // Icon
    { [] call BNAKC_fnc_CreateMarkOnSelf; },
    { BNA_KC_Map_ShowAceAction },
    {
        // Insert children
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

            _actions pushBack [_action, [], _target]; // New action, it's children, and the action's target
        } forEach _colorNames;

        _actions;
    }
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _markAction] call ace_interact_menu_fnc_addActionToObject;