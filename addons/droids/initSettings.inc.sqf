[
    QGVAR(healthB2),
    "SLIDER",
    ["B2 Health", "The total amount of damage required to kill a B2 Super Battle Droid."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [1, 300, 20, -1], // ! Testing numbers, finalize before release
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(minimumHitsB2),
    "SLIDER",
    ["B2 Health", "The minimumm number of hits required to kill a B2 Super Battle Droid."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [1, 50, 20, -1], // ! Testing numbers, finalize before release
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(canRevive),
    "CHECKBOX",
    ["Can Revive", "Whether some battle droids have a chance to revive on death."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    TRUE
] call CBA_fnc_addSetting;