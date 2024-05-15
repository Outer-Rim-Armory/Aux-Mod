class CfgVehicles {
    class CLASS(INDEP_Unit_Base);
    class FACTION(mandalorianArmor_unit_base): CLASS(INDEP_Unit_Base) {

    };

    class CLASS(backpack_base);
    class CLASS(mandalorianArmor_backpack_base): CLASS(backpack_base) {
    };

    class CLASS(mandalorianArmor_backpack_jt12): CLASS(mandalorianArmor_backpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Mandalorian JT-12 Jetpack";

        model = "\z\tgf\addons\backpacks\jt12\jt12_jetpack.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\z\tgf\addons\backpacks\jt12\data\camo1_co.paa"};
        picture = "\z\tgf\addons\backpacks\jt12\data\JT12.paa";

        EGVAR(jetpacks,isJetpack) = TRUE;
        EGVAR(jetpacks,fuel) = 200;
        EGVAR(jetpacks,speed) = 2;
        EGVAR(jetpacks,strength) = 15;
        EGVAR(jetpacks,canHover) = TRUE;

        EGVAR(jetpacks,effectPoints)[] = {"effect_left", "effect_right"};
        EGVAR(jetpacks,effects)[] = {
            QCLASS(Effects_JetpackFire_Blue),
            QCLASS(Effects_JetpackSmoke)
        };
        EGVAR(jetpacks,effectSound)  = QPATHTOEF(jetpacks,data\audio\Jetpack_Loop.wss);
        EGVAR(jetpacks,lightColor)[] = {0, 0.1, 0.9};

        EGVAR(jetpacks,freefallHeight) = 500;
    };

    class CLASS(mandalorianArmor_backpack_jt12_Dart): CLASS(mandalorianArmor_backpack_jt12) {
        displayName = "[KC] Mandalorian JT-12 Jetpack ('Dart')";

        hiddenSelectionsTextures[] = {
            QPATHTOF(mandalorians\data\backpacks\jt12\Dart_camo1_co.paa)
        };

        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class CLASS(mandalorianArmor_backpack_z6): CLASS(mandalorianArmor_backpack_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Mandalorian Z-6 Jetpack";

        model = "\z\tgf\addons\backpacks\z6\z6_jetpack.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\z\tgf\addons\backpacks\z6\data\camo1_co.paa"};
        picture = "\z\tgf\addons\backpacks\z6\data\Z6.paa";

        EGVAR(jetpacks,isJetpack) = TRUE;
        EGVAR(jetpacks,fuel) = 200;
        EGVAR(jetpacks,speed) = 2;
        EGVAR(jetpacks,strength) = 15;
        EGVAR(jetpacks,canHover) = TRUE;

        EGVAR(jetpacks,effectPoints)[] = {"effect_left", "effect_right"};
        EGVAR(jetpacks,effects)[] = {
            QCLASS(Effects_JetpackFire_Blue),
            QCLASS(Effects_JetpackSmoke)
        };
        EGVAR(jetpacks,effectSound)  = QPATHTOEF(jetpacks,data\audio\Jetpack_Loop.wss);
        EGVAR(jetpacks,lightColor)[] = {0, 0.1, 0.9};

        EGVAR(jetpacks,freefallHeight) = 500;
    };
};