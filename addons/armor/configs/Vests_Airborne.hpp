class CLASS(Vest_Airborne_CT): CLASS(Vest_Basic2) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB Vest 01 (Trooper)";
    maximumLoad = 250;

    model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Bag and Chest Strap
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),   // Kama
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        ""                                                            // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    };
};

class CLASS(Vest_Airborne_Medic): CLASS(Vest_Medic) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB Vest 02 (Medic)";

    model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_camo1_co.paa), // Bag and Chest Strap
        QPATHTOF(data\vests\infantry\officer\Wyvern_Medic_camo1_co.paa),   // Kama
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        ""                                                            // Pauldron
    };
    maximumLoad = 250;
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    };
};

class CLASS(Vest_Airborne_Medic_v2): CLASS(Vest_Medic) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB Vest 02 (Medic V2)";

    model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa), // Bag and Chest Strap
        QPATHTOF(data\vests\infantry\officer\Wyvern_Medic_camo1_co.paa),   // Kama
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        ""                                                            // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborne_vest.p3d";
    };
};

class CLASS(Vest_Airborne_CS): CLASS(Vest_Airborne_CT) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB Vest 06 (NCO)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_nco_vest_ui_ca.paa";
};

class CLASS(Vest_Airborne_WO): CLASS(Vest_Officer) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB Vest 12 (Officer)";
    model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborneOfficer_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "ammo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Bag and Chest Strap
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),   // Kama
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),   // Pauldron
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)  // Ammo
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_officer_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborneOfficer_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "ammo"};
        maximumLoad = 250;
    };
};

class CLASS(Vest_Airborne_CT_Light): CLASS(Vest_Basic2) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB Vest 01 (Trooper, Light)";
    maximumLoad = 250;
    model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborneLight_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        ""                                                            // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_nco_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborneLight_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    };
};

class CLASS(Vest_Airborne_CS_Light): CLASS(Vest_Airborne_CT_Light) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB Vest 06 (NCO, Light)";
    maximumLoad = 250;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Pauldron
    };
};

class CLASS(Vest_Airborne_LifeSaver): CLASS(Vest_Medic) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB MED Vest 01 (Life Saver)";
    maximumLoad = 250;
    model = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborneCFR_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),    // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),    // Ammo
        ""                                                            // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_cfr_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\airborne\ls_gar_airborneCFR_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    };
};

class CLASS(Vest_Airborne_LifeSaverNCO): CLASS(Vest_Airborne_LifeSaver) {
    SCOPE_PUBLIC;
    displayName = "[KC] AB MED Vest 04 (NCO Life Saver)";
    maximumLoad = 250;
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa)
    };
};
