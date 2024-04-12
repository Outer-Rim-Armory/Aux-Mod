class CLASS(Vest_Engineer_CT): CLASS(Vest_Basic) {
    displayName = "[KC] ENG Vest 01 (Trooper)";

    model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\light_accessories_co.paa", // Suspenders
        "\SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa"   // Holster
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};

class CLASS(Vest_Engineer_CS): CLASS(Vest_CS) {
    displayName = "[KC] ENG Vest 06 (NCO)";

    model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "ammo"};
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\light_accessories_co.paa",                 // Suspender
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa),   // Chest Ammo Pack
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        "\SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa",                  // Tablet
        "\SWLB_clones\data\arc_accessories_co.paa",                   // Leg Guards
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Arm Ammo
    };

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "ammo"};
    };
};

class CLASS(Vest_Engineer_Officer): CLASS(Vest_Officer) {
    displayName = "[KC] ENG Vest 12 (Officer)";

    model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_Officer.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa",               // Holster
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_Officer.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };
};