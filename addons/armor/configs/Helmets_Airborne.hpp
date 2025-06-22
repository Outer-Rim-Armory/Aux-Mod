class CLASS(Helmet_Airborne_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] AB Helm 00 (Base)";

    model = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne.p3d";
    hiddenSelections[] = {"camo", "visor"};
    hiddenSelectionsTextures[] = {
        "\lsd_armor_bluefor\helmet\gar\airborne\data\AB_Helmet_co.paa",
        "\lsd_armor_bluefor\helmet\gar\airborne\data\AB_Helmet_co.paa"
    };
    hiddenSelectionsMaterials[] = {};
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";

    subItems[] = {QCLASS(cloneNvg_chip)};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo", "visor"};
        uniformModel = "\lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne.p3d";
    };
};
class CLASS(Helmet_Airborne_CT): CLASS(Helmet_Airborne_Base) {
    displayName = "[KC] AB Helm 01 (Trooper)";
     hiddenSelectionsTextures[] = {
         QPATHTOF(data\helmets\airborne\CT_camo1_co.paa),
         "\lsd_armor_bluefor\helmet\gar\airborne\data\AB_Helmet_co.paa"
     };
};

class CLASS(Helmet_Airborne_CT_v2): CLASS(Helmet_Airborne_CT) {
    displayName = "[KC] AB Helm 02 (Trooper, v2)";
     hiddenSelectionsTextures[] = {
         QPATHTOF(data\helmets\airborne\CT_v2_camo1_co.paa),
         "\lsd_armor_bluefor\helmet\gar\airborne\data\AB_Helmet_co.paa"
     };
};

class CLASS(Helmet_Airborne_CT_Brown): CLASS(Helmet_Airborne_Base) {
    displayName = "[KC] AB Helm 03 (Brown Camo)";
     hiddenSelectionsTextures[] = {
         QPATHTOF(data\helmets\airborne\Brown_camo1_co.paa),
         "\lsd_armor_bluefor\helmet\gar\airborne\data\AB_Helmet_co.paa"
     };
};

class CLASS(Helmet_Airborne_CT_Grey): CLASS(Helmet_Airborne_CT) {
    displayName = "[KC] AB Helm 04 (Grey Camo)";
     hiddenSelectionsTextures[] = {
         QPATHTOF(data\helmets\airborne\Grey_camo1_co.paa),
         "\lsd_armor_bluefor\helmet\gar\airborne\data\AB_Helmet_co.paa"
     };
};