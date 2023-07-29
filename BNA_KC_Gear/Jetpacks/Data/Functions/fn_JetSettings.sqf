// WIKI: https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#creating-a-setting
[
    "BNA_KC_Jet_FuelRate",
    "SLIDER",
    ["Fuel Rate", "Multiplier for fuel usage."],
    ["Keeli Company Aux Mod", "Jetpacks"],
    [0, 3, 1, 1], // 0-300%, defaults to 100%
	1
] call CBA_fnc_addSetting;