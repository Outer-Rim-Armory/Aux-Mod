// WIKI: https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#creating-a-setting

// ACE Fortify Settings
[
    "BNA_KC_FortifyPreset",
    "LIST",
    ["Preset", "Select what preset to use with ACE's Fortify System, or to disable it."],
    ["Keeli Company Aux Mod", "ACE Fortify Options"],
    [["Disabled", "BNA_KC_FortifyPreset_Default"], ["STR_A3_OPTIONS_DISABLED", "STR_A3_OPTIONS_DEFAULT"], 1],
    1, // isGlobal
    {
        [] call BNAKC_fnc_RegisterPreset;
    }
] call CBA_fnc_addSetting;

[
    "BNA_KC_FortifyBudget",
    "EDITBOX",
    ["Budget", "Budget for ACE Fortify. Use -1 for an unlimited budget."],
    ["Keeli Company Aux Mod", "ACE Fortify Options"],
    "100", // Will need to be converted to integer
    1 // isGlobal
] call CBA_fnc_addSetting;