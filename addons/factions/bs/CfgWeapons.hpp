class CfgWeapons {
    class ls_greenforHelmet_base;
    class CLASS(INDEP_Helmet_Base): ls_greenforHelmet_base {
        class ItemInfo;
    };
    class CLASS(BS_Helmet): CLASS(INDEP_Helmet_Base) {
        SCOPE_PUBLIC;

        displayName = "[BS] Rifleman Helmet";

        model = "\sc_equipment\data\marine\mr_helmet.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\marine\textures\helmet_co.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\marine\mr_helmet.p3d";
            picture = "\ScionPatch\pictures\SC_Helmet_SMR_Desert.paa";
        };
    };

    class CLASS(BS_Helmet_SL): CLASS(BS_Helmet) {
        displayName = "[BS] Captain Helmet";

        model = "MDF\MDFHelmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"MDF\MDFHelmet\Black\Material.001_CO.paa"};
        picture = "\MDF\MDF.paa";

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "MDF\MDFHelmet.p3d";
        };

    };

    class CLASS(BS_Helmet_T2): CLASS(BS_Helmet) {
        displayName = "[BS] Veteran Helmet";

        model = "\sc_equipment\data\marine\mr_helmet.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\marine\textures\helmet_co.paa"};

        class ItemInfo: ItemInfo {
            uniformModel = "\sc_equipment\data\ranger\rn_helmet.p3d";
        };
    };

    class CLASS(BS_Helmet_T3): CLASS(BS_Helmet) {
        displayName = "[BS] Elite Helmet";

        model = "MDF\MDFHelmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"MDF\MDFHelmet\Black\Material.001_CO.paa"};

        subItems[] = {QCLASS(cloneNvg_chip)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "MDF\MDFHelmet.p3d";
        };
    };

    class ls_greenforUniform_base;
    class CLASS(INDEP_Uniform_Base): ls_greenforUniform_base {
        class ItemInfo;
    };
    class CLASS(BS_Uniform): CLASS(INDEP_Uniform_Base) {
        SCOPE_PUBLIC;

        displayName = "[BS] Uniform";
        picture = "\ScionPatch\pictures\SC_Undersuit_Black.paa";

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(BS_Unit_Base);
        };
    };

    class V_PlateCarrier1_rgr;
    class ls_greenforVest_base: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class CLASS(INDEP_Vest_Base): ls_greenforVest_base {
        class ItemInfo: ItemInfo {
        };
    };
    class CLASS(BS_Vest): CLASS(INDEP_Vest_Base) {
        SCOPE_PUBLIC;

        displayName = "[BS] Light Vest";

        model = "\sc_og_equipment_fixed\data\samurai\sam_vest_light.p3d";
        hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {
            "sc_equipment\data\samurai\textures\torso_black_co.paa",
            "sc_equipment\data\samurai\textures\legs_black_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo","camo1"};
            uniformModel = "\sc_og_equipment_fixed\data\samurai\sam_vest_light.p3d";

            SC_VEST_HITPOINTS_LIGHT;
        };
    };

    class CLASS(BS_Vest_Medium): CLASS(BS_Vest) {
        displayName = "[BS] Medium Vest";
        descriptionShort = "Armor Level IV";

        model = "\sc_og_equipment_fixed\data\marine\mr_vest.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "sc_equipment\data\marine\textures\vest_co.paa",
            "sc_equipment\data\marine\textures\legs_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_og_equipment_fixed\data\marine\mr_vest.p3d";

            SC_VEST_HITPOINTS_MEDIUM;
        };
    };

    class CLASS(BS_Vest_Heavy): CLASS(BS_Vest) {
        displayName = "[BS] Heavy Vest";
        descriptionShort = "Armor Level V";

        model = "\sc_og_equipment_fixed\data\samurai\sam_vest.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "sc_equipment\data\samurai\textures\torso_black_co.paa",
            "sc_equipment\data\samurai\textures\legs_black_co.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_og_equipment_fixed\data\samurai\sam_vest.p3d";

            SC_VEST_HITPOINTS_HEAVY;
        };
    };
    class CLASS(BS_Vest_Captain): CLASS(BS_Vest) {
        displayName = "[BS] Captain Vest";
        descriptionShort = "Armor Level V";

        model = "MDF\MDFHeavy.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {
            "MDF\MDFTorso\Black\DefaultMaterial_CO.paa",
            "MDF\MDFLegs\Black\DefaultMaterial_CO.paa"
        };

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "MDF\MDFHeavy.p3d";

            SC_VEST_HITPOINTS_HEAVY;
        };
    };
};
