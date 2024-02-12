[
    QGVAR(reorient_medicRequired),
    "LIST",
    ["Require Medic - Reorient", "Medical level required to reorient a patient."],
    [QUOTE(MOD_NAME), QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2, 50], ["Anyone", "Medic", "Doctors", "No one"], 0],
    TRUE
] call CBA_fnc_addSetting;