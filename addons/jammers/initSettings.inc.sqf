[
    QGVAR(updateRate),
    "SLIDER",
    ["Update Rate", "Amount of time in seconds between jammer updates. Lower = more accurate but more resources used."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 5, 1, -1],
    TRUE
] call CBA_fnc_addSetting;
