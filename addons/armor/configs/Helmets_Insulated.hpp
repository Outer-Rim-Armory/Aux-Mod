class CLASS(Helmet_Phase2_Insulated_Base): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Insulated Helm (Base)";

    model = "\ls\core\addons\characters_clone_legacy\helmets\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\ls\core\addons\characters_clone_legacy\helmets\phase2Insulated\data\helmet_co.paa"};

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"Camo1"};
        uniformModel = "\ls\core\addons\characters_clone_legacy\helmets\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
    };
};

class CLASS(Helmet_Phase2_Insulated_CT): CLASS(Helmet_Phase2_Insulated_Base) {
    displayName = "[KC] INF P2 Insulated Helm 01 (Trooper)";
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\helmets\insulated\CT_camo1_co.paa)
    };
};
