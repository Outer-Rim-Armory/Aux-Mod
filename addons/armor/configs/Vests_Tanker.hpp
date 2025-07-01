class CLASS(Vest_Tanker_CT): CLASS(Vest_Basic) {
    displayName = "[KC] ARMR Vest 01 (Enlisted)";

    model = "\SDT_gear\SDT_gunner_vest.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\SDT_gear\data\Vests\chestplate_silver.paa"};
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_vest.p3d";
        hiddenSelections[] = {"camo1"};
    };

    class XtdGearInfo {
        model = QCLASS(Vests_Tanker);
        rank = "CT";
    };
};

class CLASS(Vest_Tanker_CS): CLASS(Vest_Tanker_CT) {
    displayName = "[KC] ARMR Vest 02 (NCO)";

    model = "\SDT_gear\SDT_gunner_recon_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
    hiddenSelectionsTextures[] = {
        "\SDT_gear\data\Vests\chestplate_silver.paa",
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)  // Pauldron
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_nco_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_recon_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
    };

    class XtdGearInfo: XtdGearInfo {
        rank = "CS";
    };
};

class CLASS(Vest_Tanker_WO): CLASS(Vest_Tanker_CT) {
    displayName = "[KC] ARMR Vest 03 (Officer)";

    model = "\SDT_gear\SDT_gunner_NCO_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "\SDT_gear\data\Vests\chestplate_silver.paa",
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Kama
    };
    picture = "\SWLB_clones\data\ui\icon_SWLB_clone_kama_armor_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_NCO_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };

    class XtdGearInfo: XtdGearInfo {
        rank = "WO";
    };
};
