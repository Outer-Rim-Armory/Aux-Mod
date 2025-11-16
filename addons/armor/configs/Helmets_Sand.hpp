class CLASS(Helmet_Sand_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF Sand Helm (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\desert\ls_cloneHelmet_desert.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\desert\data\camo1_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\desert\data\visor_co.paa"
    };
    picture = "\ls_data\icons\LS_logo_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\desert\ls_cloneHelmet_desert.p3d";
    };
};

class CLASS(Helmet_Sand_CT): CLASS(Helmet_Sand_Base) {
    displayName = "[KC] INF Sand Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\desert\CT_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\desert\data\visor_co.paa"
    };
};
