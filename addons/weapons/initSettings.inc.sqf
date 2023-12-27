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
    ["Disable Droideka Shields", "Whether emp weapons can disable Droideka shields"],
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
    [0, 1, 1, 1]
] call CBA_fnc_addSetting;

[
    QGVAR(empSoundPitch),
    "SLIDER",
    ["Sound - Pitch", "Pitch for the EMP explosion sound."],
    [QUOTE(MOD_NAME), "EMP"],
    [0, 1, 1, 1]
] call CBA_fnc_addSetting;