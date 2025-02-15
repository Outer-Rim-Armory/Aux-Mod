[
    QGVAR(csw_showDeployAction), "CHECKBOX",
    ["CSW - Show Deploy UserAction", "Shows a UserAction (scrollwheel) action for deploing a weapon from the launcher slot."],
    [QUOTE(MOD_NAME), "Miscellaneous"],
    false
] call CBA_fnc_addSetting;

[
    QGVAR(autoEject_enabled), "CHECKBOX",
    ["Auto Eject - Enabled", "Automatically ejects players from a vehicle when it is destroyed."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(autoEject_invincibleTimer), "SLIDER",
    ["Auto Eject - Invincible Timer", "Amount of time in seconds that crew members are set to invincible after a vehicle is destroyed. This is done to prevent players from immediately dying while inside a wreck."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 10, 5, -1],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(autoEject_timeout), "SLIDER",
    ["Auto Eject - Timeout", "The maximum amount of time to wait for a vehicle to hit the ground after being destroyed."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 60, 30, 0],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(hermitaurAreaHealRadius_M), "SLIDER",
    ["Medic - Heal Radius", "Radius in meters to heal units."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED - Hermitaur)],
    [0, 30, 7, 0]
] call CBA_fnc_addSetting;

[
    QGVAR(hermitaurAreaHealRate_M), "SLIDER",
    ["Medic - Heal Delay", "Delay in seconds between healing actions."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED - Hermitaur)],
    [0, 60, 2, 0]
] call CBA_fnc_addSetting;

[
    QGVAR(hermitaurHealAmount_M), "SLIDER",
    ["Medic - Heal Amount", "Amount of pain to reduce per action and amount of blood to add per action"],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED - Hermitaur)],
    [0, 1, 0.08, 0]
] call CBA_fnc_addSetting;

[
    QGVAR(hermitaurFuelHealConsumption_M), "SLIDER",
    ["Medic - Fuel Consumption", "Amount of vehicle's fuel to reduce per action"],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED - Hermitaur)],
    [0, 1, 0.02, 1]
] call CBA_fnc_addSetting;