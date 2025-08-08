class CLASS(Vest_Holster): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest (Holster)";

    model = "\ls\core\addons\characters_clone_legacy\vests\clone\ls_gar_holster_vest.p3d";
    hiddenSelections[] = {"r_thigh_holster"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\common\officer\officer_accessories_co.paa" // Holster
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\uniform_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\clone\ls_gar_holster_vest.p3d";
        hiddenSelections[] = {"r_thigh_holster"};
    };
};

class CLASS(Vest_Assault): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest 01 (Assault)";

    model = "\ls\core\addons\characters_clone_legacy\vests\assault\ls_gar_assault_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",  // Suspenders
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa) // Holster
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_light_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\assault\ls_gar_assault_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class CLASS(Vest_Grenadier): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest 01 (Grenadier)";

    model = "\ls\core\addons\characters_clone_legacy\vests\grenadier\ls_gar_grenadier_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",  // Suspenders
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)  // Holster
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_light_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\grenadier\ls_gar_grenadier_vest.p3d";
    };
};

class CLASS(Vest_Heavy): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest 01 (Heavy)";

    model = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavy_vest.p3d";
    hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Sling and Bag
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",  // Grenades
        ""                                                            // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_nco_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavy_vest.p3d";
        hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "pauldron"};
    };
};

class CLASS(Vest_Heavy_v2): CLASS(Vest_Heavy) {
    displayName = "[KC] INF Vest 01 (Heavy, v2)";

    model = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavyAlt_vest.p3d";
    hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "camo4", "camo5", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Ammo
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa", // Suspenders
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Hip Bag
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Holster
        "\ls\core\addons\characters_clone_legacy\vests\common\bag\bag_co.paa",                 // Belt Bag
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa", // Back Grenade
        ""                                                                      // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\heavy\ls_gar_heavyAlt_vest.p3d";
        hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "camo4", "camo5", "pauldron"};
    };
};

class CLASS(Vest_Specialist): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest 01 (Specialist)";

    model = "\ls\core\addons\characters_clone_legacy\vests\specialist\ls_gar_specialist_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",                // Suspenders
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa) // Holster
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_light_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\specialist\ls_gar_specialist_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class CLASS(Vest_Recon): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest XX (Recon)";

    model = "\ls\core\addons\characters_clone_legacy\vests\recon\ls_gar_recon_vest.p3d";
    hiddenSelections[] = {"camo1", "holster", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        ""                                                            // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_recon_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\recon\ls_gar_recon_vest.p3d";
        hiddenSelections[] = {"camo1", "holster", "pauldron"};
    };
};

class CLASS(Vest_Recon_Survival): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest XX (Recon Survival)";

    model = "\ls\core\addons\characters_clone_legacy\vests\recon\ls_gar_reconSurvival_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "holster", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Chest Strap
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa", // Side bags / back containers
        "\ls\core\addons\characters_clone_legacy\uniforms\marshalCommander\data\camo1_co.paa",                                    // Arm Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),           // Ammo
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)            // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\recon\ls_gar_reconSurvival_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "holster", "ammo", "pauldron"};
    };
};

class CLASS(Vest_Hazard): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest XX (Hazard)";

    model = "\ls\core\addons\characters_clone_legacy\vests\hazard\ls_gar_hazard_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",  // Suspenders
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),  // Kama
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_light_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\hazard\ls_gar_hazard_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class CLASS(Vest_CLC): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest 04 (CLC)";

    model = "\ls\core\addons\characters_clone_legacy\vests\recon\ls_gar_recon_vest.p3d";
    hiddenSelections[] = {"camo1", "holster", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\heavy\CLC_camo1_co.paa)          // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\recon\ls_gar_recon_vest.p3d";
        hiddenSelections[] = {"camo1", "holster", "pauldron"};
    };
};

class CLASS(Vest_CPL): CLASS(Vest_CLC) {
    displayName = "[KC] INF Vest 05 (CPL)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\heavy\CPL_camo1_co.paa)          // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";
};

class CLASS(Vest_CS): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest 06 (CS)";
    model = "\ls\core\addons\characters_clone_legacy\vests\recon\ls_gar_reconOfficer_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\CS_camo1_co.paa),       // Pauldron
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Kama
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\recon\ls_gar_reconOfficer_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class CLASS(Vest_CSS): CLASS(Vest_CS) {
    displayName = "[KC] INF Vest 07 (CSS)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\CSS_camo1_co.paa),
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";
};

class CLASS(Vest_CSFC): CLASS(Vest_CS) {
    displayName = "[KC] INF Vest 08 (CSFC)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\CSFC_camo1_co.paa),
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";
};

class CLASS(cloneVest_CMS): CLASS(Vest_CS) {
    displayName = "[KC] INF Vest 09 (CMS)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\CMS_camo1_co.paa),
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";
};

class CLASS(Vest_CSM): CLASS(Vest_CS) {
    displayName = "[KC] INF Vest 10 (CSM)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\CSM_camo1_co.paa),
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_reconNCO_ca.paa";
};

class CLASS(Vest_Officer): CLASS(Vest_Basic) {
    displayName = "[KC] INF Vest 12 (Officer)";

    model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_officer_vest.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Kama and Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_officer_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_officer_vest.p3d";
        hiddenSelections[] = {"camo1"};
        containerClass = "Supply200";

        class HitpointsProtectionInfo
        {
            class Legs
            {
                hitpointName = "HitLegs";
                armor = 10;
                passThrough = 0.3;
            };
            class Arms
            {
                hitpointName = "HitArms";
                armor = 10;
                passThrough = 0.3;
            };
            class Abdomen {
                hitpointName = "HitAbdomen";
                armor = 20;
                passThrough = 0.3;
            };
            class Body {
                hitpointName = "HitBody";
                armor = 20;
                passThrough = 0.3;
            };
            class Chest {
                hitpointName = "HitChest";
                armor = 20;
                passThrough = 0.3;
            };
            class Diaphragm {
                hitpointName = "HitDiaphragm";
                armor = 20;
                passThrough = 0.3;
            };
        };
    };
};

class CLASS(Vest_Officer_v2): CLASS(Vest_Officer) {
    displayName = "[KC] INF Vest 12 (Officer, v2)";

    model = "\ls\core\addons\characters_clone_legacy\vests\tactical\ls_gar_tacticalOfficer_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa), // Kama and Pauldron
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa"                // Suspenders
    };

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\tactical\ls_gar_tacticalOfficer_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class CLASS(Vest_WO): CLASS(Vest_Officer) {
    displayName = "[KC] INF Vest 11 (Warrant Officer)";
    model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_lieutenant_vest.p3d";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Pauldron
    };

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_lieutenant_vest.p3d";
    };
};

class CLASS(Vest_Kama): CLASS(Vest_Officer) {
    displayName = "[KC] INF Vest XX (Kama)";
    model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kama_vest.p3d";
    hiddenSelections[] = {"camo1", "rank"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa), // Kama
        ""                                                          // Rank
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_kama_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_kama_vest.p3d";
        hiddenSelections[] = {"camo1", "rank"};
    };
};

class CLASS(Vest_Tactical_Commander): CLASS(Vest_Officer) {
    displayName = "[KC] INF Vest XX (Tactical Commander)";
    model = "\ls\core\addons\characters_clone_legacy\vests\tactical\ls_gar_tacticalCommander_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),  // Kama
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",                // Suspenders
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa) // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_officer_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\tactical\ls_gar_tacticalCommander_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "pauldron"};
    };
};

class CLASS(Vest_Commander): CLASS(Vest_Officer) {
    displayName = "[KC] INF Vest 18 (Commander)";

    model = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_commander_vest.p3d";
    hiddenSelections[] = {"camo1", "rank"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa), // Kama and Pauldron
        ""                                                          // Rank
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\officer\ls_gar_commander_vest.p3d";
        hiddenSelections[] = {"camo1", "rank"};
    };
};

class CLASS(Vest_Commander_v2): CLASS(Vest_Commander) {
    displayName = "[KC] INF Vest 19 (Commander, v2)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\vests\common\rank\rank_co.paa"
    };
};

class CLASS(Vest_Commander_Phase1Geo): CLASS(Vest_Commander) {
    displayName = "[KC] INF Vest 20 (Commander, Geo)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\arc\CMDR_P1_camo2_co.paa),
        "\ls\core\addons\characters_clone_legacy\vests\common\rank\rank_co.paa"
    };
};

class CLASS(Vest_Medic): CLASS(Vest_Basic) {
    displayName = "[KC] INF MED Vest 01 (Medic)";

    model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa), // Heavy Bag / Strap
        "",                                                     // Kama
        "",                                                     // Ammo
        ""                                                      // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
        containerClass = "Supply250";
    };
};

class CLASS(Vest_MedicSenior): CLASS(Vest_Medic) {
    displayName = "[KC] INF MED Vest 02 (Senior)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa),
        "",
        "",
        QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa)
    };
};

class CLASS(Vest_Medic_v2): CLASS(Vest_Medic) {
    displayName = "[KC] INF MED Vest 01 (Medic, v2)";

    model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborneCFR_vest.p3d";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa), // Tablet
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa), // Chest Strap
        "",                                                        // Ammo
        ""                                                         // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_nco_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborneCFR_vest.p3d";
    };
};

class CLASS(Vest_MedicSenior_v2): CLASS(Vest_Medic_v2) {
    displayName = "[KC] INF MED Vest 02 (Senior, v2)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),
        "",
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa)
    };
};

class CLASS(Vest_MedicPlatoon): CLASS(Vest_Medic) {
    displayName = "[KC] INF MED Vest 06 (Platoon)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa),   // Heavy Bag / Strap
        QPATHTOF(data\vests\infantry\officer\Medic_camo1_co.paa), // Kama
        "",                                                       // Ammo
        QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa)    // Pauldron
    };
    maximumLoad = 600;
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_nco_vest_ui_ca.paa";
};
