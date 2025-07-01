[
    QGVAR(armorPhase),
    "LIST",
    ["Armor Phase", "What phase of armor to use"],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2, 3], ["Geonosis", "Phase 1", "Phase 2", "Phase 3"], 2],
    TRUE,
    {call FUNC(scanConfig);}
] call CBA_fnc_addSetting;
