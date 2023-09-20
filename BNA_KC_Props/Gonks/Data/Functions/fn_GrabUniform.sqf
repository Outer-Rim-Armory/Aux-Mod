params [["_rankToGrab", ""]];


private _ranksMap = createHashMapFromArray
[
    [
        "CR",                                  // Hashmap key
        [                                      // Start of values
            "BNA_KC_Uniform_CR",               // Uniform
            "BNA_KC_Helmet_Phase2_CR"          // Vest
        ]
    ],
    [
        "CT",
        [
            "BNA_KC_Uniform_CT",
            "BNA_KC_Helmet_Phase2_CT"
        ]
    ]
];


_values = _ranksMap getOrDefaultCall [_rankToGrab, {hint format ["Rank armor '%1' does not exist.", _rankToGrab];}];        // Grabs values from array above

_values params ["_uniform", "_helmet"];

removeAllAssignedItems player;     // Removes players uniforms, linked items, headgear, vest, backpack and weapons
removeGoggles player;
removeHeadgear player;
removeUniform player;
removeVest player;
removeBackpack player;
removeAllWeapons player;


player forceAddUniform _uniform;   // Adds uniform and helmet from values
player addHeadgear _helmet;

player linkItem "ItemMap";         // Adds basic linked items all players will use
player linkItem "ItemGPS";
player linkItem "JLTS_clone_comlink";
player linkItem "ItemCompass";
player linkItem "Itemwatch";