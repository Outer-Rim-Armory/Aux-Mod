[
    QGVAR(empEnabled),
    "CHECKBOX",
    ["EMP - Enabled", "Enables EMP weapon systems."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    TRUE
] call CBA_fnc_addSetting;

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
    ["EMP - Disable Droideka Shields", "Whether emp weapons can disable Droideka shields."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(empTCWSoundEnabled),
    "CHECKBOX",
    ["EMP - Sound: Use Clone Wars Style", "Uses the The Clone Wars style sound effect for Droid Poppers.<br/>WARNING: Can potentially trigger tinnitus or other hearing problems."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    false
] call CBA_fnc_addSetting;

[
    QGVAR(empSoundVolume),
    "SLIDER",
    ["EMP - Sound: Volume", "Volume for the EMP explosion sound."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 1, 1, 0, true]
] call CBA_fnc_addSetting;

[
    QGVAR(empSoundPitch),
    "SLIDER",
    ["EMP - Sound: Pitch", "Pitch for the EMP explosion sound."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 1, 1, 0, true]
] call CBA_fnc_addSetting;

if (ADDON_LOADED(CLASS(medical))) then {
    [
        QGVAR(bactaEnabled),
        "CHECKBOX",
        ["Bacta - Enabled", "Enables bacta grenades."],
        [QUOTE(MOD_NAME), "Medical"],
        true,
        TRUE
    ] call CBA_fnc_addSetting;

    [
        QGVAR(bactaBloodRestoreAmount),
        "SLIDER",
        ["Bacta - Blood Restore Amount", "Amount of blood given to the patient on each iteration."],
        [QUOTE(MOD_NAME), "Medical"],
        [0, 1, 0.25, 2],
        TRUE
    ] call CBA_fnc_addSetting;

    [
        QGVAR(bactaPainReductionAmount),
        "SLIDER",
        ["Bacta - Pain Reduction", "Amount of pain reducted from the patient on each iteration."],
        [QUOTE(MOD_NAME), "Medical"],
        [0, 1, 0.1, 2],
        TRUE
    ] call CBA_fnc_addSetting;

    [
        QGVAR(bactaFullHealOnComplete),
        "CHECKBOX",
        ["Bacta - Full Heal when Complete", "Slow healing sources will full heal a unit when there are no remaining actions."],
        [QUOTE(MOD_NAME), "Medical"],
        true,
        TRUE
    ] call CBA_fnc_addSetting;
};
