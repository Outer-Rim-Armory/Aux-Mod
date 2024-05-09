class CLASS(Helmet_Engineer_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] ENG Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
    hiddenSelections[] = {"camo1", "illum", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls_armor_bluefor\helmet\gar\engineer\data\helmet_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
    hiddenSelectionsMaterials[] = {"", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat", ""};
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_engineer_helmet_ca.paa";

    // LS Headlamp
    ls_lighting_hasLight = TRUE;
    ls_lighting_itemType = "headgear";
    ls_lighting_attachedBone = "head";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "illum", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
    };
};

class CLASS(Helmet_Engineer_CT): CLASS(Helmet_Engineer_Base) {
    displayName = "[KC] ENG Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\engineer\CT_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
};

class CLASS(Helmet_Engineer_Enlisted_CamoBrown): CLASS(Helmet_Engineer_CT) {
    displayName = "[KC] ENG Helm 01 (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\engineer\camo\brown\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
};

class CLASS(Helmet_Engineer_Enlisted_CamoGrey): CLASS(Helmet_Engineer_CT) {
    displayName = "[KC] ENG Helm 01 (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\engineer\camo\grey\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
};