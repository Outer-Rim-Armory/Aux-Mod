[
    QGVAR(fuelDrainCoefficient), "SLIDER",
    ["Fuel Drain Coefficient", "Coefficient (multiplier) for draining fuel."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 3, 1, -1, true], // 0-300%, defaults to 100%
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(airResistance), "SLIDER",
    ["Air Resistance", "Air resistance affects jetpack speed and strengh. Higher value = less speed/strength."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [5, 15, 8, -1],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(maxWaterJumpDepth), "SLIDER",
    ["Water Jump Depth", "Maximum depth in meters that a player can use a jetpack from. Set to 0 to disable."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 10, 2, -1]
] call CBA_fnc_addSetting;

[
    QGVAR(particleLimit), "SLIDER",
    ["Particle Limit", "Maximum number of jetpack particles that can exist at a time."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 100, 20, -1]
] call CBA_fnc_addSetting;

[
    QGVAR(easyEjection), "CHECKBOX",
    ["Easy Ejection", "If enabled, ejecting from an airborne vehicle will automatically move the player ~30m behind the vehicle to prevent getting stuck inside."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    true
] call CBA_fnc_addSetting;