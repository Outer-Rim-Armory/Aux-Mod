class BNA_KC_Helmet_Engineer: BNA_KC_Helmet_Base
{
    SCOPE_PUBLIC;

    displayName = "[KC] ENG Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
    hiddenSelections[] = {"camo1", "illum", "visor"};
    hiddenSelectionsMaterials[] = {"", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat", ""};
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\engineer\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
    picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_engineer_helmet_ca.paa";

    // LS Headlamp
    ls_lighting_hasLight = 1;
    ls_lighting_itemType = "headgear";
    ls_lighting_attachedBone = "head";

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "illum", "visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
    };
};

class BNA_KC_Helmet_Engineer_CamoBrown: BNA_KC_Helmet_Engineer
{
    displayName = "[KC] ENG Helm (Base) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\engineer\camo\brown\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
};

class BNA_KC_Helmet_Engineer_CamoGrey: BNA_KC_Helmet_Engineer
{
    displayName = "[KC] ENG Helm (Base) - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\engineer\camo\grey\Enlisted_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
};