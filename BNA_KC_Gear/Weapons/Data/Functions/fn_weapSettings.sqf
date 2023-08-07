// WIKI: https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#creating-a-setting
// Bacta
[
    "BNA_KC_Bacta_HealRate",
    "SLIDER",
    ["Bacta - Heal Rate", "Time inbetween each healing action from a bacta grenade. "],
    ["Keeli Company Aux Mod", "Grenades"],
    [0.5, 5, 1, 0], // 0.5 to 5 seconds, default to 1
	1
] call CBA_fnc_addSetting;

// Droid Popper
[
    "BNA_KC_DroidPopper_DisableTime",
    "SLIDER",
    ["Droid Popper - Vehicle Disabled Length", "The time in seconds that a vehicle is disabled for by a Droid Popper."],
    ["Keeli Company Aux Mod", "Grenades"],
    [0, 30, 5, 0], // MinValue, MaxValue, DefaultValue, Show as %
    1 // isGlobal
] call CBA_fnc_addSetting;
[
    "BNA_KC_DroidPopper_TCWSoundEnabled",
    "CHECKBOX",
    ["Droid Popper - Clone Wars Sound", "Uses the TCW style Sound Effect for the Droid Popper."],
    ["Keeli Company Aux Mod", "Grenades"],
    false
] call CBA_fnc_addSetting;
[
    "BNA_KC_DroidPopper_TCWSoundVolume",
    "SLIDER",
    ["Droid Popper - Volume", "Volume Slider for the TCW style sound. Does nothing if TCW sound is disabled."],
    ["Keeli Company Aux Mod", "Grenades"],
    [0, 1, 1, 1]
] call CBA_fnc_addSetting;
[
    "BNA_KC_DroidPopper_TCWSoundPitch",
    "SLIDER",
    ["Droid Popper - Pitch", "Volume Slider for the TCW style sound. Does nothing if TCW sound is disabled."],
    ["Keeli Company Aux Mod", "Grenades"],
    [0, 1, 1, 1]
] call CBA_fnc_addSetting;