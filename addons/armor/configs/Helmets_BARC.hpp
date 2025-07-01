class CLASS(Helmet_BARC_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF BARC Helm 00 (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\barc\ls_helmet_clone_barc.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\barc\data\helmet_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_barc_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\barc\ls_helmet_clone_barc.p3d";
    };
};

class CLASS(Helmet_BARC_CT): CLASS(Helmet_BARC_Base) {
    displayName = "[KC] INF BARC Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\barc\CT_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"
    };
};
