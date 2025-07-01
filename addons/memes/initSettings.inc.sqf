#ifdef APRIL_FOOL
[
    QGVAR(playBuildMusic),
    "CHECKBOX",
    ["Build Music", "Plays music when a player is building."],
    [QUOTE(MOD_NAME), "Fortify"],
    true,
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(playBuildMusicGlobal),
    "CHECKBOX",
    ["Build Music - Is Global", "If enabled, build music will be played for all nearby players."],
    [QUOTE(MOD_NAME), "Fortify"],
    true,
    TRUE
] call CBA_fnc_addSetting;
#endif
