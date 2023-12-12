class BNA_KC_Helmet_ARF_Base: BNA_KC_Helmet_Base
{
    SCOPE_PUBLIC;

    displayName = "[KC] SF ARF Helm (Base)";

    model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
    hiddenSelections[] = {"camo1", "camo2", "visor"};
    hiddenSelectionsTextures[] =
    {
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa",
        "",
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_arf_p1_ca.paa";

    class ItemInfo: ItemInfo
    {
        uniformModel = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
        hiddenSelections[] = {"camo1", "camo2", "visor"};
    };
};

class BNA_KC_Helmet_ARF_CT: BNA_KC_Helmet_ARF_Base
{
    displayName = "[KC] SF ARF Helm 01 (Trooper)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arf\CT_camo1_co.paa),
        "",
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
    };
};

class BNA_KC_Helmet_ARF_CT_v2: BNA_KC_Helmet_ARF_CT
{
    displayName = "[KC] SF ARF Helm 01 (Trooper, v2)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arf\CT_v2_camo1_co.paa),
        "",
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
    };
};

class BNA_KC_Helmet_ARF_Enlisted_CamoBrown: BNA_KC_Helmet_ARF_CT
{
    displayName = "[KC] SF ARF Helm 01+ (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arf\camo\brown\Enlisted_camo1_co.paa),
        "",
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
    };
};

class BNA_KC_Helmet_ARF_Enlisted_CamoGrey: BNA_KC_Helmet_ARF_CT
{
    displayName = "[KC] SF ARF Helm 01+ (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arf\camo\grey\Enlisted_camo1_co.paa),
        "",
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
    };
};