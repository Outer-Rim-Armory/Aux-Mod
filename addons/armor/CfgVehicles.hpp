class CfgVehicles {
    class lsd_gar_trooper_phase1;
    class CLASS(Unit_Base): lsd_gar_trooper_phase1 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);

        displayName = "INF Trooper (Base)";
        uniformClass = QCLASS(Uniform_Base);

        // Inventory
        weapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "SWLB_clone_binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            QCLASS(DC15S),
            QCLASS(DC17),
            "SWLB_clone_binocular",
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
            QCLASS(Helmet_Phase1_Base), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
        };
        respawnLinkedItems[] = {
            QCLASS(Helmet_Phase1_Base), QCLASS(Vest_Basic), QCLASS(NVG_Chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
        };
        backpack = "";
    };

    #include "configs\Units_P1.hpp"
    #include "configs\Units_P1_Pilot.hpp"
    #include "configs\Units_P1_Tanker.hpp"
    #include "configs\Units_P2.hpp"
    #include "configs\Units_P2_Pilot.hpp"
    #include "configs\Units_P2_Tanker.hpp"
    #include "configs\Units_ARC.hpp"
    #include "configs\Units_ARF.hpp"
    #include "configs\Units_Commando.hpp"
    #include "configs\Units_Jedi.hpp"

    class SWLB_clone_backpack;
    class CLASS(Backpack_Base): SWLB_clone_backpack {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] INF Backpack (Base)";
        hiddenSelections[] = {"camo1", "cover", "heavy", "medic", "RTO"};
        hiddenSelectionsTextures[] = {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };

        maximumLoad = 400;
        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Backpack): CLASS(Backpack_Base) {
        displayName = "[KC] INF Backpack";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\camo1_co.paa),
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_ca.paa);
    };

    class CLASS(Backpack_Invis): CLASS(Backpack) {
        displayName = "[KC] INF Backpack (Invis)";
        model = QPATHTOEF(core,data\models\empty\CLASS(empty.p3d));
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class CLASS(Backpack_Heavy_Base): CLASS(Backpack_Base) {
        displayName = "[KC] INF Heavy Backpack (Base)";

        hiddenSelectionsTextures[] = {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_heavy_ca.paa";
    };

    class CLASS(Backpack_Heavy): CLASS(Backpack_Heavy_Base) {
        displayName = "[KC] INF Heavy Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\camo1_co.paa),
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Heavy_ca.paa);
    };

    class CLASS(Backpack_Radio_Base): CLASS(Backpack_Base) {
        displayName = "[KC] INF Radio Backpack (Base)";

        hiddenSelectionsTextures[] = {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "",
            "",
            "",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_RTO_ca.paa";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class CLASS(Backpack_Radio): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Radio Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\camo1_co.paa),
            "",
            "",
            "",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Radio_ca.paa);
    };

    class CLASS(Backpack_Radio_Invis): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Radio Backpack (Invis)";
        model = QPATHTOEF(core,data\models\empty\CLASS(empty.p3d));
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class CLASS(Backpack_Medic_Base): CLASS(Backpack_Base) {
        displayName = "[KC] INF Medic Backpack (Base)";

        hiddenSelectionsTextures[] = {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_medic_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_medic_ca.paa";
    };

    class CLASS(Backpack_Medic): CLASS(Backpack_Medic_Base) {
        displayName = "[KC] INF Medic Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_ca.paa);
    };

    class CLASS(Backpack_Medic_Heavy_Base): CLASS(Backpack_Base) {
        displayName = "[KC] INF Medic Heavy Backpack (Base)";

        hiddenSelectionsTextures[] = {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_medic_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_heavy_ca.paa";
    };

    class CLASS(Backpack_Medic_Heavy): CLASS(Backpack_Medic_Heavy_Base) {
        displayName = "[KC] INF Medic Heavy Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_Heavy_ca.paa);
    };

    class CLASS(Backpack_Medic_Radio_Base): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Medic Radio Backpack (Base)";

        hiddenSelectionsTextures[] = {
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_medic_co.paa",
            "",
            "",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_medic_ca.paa";
    };

    class CLASS(Backpack_Medic_Radio): CLASS(Backpack_Medic_Radio_Base) {
        displayName = "[KC] INF Medic Radio Backpack";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\backpacks\standard\Medic_camo1_co.paa),
            "",
            "",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
        picture = QPATHTOF(data\ui\Backpack_Medic_Radio_ca.paa);
    };

    class CLASS(Backpack_Radio_Mini_Base): CLASS(Backpack_Radio_Base) {
        displayName = "[KC] INF Radio Attachment (Base)";

        model = "\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
        hiddenSelections[] = {"main", "accumulator"};
        hiddenSelectionsTextures[] = {
            "\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
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

        model = "\SWLB_equipment\backpacks\SWLB_clone_arc_backpack.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {
            "\SWLB_equipment\backpacks\data\SWLB_clone_arc_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_arc_backpack_ca.paa";
    };

    class CLASS(Backack_Commando): CLASS(Backpack_Base) {
        displayName = "[KC] SF Commando Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        hiddenSelectionsTextures[] = {
            "\SWLB_clones_spec\backpacks\data\backpack_co.paa",
            "\SWLB_clones_spec\backpacks\data\backpack_co.paa"
        };
        picture = "\SWLB_clones_spec\backpacks\data\ui\icon_SWLB_clone_commando_backpack_k2_ca.paa";
        maximumLoad = 450;
        EGVAR(custom_armor,isCustom) = FALSE;
    };

    class CLASS(Backack_Commando_EOD): CLASS(Backack_Commando) {
        displayName = "[KC] SF Commando EOD Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_eod.p3d";
        picture = "\SWLB_clones_spec\backpacks\data\ui\icon_SWLB_clone_commando_backpack_k2_eod_ca.paa";
    };

    class CLASS(Backack_Commando_RTO): CLASS(Backack_Commando) {
        displayName = "[KC] SF Commando Radio Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_rto.p3d";
        picture = "\SWLB_clones_spec\backpacks\data\ui\icon_SWLB_clone_commando_backpack_k2_rto_ca.paa";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class CLASS(Backack_Commando_Tech): CLASS(Backack_Commando) {
        displayName = "[KC] SF Commando Tech Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_tech.p3d";
        hiddenSelections[] = {"illum", "camo1", "camo2"};
        hiddenSelectionsTextures[] = {
            "\SWLB_clones_spec\backpacks\data\backpack_co.paa",
            "\SWLB_clones_spec\backpacks\data\backpack_co.paa",
            "\SWLB_clones_spec\backpacks\data\backpack_tech_co.paa"
        };
        picture = "\SWLB_clones_spec\backpacks\data\ui\icon_SWLB_clone_commando_backpack_k2_ca.paa";
    };

    class CLASS(Jetpack_JT12): CLASS(Backpack_Base) {
        displayName = "[KC] JT-12 Jetpack";

        model = "\MRC\JLTS\characters\CloneArmor2\CloneJumppackJT12.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor2\data\Clone_jumppack_jt12_co.paa"};
        picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\Clone_jumppack_jt12_ui_ca.paa";

        JLTS_isJumppack = TRUE;
        JLTS_settingsDialog = "JLTS_clone_jumppack_dialog";

        JLTS_energy[] = {15, 150};
        JLTS_jumpLimits[] = {50, {2, 50}, "default"};
        JLTS_steeringCoef = 0.1;
        JLTS_recharge = 2;

        JLTS_effectPoints[] = {"effect_left", "effect_right"};
        JLTS_sounds[] = {
            {"\MRC\JLTS\jumppacks\sounds\ignite.wss", 1, 1},
            {"\MRC\JLTS\jumppacks\sounds\ignite_fail.wss", 3, 1},
            {"\MRC\JLTS\jumppacks\sounds\stop.wss", 1, 1},
            {"\MRC\JLTS\jumppacks\sounds\stop_emergency.wss", 5, 1},
            "JLTS_jumppack_error",
            "JLTS_SFX_jumppack_idle"
        };
        EGVAR(custom_armor,isCustom) = FALSE;
    };
    class CLASS(Jetpack_JT12_LR): CLASS(Jetpack_JT12) {
        displayName = "[KC] JT-12 Jetpack [LR]";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class CLASS(Jetpack_CDV21): CLASS(Jetpack_JT12) {
        displayName = "[KC] CDV-21 Droppack";

        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
        hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_co.paa"};
        picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_ui_ca.paa";

        JLTS_energy[] = {10, 100};
        JLTS_jumpLimits[] = {50, {2, 15}, "default"};
        JLTS_recharge = 1;
    };

    class CLASS(Jetpack_CDV21_LR): CLASS(Jetpack_CDV21) {
        displayName = "[KC] CDV-21 Droppack [LR]";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
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

        JLTS_energy[] = {5,50};
        JLTS_jumpLimits[] = {15, {2, 30}, "default"};
        JLTS_steeringCoef = 0.02;
        JLTS_effectPoints[] = {"effect"};
    };

    class CLASS(Jetpack_CDV19_LR): CLASS(Jetpack_CDV19) {
        displayName = "[KC] CDV-19 Jetpack [LR]";

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    #include "configs\GroundHolders.hpp"
};