class CLASS(Helmet_Scout_Base_V1): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 01 (Base LS)";

    model = "\ls_armor_bluefor\helmet\gar\scout\ls_gar_scout_helmet.p3d";
    hiddenSelections[] = {"camo1","camo2","visor"};
    hiddenSelectionsTextures[] = {
        "ls_armor_bluefor\helmet\gar\scout\Data\helmet_co.paa",
        "ls_armor_bluefor\helmet\gar\scout\Data\helmet_co.paa",
        "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2","visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\scout\ls_gar_scout_helmet.p3d";
    };
};

class CLASS(Helmet_Scout_Base_V2): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 06 (Base WMA)";

    model = "WarMantle\WM_Imperial_Clones\P3Scout_Helmet.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"WarMantle\WM_Imperial_Clones\data\Helmet_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo"};
        uniformModel = "WarMantle\WM_Imperial_Clones\P3Scout_Helmet.p3d";
    };
};

class CLASS(Helmet_Scout_CT_V1): CLASS(Helmet_Scout_Base_V1) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 02 (CT LS)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\Helmet_camo1_co.paa),
        QPATHTOF(data\helmets\scout\Helmet_camo1_co.paa),
        "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2","visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\scout\ls_gar_scout_helmet.p3d";
    };
};

class CLASS(Helmet_Scout_CT_V2): CLASS(Helmet_Scout_Base_V2) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 07 (CT WMA)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\scout\Helmet_KC_CO.paa)};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo"};
        uniformModel = "WarMantle\WM_Imperial_Clones\P3Scout_Helmet.p3d";
    };
};

class CLASS(Helmet_Scout_Brown): CLASS(Helmet_Scout_Base_V1) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 03 (Brown Camo LS)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\camo\brown\Helmet_Brown_camo1_co.paa),
        QPATHTOF(data\helmets\scout\camo\brown\Helmet_Brown_camo1_co.paa),
        "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2","visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\scout\ls_gar_scout_helmet.p3d";
    };
};

class CLASS(Helmet_Scout_Brown_V2): CLASS(Helmet_Scout_Base_V2) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 08 (Brown Camo WMA)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\camo\brown\Helmet_Brown_CO.paa)};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo"};
        uniformModel = "WarMantle\WM_Imperial_Clones\P3Scout_Helmet.p3d";
    };
};

class CLASS(Helmet_Scout_Grey): CLASS(Helmet_Scout_Base_V1) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 04 (Grey Camo LS)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\camo\grey\Helmet_Grey_camo1_co.paa),
        QPATHTOF(data\helmets\scout\camo\grey\Helmet_Grey_camo1_co.paa),
        "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2","visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\scout\ls_gar_scout_helmet.p3d";
    };
};

class CLASS(Helmet_Scout_Grey_V2): CLASS(Helmet_Scout_Base_V2) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 09 (Grey Camo WMA)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\scout\camo\grey\Helmet_Grey_CO.paa)};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo"};
        uniformModel = "WarMantle\WM_Imperial_Clones\P3Scout_Helmet.p3d";
    };
};

class CLASS(Helmet_Scout_Imperial): CLASS(Helmet_Scout_Base_V1) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 05 (Imperial LS)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\camo\imperial\Helmet_Imperial_camo1_co.paa),
        QPATHTOF(data\helmets\scout\camo\imperial\Helmet_Imperial_camo1_co.paa),
        "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2","visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\scout\ls_gar_scout_helmet.p3d";
    };
};

class CLASS(Helmet_Scout_Imperial_V2): CLASS(Helmet_Scout_Base_V2) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 10 (Imperial WMA)";
    hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\scout\camo\Imperial\Helmet_Imperial_CO.paa)};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo"};
        uniformModel = "WarMantle\WM_Imperial_Clones\P3Scout_Helmet.p3d";
    };
};