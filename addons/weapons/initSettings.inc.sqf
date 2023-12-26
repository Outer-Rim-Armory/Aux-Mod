[
    QGVAR(empVehicleDisableDuration),
    "SLIDER",
    ["EMP - Vehicle Disable Duration", "The time in seconds that a vehicle is disabled for by an emp weapon."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 30, 5, 0],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(empDisableDroidkaShields),
    "CHECKBOX",
    ["EMP - Disable Droideka Shields", "Whether emp weapons can disable Droideka shields"],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(empTCWSoundEnabled),
    "CHECKBOX",
    ["EMP - Clone Wars Sound Enabled", "Uses the The Clone Wars style sound effect for Droid Poppers.<br/>WARNING: Can potentially trigger tinnitus or other hearing problems."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    false
] call CBA_fnc_addSetting;

[
    QGVAR(empTCWSoundVolume),
    "SLIDER",
    ["EMP - Clone Wars Sound Volume", "Volume for the The Clone Wars style sound."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 1, 1, 1]
] call CBA_fnc_addSetting;

[
    QGVAR(empTCWSoundPitch),
    "SLIDER",
    ["EMP - Clone Wars Sound Pitch", "Pitch for the The Clone Wars style sound."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 1, 1, 1]
] call CBA_fnc_addSetting;