// WIKI: https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#creating-a-setting
[
    "BNA_KC_Jet_FuelRate",
    "SLIDER",
    ["Fuel Rate", "Multiplier for fuel usage."],
    ["Keeli Company Aux Mod", "Jetpacks"],
    [0, 3, 1, 1], // 0-300%, defaults to 100%
	1
] call CBA_fnc_addSetting;

[
    "BNA_KC_Jet_AirResistance",
    "SLIDER",
    ["Air Resistance", "Air resistance affects jetpack speed and strengh. Higher value = less speed/strength."],
    ["Keeli Company Aux Mod", "Jetpacks"],
    [5, 15, 8, 0], // 0-300%, defaults to 100%
	1
] call CBA_fnc_addSetting;

[
    "BNA_KC_Jet_ParticleLimit",
    "SLIDER",
    ["Particle Limit", "Max number of jetpack particles. No particles will be spawned by jetpacks once the limit is reached. Does not include light sources."],
    ["Keeli Company Aux Mod", "Jetpacks"],
    [0, 100, /*5*/0, 0],
	1,
    {
        BNA_KC_Jet_ParticleLimit = round (BNA_KC_Jet_ParticleLimit);
    }
] call CBA_fnc_addSetting;