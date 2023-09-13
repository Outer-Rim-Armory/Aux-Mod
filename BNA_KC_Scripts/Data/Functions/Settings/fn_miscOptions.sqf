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


// Map
[
    "BNA_KC_Map_ShowAceAction",
    "CHECKBOX",
    ["Show ACE Self Action", "Toggles the ACE Self Interact option to mark yourself on the map."],
    ["Keeli Company Aux Mod", "Map"],
    true
] call CBA_fnc_addSetting;

[
    "BNA_KC_Map_MarkChannel",
    "LIST",
    ["Channel", "The channel to create markers in."],
    ["Keeli Company Aux Mod", "Map"],
    [[-2, 0, 1, 2, 3, 4, 5], ["Auto", "Global", "Side", "Command", "Group", "Vehicle", "Direct"], 0]
] call CBA_fnc_addSetting;


private _markerColors = configProperties
[
    configFile >> "CfgMarkerColors"
] apply { configName _x; };
_markerColors deleteAt 0; // Remove "Default"

private _markerColorNames = _markerColors apply
{
    private _name =
    [
        (configFile >> "CfgMarkerColors" >> _x),
        "name",
        "Unknown Color"
    ] call BIS_fnc_returnConfigEntry;
    _name;
};
[
    "BNA_KC_Map_MarkColor",
    "LIST",
    ["Color", "Color to use when creating the map marker"],
    ["Keeli Company Aux Mod", "Map"],
    [_markerColors, _markerColorNames, 0]
] call CBA_fnc_addSetting;

[
    "BNA_KC_Map_QuickMarkColors",
    "EDITBOX",
    ["Quick Mark Colors", "List of colors CfgMarkerColors class names."],
    ["Keeli Company Aux Mod", "Map"],
    "['ColorBlack', 'ColorBlue', 'ColorRed', 'ColorGreen']"
] call CBA_fnc_addSetting;


// Developer
[
    "BNA_KC_DevMode",
    "CHECKBOX",
    ["Enable Developer Mode", "Enables developer mode, shows debug messages in chat and creates marker objects."],
    ["Keeli Company Aux Mod", "Developer"],
    false,
    1 // isGlobal
] call CBA_fnc_addSetting;


// Misc. Scripts
[
    "BNA_KC_Misc_FixInfiniteLoading",
    "CHECKBOX",
    ["Infinite Loading Screen Fix", "Runs a script on each connecting player to end the loading screen after a certain amount of time."],
    ["Keeli Company Aux Mod", "Miscellaneous"],
    true,
    1 // isGlobal
] call CBA_fnc_addSetting;

[
    "BNA_KC_Misc_UserActionACECSW",
    "CHECKBOX",
    ["ACE CSW - Scroll Wheel Action", "Creates a scroll wheel action for deploying crew served weapons."],
    ["Keeli Company Aux Mod", "Miscellaneous"],
    false
] call CBA_fnc_addSetting;