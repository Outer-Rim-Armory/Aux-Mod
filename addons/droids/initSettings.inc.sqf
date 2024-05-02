[
    QGVAR(healthB2),
    "SLIDER",
    ["B2 Health", "Amount of hits required to kill a B2 Super Battle Droid."],
    [QUOTE(MOD_NAME), "Battle Droids"],
    [1, 50, 20, -1],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(canRevive),
    "CHECKBOX",
    ["Can Revive", "Whether some battle droids have a chance to revive on death."],
    [QUOTE(MOD_NAME), "Battle Droids"],
    true,
    TRUE
] call CBA_fnc_addSetting;