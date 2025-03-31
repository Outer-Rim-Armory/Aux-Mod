class CLASS(Helmet_Scout_Base): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm (Base)";

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

    class CLASS(Helmet_Scout_CT): CLASS(Helmet_Scout_Base) {
        displayName = "[KC] SF Scout Helm (CT)";
        hiddenSelections[] = {"camo1","camo2","visor"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\helmets\scout\Scout_CT_Helmet_co.paa),
            QPATHTOF(data\helmets\scout\Scout_CT_Helmet_co.paa),
            "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"
        };
    };

    class CLASS(Helmet_Scout_Brown): CLASS(Helmet_Scout_Base) {
        displayName = "[KC] SF Scout Helm (Brown Camo)";

        hiddenSelections[] = {"camo1","camo2","visor"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\helmets\scout\camo\brown\Scout_Brown_Helmet_co.paa),
            QPATHTOF(data\helmets\scout\camo\brown\Scout_Brown_Helmet_co.paa),
            "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"
        };
    };

    class CLASS(Helmet_Scout_Grey): CLASS(Helmet_Scout_Base) {
        displayName = "[KC] SF Scout Helm (Grey Camo)";

        hiddenSelections[] = {"camo1","camo2","visor"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\helmets\scout\camo\grey\Scout_Grey_Helmet_co.paa),
            QPATHTOF(data\helmets\scout\camo\grey\Scout_Grey_Helmet_co.paa),
            "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"
        };
    };
};