class BNA_KC_Helmet_Airborne_CT: BNA_KC_Helmet_Base
{
    SCOPE_PUBLIC;

    displayName = "[KC] AB Helm 01 (Trooper)";

    model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsMaterials[] =
    {
        "\lsd_armor_bluefor\helmet\gar\airborne\data\helmet.rvmat",
        "\lsd_armor_bluefor\helmet\gar\airborne\data\visor.rvmat"
    };
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\airborne\CT_camo1_co.paa)
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";

    class ItemInfo: ItemInfo
    {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
    };

    subItems[] = {"BNA_KC_NVG_Chip"};
};

class BNA_KC_Helmet_Airborne_CT_v2: BNA_KC_Helmet_Airborne_CT
{
    displayName = "[KC] AB Helm 01 (Trooper, v2)";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\airborne\CT_v2_camo1_co.paa)
    };
};