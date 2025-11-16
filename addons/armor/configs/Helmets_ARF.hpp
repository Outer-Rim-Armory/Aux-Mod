class CLASS(Helmet_ARF_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF ARF Helm 00 (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
    hiddenSelections[] = {"camo1", "camo2", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa",
        "",
        "\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\arf_phase1_helmet_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\arf\ls_gar_arf_helmet.p3d";
        hiddenSelections[] = {"camo1", "camo2", "visor"};
    };
};

class CLASS(Helmet_ARF_CT): CLASS(Helmet_ARF_Base) {
    displayName = "[KC] SF ARF Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arf\CT_camo1_co.paa),
        "",
        "\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"
    };
};

class CLASS(Helmet_ARF_CT_Legacy): CLASS(Helmet_ARF_CT) {
    displayName = "[KC] SF ARF Helm 02 (Trooper, Legacy)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arf\CT_v2_camo1_co.paa),
        "",
        "\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"
    };
};

class CLASS(Helmet_ARF_Enlisted_CamoBrown): CLASS(Helmet_ARF_CT) {
    displayName = "[KC] SF ARF Helm 03 (Enlisted) - Brown Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arf\camo\brown\Enlisted_camo1_co.paa),
        "",
        "\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"
    };
};

class CLASS(Helmet_ARF_Enlisted_CamoGrey): CLASS(Helmet_ARF_CT) {
    displayName = "[KC] SF ARF Helm 04 (Enlisted) - Grey Camo";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\arf\camo\grey\Enlisted_camo1_co.paa),
        "",
        "\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"
    };
};
