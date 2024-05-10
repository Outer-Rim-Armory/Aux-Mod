class CLASS(Helmet_Airborne_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] AB Helm (Base)";

    model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsMaterials[] = {
        "\lsd_armor_bluefor\helmet\gar\airborne\data\helmet.rvmat",
        "\lsd_armor_bluefor\helmet\gar\airborne\data\visor.rvmat"
    };
    hiddenSelectionsTextures[] = {
        "\lsd_armor_bluefor\helmet\gar\airborne\data\helmet_co.paa",
        "\lsd_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";

    subItems[] = {QCLASS(cloneNvg_chip)};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
    };
};
class CLASS(Helmet_Airborne_CT): CLASS(Helmet_Airborne_Base) {
    displayName = "[KC] AB Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\airborne\CT_camo1_co.paa)
    };
};

class CLASS(Helmet_Airborne_CT_v2): CLASS(Helmet_Airborne_CT) {
    displayName = "[KC] AB Helm 01 (Trooper, v2)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\airborne\CT_v2_camo1_co.paa)
    };
};