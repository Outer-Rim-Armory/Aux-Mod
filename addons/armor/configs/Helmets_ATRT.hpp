class CLASS(Helmet_ATRT_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF AT-RT Helm 00 (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\atrt\ls_helmet_clone_atrt.p3d";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone_legacy\helmets\atrt\data\helmet_atrt_CO.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\atrt\data\antenna_CO.paa"
        };

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2","visor"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\atrt\ls_helmet_clone_atrt.p3d";
    };
};

class CLASS(Helmet_ATRT_CT_V1): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF AT-RT Helm 01 (CT V1)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\atrt\ls_helmet_clone_atrt.p3d";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\atrt\CT_V1_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\atrt\data\antenna_CO.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\atrt\ls_helmet_clone_atrt.p3d";
    };
};

class CLASS(Helmet_ATRT_CT_V2): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF AT-RT Helm 01 (CT V2)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\atrt\ls_helmet_clone_atrt.p3d";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\atrt\CT_V2_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\atrt\data\antenna_CO.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\atrt\ls_helmet_clone_atrt.p3d";
    };
};
