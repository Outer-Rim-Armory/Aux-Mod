class CLASS(Vest_Airborne_CT): CLASS(Vest_Basic) {
    displayName = "[KC] AB Vest 01 (Trooper)";

    model = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Bag and Chest Strap
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),   // Kama
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        ""                                                            // Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
        uniformModel = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
    };
};

class CLASS(Vest_Airborne_CS): CLASS(Vest_Airborne_CT) {
    displayName = "[KC] AB Vest 06 (NCO)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_nco_armor_ca.paa";
};

class CLASS(Vest_Airborne_WO): CLASS(Vest_Officer) {
    displayName = "[KC] AB Vest 12 (Officer)";
    model = "\ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "ammo"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Bag and Chest Strap
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),   // Kama
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),   // Pauldron
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)  // Ammo
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "ammo"};
    };
};

class CLASS(Vest_Airborne_CT_Light): CLASS(Vest_Basic) {
    displayName = "[KC] AB Vest 01 (Trooper, Light)";
    model = "\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        ""                                                            // Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    };
};

class CLASS(Vest_Airborne_CS_Light): CLASS(Vest_Airborne_CT_Light) {
    displayName = "[KC] AB Vest 06 (NCO, Light)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Ammo
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Pauldron
    };
};

class CLASS(Vest_Airborne_LifeSaver): CLASS(Vest_Medic) {
    displayName = "[KC] AB MED Vest 01 (Life Saver)";
    model = "\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
    hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),    // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),    // Ammo
        ""                                                            // Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_cfr_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
    };
};

class CLASS(Vest_Airborne_LifeSaverNCO): CLASS(Vest_Airborne_LifeSaver) {
    displayName = "[KC] AB MED Vest 04 (NCO Life Saver)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Medic_v2_camo1_co.paa)
    };
};