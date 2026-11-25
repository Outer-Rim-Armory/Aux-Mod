class ItemInfo;
class CLASS(Helmet_Scout_Base): CLASS(Scout_Helmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 01 (Base)";

    model = "\ls\core\addons\characters_clone\helmets\scout\ls_helmet_clone_scout.p3d";
    hiddenSelections[] = {"camo1","visor"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone\helmets\scout\data\camo1_co.paa",
        "\ls\core\addons\characters_clone\helmets\scout\data\camo1_co.paa"
    };

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","visor"};
        uniformModel = "\ls\core\addons\characters_clone\helmets\scout\ls_helmet_clone_scout.p3d";
    };
};

class CLASS(Helmet_Scout_CT): CLASS(Helmet_Scout_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 02 (CT)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\Helmet_KC_CO.paa),
        QPATHTOF(data\helmets\scout\Helmet_KC_CO.paa)
    };

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","visor"};
        uniformModel = "\ls\core\addons\characters_clone\helmets\scout\ls_helmet_clone_scout.p3d";
    };
};

class CLASS(Helmet_Scout_Brown): CLASS(Helmet_Scout_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 03 (Brown Camo)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\camo\brown\Helmet_Brown_CO.paa),
        QPATHTOF(data\helmets\scout\camo\brown\Helmet_Brown_CO.paa)
    };

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","visor"};
        uniformModel = "\ls\core\addons\characters_clone\helmets\scout\ls_helmet_clone_scout.p3d";
    };
};

class CLASS(Helmet_Scout_Grey): CLASS(Helmet_Scout_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 04 (Grey Camo)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\camo\grey\Helmet_Grey_CO.paa),
        QPATHTOF(data\helmets\scout\camo\grey\Helmet_Grey_CO.paa)
    };

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","visor"};
        uniformModel = "\ls\core\addons\characters_clone\helmets\scout\ls_helmet_clone_scout.p3d";
    };
};

class CLASS(Helmet_Scout_Imperial): CLASS(Helmet_Scout_Base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm 05 (Empire)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\scout\camo\Imperial\Helmet_Imperial_CO.paa),
        QPATHTOF(data\helmets\scout\camo\Imperial\Helmet_Imperial_CO.paa)
    };

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","visor"};
        uniformModel = "\ls\core\addons\characters_clone\helmets\scout\ls_helmet_clone_scout.p3d";
    };
};
