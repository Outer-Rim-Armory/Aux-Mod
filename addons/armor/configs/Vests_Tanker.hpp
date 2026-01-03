class CLASS(Vest_ARMR_CT): CLASS(Vest_Basic) {
    displayName = "[KC] ARMR Vest 01 (Enlisted)";

    model = "\SDT_gear\SDT_gunner_vest.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\vests\tanker\Gunner_co.paa)};
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_vest.p3d";
        hiddenSelections[] = {"camo1"};
    };

    class XtdGearInfo {
        model = QCLASS(Vests_ARMR);
        rank = "CT";
    };
};

class CLASS(Vest_ARMR_CS): CLASS(Vest_ARMR_CT) {
    displayName = "[KC] ARMR Vest 02 (NCO)";

    model = "\SDT_gear\SDT_gunner_recon_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\tanker\Gunner_co.paa),
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Holster
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa)  // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_nco_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_recon_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
    };

    class XtdGearInfo: XtdGearInfo {
        rank = "CS";
    };
};

class CLASS(Vest_ARMR_WO): CLASS(Vest_ARMR_CT) {
    displayName = "[KC] ARMR Vest 03 (Officer)";

    model = "\SDT_gear\SDT_gunner_NCO_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\vests\tanker\Gunner_co.paa),
        QPATHTOF(data\vests\infantry\officer\Officer_camo1_co.paa) // Kama
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_kama_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_NCO_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };

    class XtdGearInfo: XtdGearInfo {
        rank = "WO";
    };
};

class CLASS(Vest_ARMR_CT_Empire): CLASS(Vest_Basic) {
    displayName = "[KC] ARMR Vest 01 (Enlisted, Empire)";

    model = "\SDT_gear\SDT_gunner_vest.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"SDT_gear\data\Vests\chestplate_darksilver.paa"};
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_vest.p3d";
        hiddenSelections[] = {"camo1"};
    };

    class XtdGearInfo {
        model = QCLASS(Vests_ARMR);
        rank = "CT";
    };
};

class CLASS(Vest_ARMR_CS_Empire): CLASS(Vest_ARMR_CT) {
    displayName = "[KC] ARMR Vest 02 (NCO, Empire)";

    model = "\SDT_gear\SDT_gunner_recon_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
    hiddenSelectionsTextures[] = {
        "SDT_gear\data\Vests\chestplate_darksilver.paa",
        QPATHTOF(data\vests\infantry\heavy\Accessories_camo1_co.paa), // Chest Strap
        "\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa", // Holster
        "\ls\core\addons\characters_clone_legacy\vests\common\heavy\heavy_accessories_co.paa"  // Pauldron
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\airborne_nco_vest_ui_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_recon_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
    };

    class XtdGearInfo: XtdGearInfo {
        rank = "CS";
    };
};

class CLASS(Vest_ARMR_WO_Empire): CLASS(Vest_ARMR_CT) {
    displayName = "[KC] ARMR Vest 03 (Officer, Empire)";

    model = "\SDT_gear\SDT_gunner_NCO_vest.p3d";
    hiddenSelections[] = {"camo1", "camo2"};
    hiddenSelectionsTextures[] = {
        "SDT_gear\data\Vests\chestplate_darksilver.paa",
        QPATHTOF(data\vests\infantry\officer\Imperial_camo1_co.paa) // Kama
    };
    picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_cloneVest_kama_ca.paa";

    class ItemInfo: ItemInfo {
        uniformModel = "\SDT_gear\SDT_gunner_NCO_vest.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
    };

    class XtdGearInfo: XtdGearInfo {
        rank = "WO";
    };
};
