// WIKI: https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#creating-a-setting
[
    "BNA_KC_Weap_HealRate",
    "SLIDER",
    ["Bacta - Heal Rate", "Time inbetween each healing action from a bacta grenade. "],
    ["Keeli Company Aux Mod", "Grenades"],
    [0.5, 5, 1, 0], // 0.5 to 5 seconds, default to 1
	1
] call CBA_fnc_addSetting;