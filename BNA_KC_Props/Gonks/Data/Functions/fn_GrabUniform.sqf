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
    ],
    [
        "SCT",
        [
            "BNA_KC_Uniform_SCT",
            "BNA_KC_Helmet_Phase2_SCT"
        ]
    ],
    [
        "VCT",
        [
            "BNA_KC_Uniform_VCT",
            "BNA_KC_Helmet_Phase2_VCT"
        ]
    ],
    [
        "LCPL",
        [
            "BNA_KC_Uniform_LCPL",
            "BNA_KC_Helmet_Phase2_LCPL"
        ]
    ],
    [
        "CPL",
        [
            "BNA_KC_Uniform_CPL",
            "BNA_KC_Helmet_Phase2_CPL"
        ]
    ],
    [
        "CS",
        [
            "BNA_KC_Uniform_CS",
            "BNA_KC_Helmet_Phase2_CS"
        ]
    ],
    [
        "CSS",
        [
            "BNA_KC_Uniform_CSS",
            "BNA_KC_Helmet_Phase2_CSS"
        ]
    ],
    [
        "CSFC",
        [
            "BNA_KC_Uniform_CSFC",
            "BNA_KC_Helmet_Phase2_CSFC"
        ]
    ],
    [
        "CMS",
        [
            "BNA_KC_Uniform_CMS",
            "BNA_KC_Helmet_Phase2_CMS"
        ]
    ],
    [
        "CSM",
        [
            "BNA_KC_Uniform_CSM",
            "BNA_KC_Helmet_Phase2_CSM"
        ]
    ],
    [
        "WO",
        [
            "BNA_KC_Uniform_WO",
            "BNA_KC_Helmet_Phase2_WO"
        ]
    ],
    [
        "WO2",
        [
            "BNA_KC_Uniform_WO2",
            "BNA_KC_Helmet_Phase2_WO2"
        ]
    ],
    [
        "WO3",
        [
            "BNA_KC_Uniform_WO3",
            "BNA_KC_Helmet_Phase2_WO3"
        ]
    ],
    [
        "LT",
        [
            "BNA_KC_Uniform_LT",
            "BNA_KC_Helmet_Phase2_LT"
        ]
    ],
    [
        "1LT",
        [
            "BNA_KC_Uniform_1LT",
            "BNA_KC_Helmet_Phase2_1LT"
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