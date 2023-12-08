class BNA_KC_Helmet_Airborne_Base: BNA_KC_Helmet_Base
{
    SCOPE_PUBLIC;

    displayName = "[KC] AB Helm (Base)";

    model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsMaterials[] =
    {
        "\lsd_armor_bluefor\helmet\gar\airborne\data\helmet.rvmat",
        "\lsd_armor_bluefor\helmet\gar\airborne\data\visor.rvmat"
    };
    hiddenSelectionsTextures[] =
    {
        "\lsd_armor_bluefor\helmet\gar\airborne\data\helmet_co.paa",
        "\lsd_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";

    subItems[] = {"BNA_KC_NVG_Chip"};

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
    };
};
class BNA_KC_Helmet_Airborne_CT: BNA_KC_Helmet_Airborne_Base
{
    displayName = "[KC] AB Helm 01 (Trooper)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\airborne\CT_camo1_co.paa)
    };
};

class BNA_KC_Helmet_Airborne_CT_v2: BNA_KC_Helmet_Airborne_CT
{
    displayName = "[KC] AB Helm 01 (Trooper, v2)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\airborne\CT_v2_camo1_co.paa)
    };
};