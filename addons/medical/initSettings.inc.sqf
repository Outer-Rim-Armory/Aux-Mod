[
    QGVAR(reorient_medicRequired),
    "LIST",
    ["Reorient - Required Medic Level", "Medical level required to reorient a patient."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2, 50], ["Anyone", "Medics", "Doctors", "No one"], 3],
    TRUE
] call CBA_fnc_addSetting;

[
    QGVAR(reorient_successChance),
    "SLIDER",
    ["Reorient - Success Chance", "Percent chance of a reorient treatment waking up a patient."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [0, 1, 0.65, 0, true],
    TRUE
] call CBA_fnc_addSetting;