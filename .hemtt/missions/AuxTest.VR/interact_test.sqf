params ["_object"];
_p = _object selectionNames "Memory";

{
    _action = [_x, _x, "", {
        params ["_target", "_player", "_selection"];
        copyToClipboard _selection;
    }, {true}, {}, _x, _x, 10] call ace_interact_menu_fnc_createAction;

    [_object, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;
} forEach _p;
