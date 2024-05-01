private _action =
[
    "Open_Arsenal",
    "Open ACE Arsenal",
    "",
    {
        [player, player, true] call ace_arsenal_fnc_openBox;
    },
    { true; }
] call ace_interact_menu_fnc_createAction;

[
    player,
    1,
    ["ACE_SelfActions"],
    _action
] call ace_interact_menu_fnc_addActionToObject;


// Change Time
_action =
[
    "Time_Root",
    "Set Time",
    "",
    {},
    { true; }
] call ace_interact_menu_fnc_createAction;
[
    player,
    1,
    ["ACE_SelfActions"],
    _action
] call ace_interact_menu_fnc_addActionToObject;

_action =
[
    "Time_Noon",
    "Noon",
    "",
    {
        ((12 - dayTime + 24) % 24) remoteExec ["skipTime"];
    },
    {true}
] call ace_interact_menu_fnc_createAction;
[
    player,
    1,
    ["ACE_SelfActions", "Time_Root"],
    _action
] call ace_interact_menu_fnc_addActionToObject;

_action =
[
    "Time_Midnight",
    "Midnight",
    "",
    {
        ((24 - dayTime + 24) % 24) remoteExec ["skipTime"];
    },
    {true}
] call ace_interact_menu_fnc_createAction;
[
    player,
    1,
    ["ACE_SelfActions", "Time_Root"],
    _action
] call ace_interact_menu_fnc_addActionToObject;