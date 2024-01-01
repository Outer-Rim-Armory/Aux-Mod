[
    QGVAR(bactaBloodRestoreAmount),
    "SLIDER",
    ["Blood Restore Amount", "Amount of blood given to the patient on each iteration."],
    [QUOTE(MOD_NAME), "Bacta"],
    [0, 1, 0.25, 0],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(bactaPainReductionAmount),
    "SLIDER",
    ["Pain Reduction", "Amount of pain reducted from the patient on each iteration."],
    [QUOTE(MOD_NAME), "Bacta"],
    [0, 1, 0.1, 0],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(bactaFullHealOnComplete),
    "CHECKBOX",
    ["Full Heal when Complete", "Slow healing sources will full heal a unit when there are no remaining actions."],
    [QUOTE(MOD_NAME), "Bacta"],
    true,
    TRUE
] call CBA_fnc_addSetting;