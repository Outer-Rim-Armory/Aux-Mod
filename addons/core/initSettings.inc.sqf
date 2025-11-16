[
    QGVAR(versionCheckEnabled), "CHECKBOX",
    ["Version Checking", "If enabled, players will receive a pop-up error if their mod version doesn't match the server's."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)], true
] call CBA_fnc_addSetting;
