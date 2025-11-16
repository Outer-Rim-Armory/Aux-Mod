class CLASS(Vest_ARC): CLASS(Vest_Basic) {
    displayName = "[KC] SF ARC Vest";

    model = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\arc\ARC_camo1_co.paa),                 // Chestplate
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Kama and Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_commander_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\arc\ls_gar_arc_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        containerClass = "Supply200";

        class HitpointsProtectionInfo
        {
            class Legs
            {
                hitpointName = "HitLegs";
                armor = 25;
                passThrough = 0.1;
            };
            class Arms
            {
                hitpointName = "HitArms";
                armor = 25;
                passThrough = 0.1;
            };
            class Abdomen {
                hitpointName = "HitAbdomen";
                armor = 40;
                passThrough = 0.1;
            };
            class Body {
                hitpointName = "HitBody";
                armor = 40;
                passThrough = 0.1;
            };
            class Chest {
                hitpointName = "HitChest";
                armor = 40;
                passThrough = 0.1;
            };
            class Diaphragm {
                hitpointName = "HitDiaphragm";
                armor = 40;
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

class CLASS(Vest_ARC_Phase1Geo_Enlisted): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC GEO 01 (Enlisted)";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\arc\Enlisted_P1_camo2_co.paa)
    };
};

class CLASS(Vest_ARC_Phase1Geo_NCO): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC GEO 02 (NCO)";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\arc\NCO_P1_camo2_co.paa)
    };
};

class CLASS(Vest_ARC_Phase1Geo_Officer): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC GEO 03 (Officer)";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\arc\LT_P1_camo2_co.paa)
    };
};

class CLASS(Vest_ARC_Phase1Geo_Captain): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC GEO 04 (Captain)";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\arc\CAP_P1_camo2_co.paa)
    };
};

class CLASS(Vest_ARC_Phase1Geo_Major): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC GEO 05 (Major)";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\arc\MAJ_P1_camo2_co.paa)
    };
};

class CLASS(Vest_ARC_Phase1Geo_Commander): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC GEO 06 (Comander)";
    hiddenSelectionsTextures[] = {
        "",
        QPATHTOF(data\vests\arc\CMDR_P1_camo2_co.paa)
    };
};

class CLASS(Vest_ARC_v2): CLASS(Vest_ARC) {
    displayName = "[KC] SF ARC Vest (v2)";

    model = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconCommander_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\vests\common\light\light_accessories_co.paa",               // Suspenders
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa), // Pauldron
        "\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa",               // Chest Strap
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa)  // Kama
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_officer_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\vests\forceRecon\ls_gar_forceReconCommander_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
    };
};
