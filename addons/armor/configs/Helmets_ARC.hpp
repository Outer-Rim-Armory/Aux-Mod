class CLASS(Helmet_ARC_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF ARC P1.5 Helm (Base)";

    model = "\lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
    hiddenSelections[] = {"camo1", "visor", "illum"};
    hiddenSelectionsTextures[] = {
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa", // Main Helmet
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",  // Visor
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa", // Fin Light
    };
    hiddenSelectionsMaterials[] = {
        "",
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
    picture = "\lsd_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

    class HitpointsProtectionInfo
    {
        class Head
        {
            hitpointName = "HitHead";
            armor = 15;
            passThrough = 0.1;
        };
    };

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor", "illum"};
        uniformModel = "\lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
    };
};

class CLASS(Helmet_ARC_CT): CLASS(Helmet_ARC_Base) {
    displayName = "[KC] SF ARC P1.5 Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arc\CT_camo1_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
};

class CLASS(Helmet_ARC_CT_Legacy): CLASS(Helmet_ARC_CT) {
    displayName = "[KC] SF ARC P1.5 Helm 02 (Trooper, v2)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arc\CT_v2_camo1_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
};

class CLASS(Helmet_ARC_NightShade): CLASS(Helmet_ARC_Base) {
    displayName = "[KC] SF ARC P1.5 Helm 03 (NightShade)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arc\NightShade_camo1_co.paa),
        QPATHTOF(data\helmets\arc\NightShade_camo2_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
};

class CLASS(Helmet_ARC_Enlisted_CamoBrown): CLASS(Helmet_ARC_CT) {
    displayName = "[KC] SF ARC P1.5 Helm 04 (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arc\camo\brown\Enlisted_camo1_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
};

class CLASS(Helmet_ARC_Enlisted_CamoGrey): CLASS(Helmet_ARC_CT) {
    displayName = "[KC] SF ARC P1.5 Helm 05 (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arc\camo\grey\Enlisted_camo1_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
};

class CLASS(Helmet_ARC_Enlisted_CamoNight): CLASS(Helmet_ARC_CT) {
    displayName = "[KC] SF ARC P1.5 Helm 06 (Enlisted) - Night Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arc\camo\night\Enlisted_camo1_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
};