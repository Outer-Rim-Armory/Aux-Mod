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
        type = "Standard";
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
        type = "Engineer";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Saboteur): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Backpack (Saboteur)";
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\backpacks\B1_Saboteur_co.paa)};

    class XtdGearInfo: XtdGearInfo {
        type = "Saboteur";
    };
};

class CLASS(CIS_Backpack_Droid_B1_Prototype): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Backpack (Prototype)";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_backpack_prototype_co.paa"};

    class XtdGearInfo: XtdGearInfo {
        type = "Prototype";
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
        type = "Antenna";
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

class CLASS(Backpack_Droid_B1): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[KC] Battle Droid Backpack";
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\backpacks\KC_B1_co.paa)};
    side = BLUFOR;
    modelSides[] = {BLUFOR};
    maximumLoad = 1200;

    // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "ls_radios_cloneLR";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
};

class CLASS(CIS_Jetpack_Droid_B1): CLASS(CIS_Backpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Jetpack";

    model = "\MRC\JLTS\characters\DroidArmor\DroidJetpackB1.p3d";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_jetpack_co.paa"};
    picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_jetpack_ui_ca.paa";

    EGVAR(jetpacks,isJetpack) = TRUE;
    EGVAR(jetpacks,fuel) = JETPACK_FUEL_DEFAULT;
    EGVAR(jetpacks,speed) = JETPACK_SPEED_DEFAULT;
    EGVAR(jetpacks,strength) = JETPACK_STRENGTH_DEFAULT;
    EGVAR(jetpacks,canHover) = TRUE;

    EGVAR(jetpacks,effectPoints)[] = {
        {-0.146924, -0.21555, -0.0638125},
        { 0.164924, -0.21555, -0.0638125}
    };
    EGVAR(jetpacks,effects)[] = {
        QCLASS(cloudlet_jetpackFire_blue),
        QCLASS(cloudlet_jetpackSmoke)
    };
    EGVAR(jetpacks,effectSound)  = QPATHTOEF(jetpacks,data\audio\Jetpack_Loop.wss);
    EGVAR(jetpacks,lightColor)[] = {0, 0.1, 0.9};

    EGVAR(jetpacks,freefallHeight) = 100000;

    class XtdGearInfo {
        model = QCLASS(CIS_Jetpacks);
        type = "Standard";
    };
};

class CLASS(CIS_Jetpack_Droid_B1_Rocket): CLASS(CIS_Jetpack_Droid_B1) {
    displayName = "[CIS] Battle Droid Jetpack (Rocket)";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\DroidArmor\data\b1_jetpack_rocket_co.paa"};

    class XtdGearInfo: XtdGearInfo {
        type = "Rocket";
    };
};

class CLASS(Jetpack_Droid_B1): CLASS(CIS_Jetpack_Droid_B1) {
    displayName = "[KC] Battle Droid Jetpack";
    hiddenSelectionsTextures[] = {QPATHTOF(cis\data\textures\backpacks\KC_B1_Jetpack_co.paa)};
    maximumLoad = 1200;

    // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "ls_radios_cloneLR";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
};
