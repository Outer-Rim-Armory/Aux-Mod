class CfgVehicles {
    class CLASS(OPFOR_Unit_Base);
    class CLASS(CIS_Unit_Base): CLASS(OPFOR_Unit_Base) {
        SCOPE_HIDDEN;
        faction = QFACTION(CIS);
    };
    class CLASS(CIS_Unit_Droid_Base): CLASS(CIS_Unit_Base) {
        model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
        hiddenSelections[] = {"camo1"};

        armor = 2;
        armorStructural = 3;
        explosionShielding = 0.3;
        impactDamageMultiplier = 0.5;
        minTotalDamageThreshold = 0.001;

        identityTypes[] = {"lsd_voice_b1Droid"};

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";

        weapons[] = {
            QCLASS(E5),
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(E5),
            "Throw",
            "Put"
        };
        magazines[] = {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            "ls_mag_classC_thermalDet"
        };
        respawnMagazines[] = {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            "ls_mag_classC_thermalDet"
        };

        linkedItems[] = {
            "JLTS_NVG_droid_chip_1", "SWLB_comlink_droid", LINKED_ITEMS
        };
        respawnLinkedItems[] = {
            "JLTS_NVG_droid_chip_1", "SWLB_comlink_droid", LINKED_ITEMS
        };

        class SoundBleeding {breath[] = {};};
        class SoundBreath {breath[] = {};};
        class SoundBurning {breath[] = {};};
        class SoundChoke {breath[] = {};};
        class SoundDrown {breath[] = {};};
        class SoundEnvironExt {
            generic[] = {
                {"walk", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 15}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 30}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 45}}
            };
        };
        class SoundEquipment {
            soldier[] = {
                {"walk", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 15}},
                {"walk", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 15}},
                {"tactical", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 15}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 30}},
                {"run", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 30}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step1.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step2.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step3.wav), 2, 1, 45}},
                {"sprint", {QPATHTOF(cis\data\audio\walk\Step4.wav), 2, 1, 45}}
            };
        };
        class SoundInjured {breath[] = {};};
        class SoundRecovered {breath[] = {};};
    };

    class CLASS(CIS_Unit_Droid_B1): CLASS(CIS_Unit_Droid_Base) {
        displayName = "B1 Battle Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1);

        editorSubcategory = QEDSUBCAT(CIS_B1s);
        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"};
        backpack = QCLASS(CIS_Backpack_Droid_B1);
    };

    class CLASS(CIS_Unit_Droid_B1_Heavy): CLASS(CIS_Unit_Droid_Base) {
        displayName = "B1 Heavy Droid";
        icon = "JLTS_iconManSupportGunner";

        weapons[] = {
            QCLASS(E5C_Stock),
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(E5C_Stock),
            "Throw",
            "Put"
        };

        magazines[] = {
            ITEM_5(QCLASS(Mag_150rnd_E5C)),
            "ls_mag_classC_thermalDet"
        };
        respawnMagazines[] = {
            ITEM_5(QCLASS(Mag_150rnd_E5C)),
            "ls_mag_classC_thermalDet"
        };
    };

    class CLASS(CIS_Unit_Droid_B1_AT): CLASS(CIS_Unit_Droid_B1) {
        displayName = "B1 Battle Droid (AT)";

        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_AT);
        backpack = QCLASS(CIS_Backpack_Droid_B1_predef_AT);

        weapons[] = {
            QCLASS(E5),
            QCLASS(E60R_AT),
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(E5),
            QCLASS(E60R_AT),
            "Throw",
            "Put"
        };

        magazines[] = {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            QCLASS(Mag_1rnd_E60R_AT_AI),
            "ls_mag_classC_thermalDet"
        };
        respawnMagazines[] = {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            QCLASS(Mag_1rnd_E60R_AT_AI),
            "ls_mag_classC_thermalDet"
        };
    };

    class CLASS(CIS_Unit_Droid_B1_AA): CLASS(CIS_Unit_Droid_B1) {
        displayName = "B1 Battle Droid (AA)";

        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_AT);
        backpack = QCLASS(CIS_Backpack_Droid_B1_predef_AA);

        weapons[] = {
            QCLASS(E5),
            QCLASS(E60R_AA),
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(E5),
            QCLASS(E60R_AT),
            "Throw",
            "Put"
        };

        magazines[] = {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            QCLASS(Mag_1rnd_E60R_AA_AI),
            "ls_mag_classC_thermalDet"
        };
        respawnMagazines[] = {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            QCLASS(Mag_1rnd_E60R_AA_AI),
            "ls_mag_classC_thermalDet"
        };
    };

    class CLASS(CIS_Unit_Droid_B1_Marine): CLASS(CIS_Unit_Droid_B1) {
        displayName = "B1 Marine Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Marine);

        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Marine);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_marine_co.paa"};
        backpack = QCLASS(CIS_Backpack_Droid_B1);
    };

    class CLASS(CIS_Unit_Droid_B1_Security): CLASS(CIS_Unit_Droid_B1) {
        displayName = "B1 Security Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Security);

        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Security);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_security_co.paa"};
        backpack = "";
    };

    class CLASS(CIS_Unit_Droid_B1_Commander): CLASS(CIS_Unit_Droid_B1) {
        displayName = "B1 Commander Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Commander);
        icon = "iconManOfficer";

        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Commander);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"};
        backpack = QCLASS(CIS_Backpack_Droid_B1_Antenna);
    };

    class CLASS(CIS_Unit_Droid_B1_Crew): CLASS(CIS_Unit_Droid_B1) {
        displayName = "B1 Crew Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Crew);

        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Crew);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_crew_co.paa"};
        backpack = QCLASS(CIS_Backpack_Droid_B1);
    };

    class CLASS(CIS_Unit_Droid_B1_Pilot): CLASS(CIS_Unit_Droid_B1) {
        displayName = "B1 Pilot Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Pilot);

        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Pilot);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_pilot_co.paa"};
        backpack = "";
    };

    class CLASS(CIS_Unit_Droid_B1_Saboteur): CLASS(CIS_Unit_Droid_B1) {
        displayName = "B1 Saboteur Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Saboteur);

        editorSubcategory = QEDSUBCAT(Special);
        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Rocket);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_rocket_co.paa"};
        backpack = QCLASS(CIS_Backpack_Droid_B1_Saboteur);
    };

    class CLASS(CIS_Unit_Droid_B1_Geonosis): CLASS(CIS_Unit_Droid_B1) {
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Geonosis);

        editorSubcategory = QEDSUBCAT(CIS_B1s_Geonosis);
        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Geonosis);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_co.paa"};
        backpack = "JLTS_B1_backpack_Geonosis";
    };

    class CLASS(CIS_Unit_Droid_B1_Commander_Geonosis): CLASS(CIS_Unit_Droid_B1_Geonosis) {
        displayName = "B1 Commander Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Commander_Geonosis);

        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Commander_Geonosis);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1GeonosisCommander_co.paa"};
        backpack = "JLTS_B1_antenna_Geonosis";
    };

    class CLASS(CIS_Unit_Droid_B1_Training): CLASS(CIS_Unit_Droid_B1) {
        uniformClass = QCLASS(CIS_Uniform_Droid_B1_Training);

        editorSubcategory = QEDSUBCAT(CIS_B1s_Training);
        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_B1_Training);
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_co.paa"};
        backpack = "JLTS_B1_backpack_Training";
    };

    class CLASS(CIS_Unit_Droid_BX): CLASS(CIS_Unit_Droid_Base) {
        SCOPE_PUBLIC;

        editorSubcategory = QEDSUBCAT(SpecialForces);
        editorPreview = EDITOR_PREVIEW(CIS_Unit_Droid_BX);

        displayName = "BX Commando Droid";
        uniformClass = QCLASS(CIS_Uniform_Droid_BX);

        model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
        hiddenSelectionsTextures[] = {"\ls_armor_redfor\uniform\cis\bx\data\body_co.paa"};

        magazines[] = {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("3AS_SmokeWhite")
        };
        respawnMagazines[] = {
            ITEM_5(QCLASS(Mag_100rnd_E5)),
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("3AS_SmokeWhite")
        };
        items[] = {
            // Other
            ITEM_5("ACE_CableTie")
        };
        respawnItems[] = {
            // Other
            ITEM_5("ACE_CableTie")
        };

        linkedItems[] = {
            QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", "SWLB_comlink_droid", LINKED_ITEMS
        };
        respawnLinkedItems[] = {
            QCLASS(CIS_Vest_Droid_BX), "JLTS_NVG_droid_chip_2", "SWLB_comlink_droid", LINKED_ITEMS
        };
    };

    class CLASS(Other_Backpack_Base);
    class CLASS(CIS_Backpack_Droid_B1): CLASS(Other_Backpack_Base) {
        SCOPE_PUBLIC;

        displayName = "[CIS] Battle Droid Backpack";

        model = "\MRC\JLTS\characters\DroidArmor\DroidBackpackB1.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_backpack_co.paa"};
        picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_backpack_ui_ca.paa";

        tf_dialog = "JLTS_droid_lr_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_east_radio_code";
        tf_hasLRradio = TRUE;
        tf_range = 15000;
        tf_subtype = "digital_lr";
    };

    class CLASS(CIS_Backpack_Droid_B1_predef_AT): CLASS(CIS_Backpack_Droid_B1) {
        SCOPE_HIDDEN;
        class TransportMagazines {
            MAG_XX(CLASS(Mag_1rnd_E60R_AT),3);
        };
    };

    class CLASS(CIS_Backpack_Droid_B1_predef_AA): CLASS(CIS_Backpack_Droid_B1) {
        SCOPE_HIDDEN;
        class TransportMagazines {
            MAG_XX(CLASS(Mag_1rnd_E60R_AA),3);
        };
    };

    class CLASS(CIS_Backpack_Droid_B1_Saboteur): CLASS(CIS_Backpack_Droid_B1) {
        displayName = "[CIS] Battle Droid Backpack (Saboteur)";
        hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\backpacks\B1_Saboteur_co.paa)};
    };

    class CLASS(CIS_Backpack_Droid_B1_Antenna): CLASS(CIS_Backpack_Droid_B1) {
        displayName = "[CIS] Battle Droid Antenna";
        model = "\MRC\JLTS\characters\DroidArmor\DroidAntennaB1.p3d";
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_antenna_co.paa"};
        picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_antenna_ui_ca.paa";
    };

    class CLASS(AAT_Base);
    class CLASS(AAT_CIS): CLASS(AAT_Base) {
        SCOPE_PUBLIC;

        faction = QFACTION(CIS);

        crew = QCLASS(CIS_Unit_Droid_B1_Crew);
        typicalCargo[] = {QCLASS(CIS_Unit_Droid_B1_Crew)};

        hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
        editorPreview = EEDITOR_PREVIEW(vehicles\land\aat,AAT_Blue);
    };
};