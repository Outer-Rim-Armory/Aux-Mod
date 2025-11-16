class CfgVehicles {
    class lsd_gar_phase2_base;
    class CLASS(Unit_Base): lsd_gar_phase2_base {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);

        displayName = "INF Trooper (Base)";
        uniformClass = QCLASS(Uniform_Base);

        // Inventory
        weapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "ls_clone_electrobinoculars",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "ls_clone_electrobinoculars",
            "Throw",
            "Put"
        };
        magazines[] = {
            // Ammo
            ITEM_11(QCLASS(Mag_80Rnd_DC15S)),
            ITEM_2(QCLASS(Mag_20Rnd_DC17)),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        respawnMagazines[] = {
            // Ammo
            ITEM_11(QCLASS(Mag_80Rnd_DC15S)),
            ITEM_2(QCLASS(Mag_20Rnd_DC17)),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        items[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
        };
        respawnItems[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet")
        };

        linkedItems[] = {
            QCLASS(Helmet_Phase1_Base), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
        };
        respawnLinkedItems[] = {
            QCLASS(Helmet_Phase1_Base), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
        };
        backpack = "";
    };

    class WM_P3Scout_E11;
    class CLASS(Unit_Scout_Base): WM_P3Scout_E11 {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(SpecialForces);

        displayName = "SF Scout 01 (Base)";
        uniformClass = QCLASS(Uniform_Scout_Base);

        // Inventory
        weapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "ls_clone_electrobinoculars",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "ls_clone_electrobinoculars",
            "Throw",
            "Put"
        };
        magazines[] = {
            // Ammo
            ITEM_11(QCLASS(Mag_80Rnd_DC15S)),
            ITEM_2(QCLASS(Mag_20Rnd_DC17)),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        respawnMagazines[] = {
            // Ammo
            ITEM_11(QCLASS(Mag_80Rnd_DC15S)),
            ITEM_2(QCLASS(Mag_20Rnd_DC17)),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        items[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
        };
        respawnItems[] = {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet")
        };

        linkedItems[] = {
            QCLASS(Helmet_Scout_Base_V1), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
        };
        respawnLinkedItems[] = {
            QCLASS(Helmet_Scout_Base_V1), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
        };
        backpack = "";
    };

    #include "configs\Units_P1.hpp"
    #include "configs\Units_P1_Pilot.hpp"
    #include "configs\Units_P1_Tanker.hpp"
    #include "configs\Units_P2.hpp"
    #include "configs\Units_P2_Female.hpp"
    #include "configs\Units_P2_Pilot.hpp"
    #include "configs\Units_P2_Tanker.hpp"
    #include "configs\Units_ARC.hpp"
    #include "configs\Units_ARF.hpp"
    #include "configs\Units_cloneCommando.hpp"
    #include "configs\Units_Jedi.hpp"
    #include "configs\Units_Airborne.hpp"
    #include "configs\Units_Scout.hpp"

    class CLASS(backpack_base);
    class CLASS(cloneBackpack_base): CLASS(backpack_base) {
        displayName = "[KC] INF Backpack (Base)";
        model = "\ls\core\addons\characters_clone_legacy\backpacks\standard\ls_gar_standard_backpack.p3d";
        hiddenSelections[] = {"backpack", "cover"};
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_backpack_ca.paa";

        maximumLoad = 400;
        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(cloneBackpack_standard): CLASS(cloneBackpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] INF Backpack (Base)";
        hiddenSelections[] = {"backpack", "cover"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\backpack_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa"
        };
    };

    class CLASS(Backpack): CLASS(cloneBackpack_standard) {
        displayName = "[KC] INF Backpack";
        hiddenSelections[] = {"backpack", "cover"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\CT_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_ca.paa);
    };

    class CLASS(Backpack_Invis): CLASS(Backpack) {
        displayName = "[KC] INF Backpack (Invis)";
        model = QPATHTOEF(core,data\models\empty\CLASS(empty.p3d));
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class CLASS(Backpack_Heavy_Base): CLASS(cloneBackpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] INF Heavy Backpack (Base)";
        model = "\ls\core\addons\characters_clone_legacy\backpacks\heavy\ls_gar_heavy_backpack.p3d";
        hiddenselections[] = {"backpack", "cover", "pouches", "tube"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\backpack_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\pouches_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\tube_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_backpack_ca.paa";
    };

    class CLASS(Backpack_Heavy): CLASS(Backpack_Heavy_Base) {
        displayName = "[KC] INF Heavy Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\CT_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\pouches_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\tube_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Heavy_ca.paa);
    };

    class CLASS(Backpack_Rocket_Base): CLASS(Backpack_Heavy_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] INF Rocket Backpack (Base)";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\standard\ls_gar_rocket_backpack.p3d";
        hiddenSelections[] = {"backpack", "holder", "rocket", "light", "pouches"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\backpack_eod_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\holder_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\rocket_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\light_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\pouches_co.paa"
        };
    };

    class CLASS(Backpack_Rocket): CLASS(Backpack_Heavy_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] INF Rocket Backpack";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\standard\ls_gar_rocket_backpack.p3d";
        hiddenSelections[] = {"backpack", "holder", "rocket", "light", "pouches"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\EOD_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\holder_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\rocket_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\light_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\pouches_co.paa"
        };
    };

    class CLASS(Backpack_Radio_Base): CLASS(cloneBackpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] INF Radio Backpack (Base)";
        model = "\ls\core\addons\characters_clone_legacy\backpacks\standard\ls_gar_radio_backpack.p3d";
        hiddenSelections[] = {"backpack","radio","screen"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\backpack_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\radio_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\screen_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_backpack_ca.paa";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "ls_radios_cloneLR";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class CLASS(Backpack_Radio): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Radio Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\CT_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\radio_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\screen_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Radio_ca.paa);
    };

    class CLASS(Backpack_Radio_Invis): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Radio Backpack (Invis)";
        model = QPATHTOEF(core,data\models\empty\CLASS(empty.p3d));
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class CLASS(Backpack_Medic_Base): CLASS(cloneBackpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] INF Medic Backpack (Base)";
        hiddenSelections[] = {"backpack","cover","medic1","medic2"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\backpack_medic_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa",
            "",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\medic_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_backpack_ca.paa";
    };

    class CLASS(Backpack_Medic): CLASS(Backpack_Medic_Base) {
        displayName = "[KC] INF Medic Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa",
            "",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\medic_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_ca.paa);
    };

    class CLASS(Backpack_Medic_Heavy_Base): CLASS(cloneBackpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] INF Medic Heavy Backpack (Base)";
        model = "\ls\core\addons\characters_clone_legacy\backpacks\heavy\ls_gar_heavyMedic_backpack.p3d";
        hiddenSelections[] = {"backpack","cover","pouches","medic1","medic2"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\backpack_medic_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\pouches_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\medic_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\medic_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_backpack_ca.paa";
    };

    class CLASS(Backpack_Medic_Heavy): CLASS(Backpack_Medic_Heavy_Base) {
        displayName = "[KC] INF Medic Heavy Backpack";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\cover_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\pouches_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\medic_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\medic_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_Heavy_ca.paa);
    };

    class CLASS(Backpack_Medic_Radio_Base): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Medic Radio Backpack (Base)";
        hiddenSelections[] = {"backpack","radio","screen"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\backpack_medic_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\radio_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\screen_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_backpack_ca.paa";
    };

    class CLASS(Backpack_Medic_Radio): CLASS(Backpack_Medic_Radio_Base) {
        displayName = "[KC] INF Medic Radio Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\radio_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\standard\data\screen_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_Radio_ca.paa);
    };

    class CLASS(Backpack_Radio_Mini_Base): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Radio Attachment (Base)";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\rto\ls_gar_rto_mini_backpack.p3d";
        hiddenSelections[] = {"main", "accumulator"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\rto\data\main_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\rto\data\accumulator_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_rto_mini_backpack_ca.paa";
    };

    class CLASS(Backpack_Radio_Mini): CLASS(Backpack_Radio_Mini_Base) {
        displayName = "[KC] INF Radio Attachment";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\miniRadio\camo1_co.paa),
            QPATHTOF(data\backpacks\miniRadio\camo2_co.paa)
        };
        picture = QPATHTOF(data\ui\Backpack_Radio_Mini_ca.paa);
    };
    class CLASS(Backpack_ARC): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] ARC Trooper Backpack";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\arc\ls_gar_arc_backpack.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\arc\data\camo1_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\icon_clone_arc_backpack_ca.paa";
        maximumLoad = 600;
    };

    class CLASS(cloneBackpack_commando): CLASS(cloneBackpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] SF Commando Backpack";

        model = "\ls\core\addons\characters_clone_legacy\backpacks\commando\ls_backpack_clone_commando.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\commando\data\camo1_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\commando\data\camo1_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_backpack_ui_ca.paa";
        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "ls_radios_cloneLR";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
        maximumLoad = 600;
        EGVAR(custom_armor,isCustom) = FALSE;
    };

    class CLASS(cloneBackpack_commando_EOD): CLASS(cloneBackpack_commando) {
        displayName = "[KC] SF Commando EOD Backpack";
        model = "\ls\core\addons\characters_clone_legacy\backpacks\commando\ls_backpack_clone_commando_eod.p3d";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_backpack_eod_ui_ca.paa";
    };

    class CLASS(cloneBackpack_commando_RTO): CLASS(cloneBackpack_commando) {
        displayName = "[KC] SF Commando Radio Backpack";
        model = "\ls\core\addons\characters_clone_legacy\backpacks\commando\ls_backpack_clone_commando_rto.p3d";
        picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_backpack_rto_ui_ca.paa";

    };

    class CLASS(cloneBackpack_commando_Tech): CLASS(cloneBackpack_commando) {
        displayName = "[KC] SF Commando Tech Backpack";
        model = "\ls\core\addons\characters_clone_legacy\backpacks\commando\ls_backpack_clone_commando_tech.p3d";
        hiddenSelections[] = {"illum", "camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\characters_clone_legacy\backpacks\commando\data\camo1_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\commando\data\camo1_co.paa",
            "\ls\core\addons\characters_clone_legacy\backpacks\commando\data\camo2_tech_co.paa"
        };
        picture = "\ls\core\addons\characters_clone_legacy\_ui\commando_backpack_ui_ca.paa";
    };

    class CLASS(Jetpack_JT12): CLASS(cloneBackpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] JT-12 Jetpack";

        model = "\MRC\JLTS\characters\CloneArmor2\CloneJumppackJT12.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\jetpacks\KC_JT12_co.paa),
            QPATHTOF(data\backpacks\jetpacks\KC_JT12_net_co.paa)};
        picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\Clone_jumppack_jt12_ui_ca.paa";

        EGVAR(jetpacks,isJetpack) = TRUE;
        EGVAR(jetpacks,speed) = JETPACK_SPEED_DEFAULT;
        EGVAR(jetpacks,strength) = JETPACK_STRENGTH_DEFAULT;
        EGVAR(jetpacks,fuel) = JETPACK_FUEL_DEFAULT;
        EGVAR(jetpacks,canHover) = TRUE;

        // Effects
        EGVAR(jetpacks,effectPoints)[] = {
            {-0.13251, -0.219357, -0.247619},
            { 0.15051, -0.219357, -0.247619}
        };
        EGVAR(jetpacks,effects)[] = {
            QCLASS(cloudlet_jetpackFire_blue),
            QCLASS(cloudlet_jetpackSmoke)
        };
        EGVAR(jetpacks,effectSound) = QPATHTOEF(jetpacks,data\audio\Jetpack_Loop.wss);
        EGVAR(jetpacks,lightColor)[] = {0, 0.1, 0.9};

        EGVAR(jetpacks,freefallHeight) = 500;

        EGVAR(custom_armor,isCustom) = FALSE;
    };
    class CLASS(Jetpack_JT12_LR): CLASS(Jetpack_JT12) {
        displayName = "[KC] JT-12 Jetpack [LR]";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "ls_radios_cloneLR";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class CLASS(Jetpack_CDV21): CLASS(Jetpack_JT12) {
        displayName = "[KC] CDV-21 Droppack";

        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_co.paa"};
        picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_ui_ca.paa";

        EGVAR(jetpacks,strength) = 0;
        EGVAR(jetpacks,speed) = 2;
        EGVAR(jetpacks,fuel) = 50;
        EGVAR(jetpacks,canHover) = FALSE;

        EGVAR(jetpacks,effectPoints)[] = {
            {-0.0753933, -0.239498, -0.149011},
            { 0.0933938, -0.239498, -0.149011}
        };
    };

    class CLASS(Jetpack_CDV21_LR): CLASS(Jetpack_CDV21) {
        displayName = "[KC] CDV-21 Droppack [LR]";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "ls_radios_cloneLR";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class CLASS(Jetpack_CDV19): CLASS(Jetpack_JT12) {
        displayName = "[KC] CDV-19 Jetpack";

        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_mc_co.paa"};
        picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";

        EGVAR(jetpacks,fuel) = 300;
        EGVAR(jetpacks,effectPoints)[] = {
            {0.00900585, -0.212387, -0.16184}
        };
    };

    class CLASS(Jetpack_CDV19_LR): CLASS(Jetpack_CDV19) {
        displayName = "[KC] CDV-19 Jetpack [LR]";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "ls_radios_cloneLR";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    #include "configs\GroundHolders.hpp"
};
