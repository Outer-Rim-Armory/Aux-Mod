class CLASS(Helmet_Airborne_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] AB Helm 00 (Base)";

    model = "\ls\core\addons\characters_clone\helmets\airborne\ls_helmet_clone_airborne.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone\helmets\airborne\data\camo1_co.paa",
        "\ls\core\addons\characters_clone\helmets\airborne\data\camo1_co.paa"
    };
    hiddenSelectionsMaterials[] = {};
    picture = "\ls\core\addons\characters_clone\data\ui\airborne_helmet_ui_ca.paa";

    subItems[] = {QCLASS(cloneNvg_chip)};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls\core\addons\characters_clone\helmets\airborne\ls_helmet_clone_airborne.p3d";
    };
};
class CLASS(Helmet_Airborne_CT): CLASS(Helmet_Airborne_Base) {
    displayName = "[KC] AB Helm 01 (Trooper)";
     hiddenSelectionsTextures[] = {
         QPATHTOF(data\helmets\airborne\CT_camo1_co.paa),
         QPATHTOF(data\helmets\airborne\CT_camo1_co.paa)
     };
};

class CLASS(Helmet_Airborne_CT_v2): CLASS(Helmet_Airborne_CT) {
    displayName = "[KC] AB Helm 02 (Trooper, v2)";
     hiddenSelectionsTextures[] = {
         QPATHTOF(data\helmets\airborne\CT_v2_camo1_co.paa),
         QPATHTOF(data\helmets\airborne\CT_v2_camo1_co.paa)
     };
};

class CLASS(Helmet_Airborne_CT_Brown): CLASS(Helmet_Airborne_Base) {
    displayName = "[KC] AB Helm 03 (Brown Camo)";
     hiddenSelectionsTextures[] = {
         QPATHTOF(data\helmets\airborne\Brown_camo1_co.paa),
         QPATHTOF(data\helmets\airborne\Brown_camo1_co.paa)
     };
};

class CLASS(Helmet_Airborne_CT_Grey): CLASS(Helmet_Airborne_CT) {
    displayName = "[KC] AB Helm 04 (Grey Camo)";
     hiddenSelectionsTextures[] = {
         QPATHTOF(data\helmets\airborne\Grey_camo1_co.paa),
         QPATHTOF(data\helmets\airborne\Grey_camo1_co.paa)
     };
};
