class CLASS(Vest_ARC): CLASS(Vest_Basic) {
    displayName = "[KC] SF ARC Vest";

    model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\arc\ARC_camo1_co.paa),                 // Chestplate
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Kama and Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        containerClass = "Supply200";

        class HitpointsProtectionInfo {
            class Arms {
                hitpointName = "HitArms";
                armor = 20;
                passThrough = 0.2;
            };
            class Chest {
                hitpointName = "HitChest";
                armor = 25;
                PassThrough = 0.1;
            };
            class Legs {
                hitpointName = "HitLegs";
                armor = 20;
                passThrough = 0.1;
            };
        };
    };
};

class CLASS(Vest_ARC_Light): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC Light Vest";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)
    };
};

class CLASS(Vest_ARC_NightShade): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC (NightShade)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\arc\NightShade_camo1_co.paa),
        QPATHTOF(data\vests\arc\NightShade_camo2_co.paa)
    };
};


class CLASS(Vest_ARC_Phase1Geo_Officer): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC GEO 01 (Officer)";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\arc\LT_P1_camo2_co.paa)
    };
};

class CLASS(Vest_ARC_Phase1Geo_Captain): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC GEO 02 (Captain)";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\arc\CAP_P1_camo2_co.paa)
    };
};

class CLASS(Vest_ARC_v2): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC Vest (v2)";

    model = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
        "\SWLB_clones\data\light_accessories_co.paa",               // Suspenders
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa), // Pauldron
        "\SWLB_clones\data\light_accessories_co.paa",               // Chest Strap
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)  // Kama
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    };
};