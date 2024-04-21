class CLASS(backpack_base);
class CLASS(CIS_Backpack_Droid_B1): CLASS(backpack_base) {
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

    class XtdGearInfo {
        model = QCLASS(CIS_Backpacks_B1);
        camo = "Standard";
        variant = "Standard";
    };
};

class CLASS(CIS_Backpack_Droid_B1_predef_HE): CLASS(CIS_Backpack_Droid_B1) {
    SCOPE_HIDDEN;
    class TransportMagazines {
        MAG_XX(CLASS(Mag_1rnd_E60R_HE),3);
    };
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

class CLASS(CIS_Backpack_Droid_B1_Engineer): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Backpack (Engineer)";
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\backpacks\B1_Engineer_co.paa)};

    class XtdGearInfo: XtdGearInfo {
        camo = "Engineer";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Saboteur): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Backpack (Saboteur)";
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\backpacks\B1_Saboteur_co.paa)};

    class XtdGearInfo: XtdGearInfo {
        camo = "Saboteur";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Prototype): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Backpack (Prototype)";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_backpack_prototype_co.paa"};

    class XtdGearInfo: XtdGearInfo {
        camo = "Prototype";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Geonosis): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Backpack (Geonosis)";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_backpack_co.paa"};

    class XtdGearInfo: XtdGearInfo {
        variant = "Geonosis";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Geonosis_predef_AT): CLASS(CIS_Backpack_Droid_B1_predef_AT) {
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_backpack_co.paa"};
};

class CLASS(CIS_Backpack_Droid_B1_Geonosis_predef_AA): CLASS(CIS_Backpack_Droid_B1_predef_AA) {
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_backpack_co.paa"};
};

class CLASS(CIS_Backpack_Droid_B1_Training): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Backpack (Training)";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_backpack_co.paa"};

    class XtdGearInfo: XtdGearInfo {
        variant = "Training";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Training_predef_AT): CLASS(CIS_Backpack_Droid_B1_predef_AT) {
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_backpack_co.paa"};
};

class CLASS(CIS_Backpack_Droid_B1_Training_predef_AA): CLASS(CIS_Backpack_Droid_B1_predef_AA) {
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_backpack_co.paa"};
};

class CLASS(CIS_Backpack_Droid_B1_Antenna): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Antenna";
    model = "\MRC\JLTS\characters\DroidArmor\DroidAntennaB1.p3d";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_antenna_co.paa"};
    picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_antenna_ui_ca.paa";

    class XtdGearInfo: XtdGearInfo {
        camo = "Antenna";
        variant = "Standard";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Antenna_Geonosis): CLASS(CIS_Backpack_Droid_B1_Antenna) {
    displayName = "[CIS] Battle Droid Antenna (Geonosis)";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Geonosis_antenna_co.paa"};

    class XtdGearInfo: XtdGearInfo {
        variant = "Geonosis";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Antenna_Training): CLASS(CIS_Backpack_Droid_B1_Antenna) {
    displayName = "[CIS] Battle Droid Antenna (Training)";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidUnits\data\Droid_B1Training_antenna_co.paa"};

    class XtdGearInfo: XtdGearInfo {
        variant = "Training";
    };
};

class CLASS(CIS_Jetpack_Droid_B1): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Jetpack";

    model = "\MRC\JLTS\characters\DroidArmor\DroidJetpackB1.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_jetpack_co.paa"};
    picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_jetpack_ui_ca.paa";

    JLTS_isJumppack = TRUE;
    JLTS_settingsDialog = "JLTS_droid_jumppack_dialog";

    JLTS_energy[] = {25, 150};
    JLTS_jumpLimits[] = {50, {2, 50}, "default"};
    JLTS_steeringCoef = 0.06;
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
};

class CLASS(CIS_Jetpack_Droid_B1_Rocket): CLASS(CIS_Jetpack_Droid_B1) {
    displayName = "[KC] Battle Droid Jetpack (Rocket)";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_jetpack_rocket_co.paa"};
};