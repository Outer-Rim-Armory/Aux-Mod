[
    QGVAR(empEnabled),
    "CHECKBOX",
    ["Enabled", "Enables EMP weapon systems."],
    [QUOTE(MOD_NAME), "EMP"],
    true,
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(empVehicleDisableDuration),
    "SLIDER",
    ["Vehicle Disable Duration", "The time in seconds that a vehicle is disabled for by an emp weapon."],
    [QUOTE(MOD_NAME), "EMP"],
    [0, 30, 5, 0],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(empDisableDroidkaShields),
    "CHECKBOX",
    ["Disable Droideka Shields", "Whether emp weapons can disable Droideka shields."],
    [QUOTE(MOD_NAME), "EMP"],
    true,
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(empTCWSoundEnabled),
    "CHECKBOX",
    ["Sound - Use Clone Wars Style", "Uses the The Clone Wars style sound effect for Droid Poppers.<br/>WARNING: Can potentially trigger tinnitus or other hearing problems."],
    [QUOTE(MOD_NAME), "EMP"],
    false
] call CBA_fnc_addSetting;

[
    QGVAR(empSoundVolume),
    "SLIDER",
    ["Sound - Volume", "Volume for the EMP explosion sound."],
    [QUOTE(MOD_NAME), "EMP"],
    [0, 1, 1, 0, true]
] call CBA_fnc_addSetting;

[
    QGVAR(empSoundPitch),
    "SLIDER",
    ["Sound - Pitch", "Pitch for the EMP explosion sound."],
    [QUOTE(MOD_NAME), "EMP"],
    [0, 1, 1, 0, true]
] call CBA_fnc_addSetting;

if (ADDON_LOADED(CLASS(medical))) then {
    [
        QGVAR(bactaEnabled),
        "CHECKBOX",
        ["Enabled", "Enables bacta grenades."],
        [QUOTE(MOD_NAME), "Bacta"],
        true,
        TRUE
    ] call CBA_fnc_addSetting;

    [
        QGVAR(bactaBloodRestoreAmount),
        "SLIDER",
        ["Blood Restore Amount", "Amount of blood given to the patient on each iteration."],
        [QUOTE(MOD_NAME), "Bacta"],
        [0, 1, 0.25, 2],
        TRUE
    ] call CBA_fnc_addSetting;

    [
        QGVAR(bactaPainReductionAmount),
        "SLIDER",
        ["Pain Reduction", "Amount of pain reducted from the patient on each iteration."],
        [QUOTE(MOD_NAME), "Bacta"],
        [0, 1, 0.1, 2],
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
};