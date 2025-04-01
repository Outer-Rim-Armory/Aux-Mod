class CLASS(Helmet_Scout_CT): CLASS(cloneHelmet_base) {
    SCOPE_PUBLIC;

    displayName = "[KC] SF Scout Helm (CT)";

    model = "\ls_armor_bluefor\helmet\gar\scout\ls_gar_scout_helmet.p3d";
    hiddenSelections[] = {"camo1","camo2","visor"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\Scout\Scout_CT_Helmet_co.paa),
        QPATHTOF(data\helmets\Scout\Scout_CT_Helmet_co.paa),
        "ls_armor_bluefor\helmet\gar\scout\Data\visor_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1","camo2","visor"};
        uniformModel = "\ls_armor_bluefor\helmet\gar\scout\ls_gar_scout_helmet.p3d";
    };
};