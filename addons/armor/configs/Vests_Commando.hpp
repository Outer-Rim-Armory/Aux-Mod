class CLASS(Vest_Commando_Basic): CLASS(Vest_ARC) {
    displayName = "[KC] SF Commando Vest";
    model = "\SWLB_clones_spec\SWLB_clone_commando_basic_armor.p3d";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    hiddenUnderwaterSelections[] = {};
    picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_basic_armor_k1_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {};
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_basic_armor.p3d";
    };
};

class CLASS(Vest_Commando_SL): CLASS(Vest_Commando_Basic) {
    displayName = "[KC] SF Commando SL Pauldron";
    model = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
    picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sl_armor_k1_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
    };
};

class CLASS(Vest_Commando_EOD): CLASS(Vest_Commando_Basic) {
    displayName = "[KC] SF Commando EOD Vest";
    model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
    picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_eod_armor_k1_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
    };
};

class CLASS(Vest_Commando_Sniper): CLASS(Vest_Commando_Basic) {
    displayName = "[KC] SF Commando Sniper Vest";
    model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
    hiddenSelections[] = {"illum", "camo1"};
    hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    hiddenSelectionsTextures[] = {
        "\SWLB_clones_spec\data\camo2_co.paa",
        "\SWLB_clones_spec\data\camo2_co.paa"
    };
    picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sniper_armor_k1_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"illum", "camo1"};
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
    };
};

class CLASS(Vest_Commando_Tech): CLASS(Vest_Commando_Basic) {
    displayName = "[KC] SF Commando Tech Vest";
    model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\SWLB_clones_spec\data\camo2_co.paa"};
    picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_tech_armor_k1_ca.paa";

    class ItemInfo: ItemInfo {
        hiddenSelections[] = {"camo1"};
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
    };
};