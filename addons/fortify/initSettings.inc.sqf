private ["_presetNames", "_presetDisplayNames"];
_presetNames = configProperties [
    configFile >> "ACEX_Fortify_Presets"
] apply {configName _x;};
_presetNames = _presetNames select {
    toLowerANSI QUOTE(PREFIX) in toLowerANSI _x
};

_presetDisplayNames = _presetNames apply {
    private _name = [
        configFile >> "ACEX_Fortify_Presets" >> _x,
        "displayName",
        "Unknown Preset"
    ] call BIS_fnc_returnConfigEntry;
    _name;
};

[
    QGVAR(preset),
    "LIST",
    ["Preset", "Select what preset to use with ACE's Fortify System, or to disable it."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [_presetNames, _presetDisplayNames, 2],
    TRUE, {
        [GVAR(preset), parseNumber GVAR(budget), GVAR(sides)] call FUNC(registerPreset);
    }
] call CBA_fnc_addSetting;

[
    QGVAR(sides),
    "LIST",
    ["Side", "What sides will be able to use ACE Fortify."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [
        [[west], [east], [independent], [west, east], [west, east, independent]],
        ["BLUFOR", "OPFOR", "INDEP", "BLU/OPFOR", "All Sides"],
        0
    ],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(budget),
    "EDITBOX",
    ["Budget", "Budget for ACE Fortify."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    "100", // Kept as edit box for nicer ui
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(persistenceEnabled),
    "CHECKBOX",
    ["Save fortify objects to mission", "If enabled, objects built via ACE Fortify will be saved to the mission, and restored on mission load."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    false,
    TRUE
] call CBA_fnc_addSetting;
