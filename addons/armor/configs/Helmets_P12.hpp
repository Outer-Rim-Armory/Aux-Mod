class CLASS(Helmet_Phase12_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF P1-2 Helm (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\rex\ls_gar_rex_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\rex\data\helmet_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\rex\data\visor_co.paa"
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\rex_helmet_ui_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\rex\ls_gar_rex_helmet.p3d";
    };
};
