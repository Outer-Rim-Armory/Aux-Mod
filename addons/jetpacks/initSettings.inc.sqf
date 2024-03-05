[
    QGVAR(fuelDrainCoefficient),
    "SLIDER",
    ["Fuel Drain Coefficient", "Coefficient (multiplier) for draining fuel."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 3, 1, 0, true], // 0-300%, defaults to 100%
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(airResistance),
    "SLIDER",
    ["Air Resistance", "Air resistance affects jetpack speed and strengh. Higher value = less speed/strength."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [5, 15, 8, 0],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(particleLimit),
    "SLIDER",
    ["Particle Limit", "Maximum number of jetpack particles that can exist at a time."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 100, 20, 0],
    1,
    {
        GVAR(particleLimit) = round _this;
    }
] call CBA_fnc_addSetting;