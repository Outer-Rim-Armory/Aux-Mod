class CLASS(Helmet_Hunter_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] INF Hunter Helm (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\hunter\ls_sob_hunter_helmet.p3d";
    hiddenSelections[] = {"camo1", "visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\hunter\data\camo1_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\hunter\data\visor_co.paa"
    };
    picture = "\ls\core\addons\main\data\ui\ls_logo_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1", "visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\hunter\ls_sob_hunter_helmet.p3d";
    };
};
