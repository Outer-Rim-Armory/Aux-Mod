class CLASS(Helmet_Phase1_Base);
P1_HELMET_UNIT(CG);
P1_HELMET_UNIT(DC);
P1_HELMET_UNIT(GC);

class CLASS(Helmet_Phase1_HowzerBlue): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm ('Howzer')";
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase1\HowzerBlue_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;

    class XtdGearInfo {
        model = QCLASS(Helmets_Phase1_Units);
        camo = "KC_Howzer";
    };
};

class CLASS(Helmet_Phase1_HowzerBrown): CLASS(Helmet_Phase1_Base) {
    displayName = "[KC] INF P1 Helm ('Howzer') [Brown]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase1\HowzerBrown_camo1_co.paa),
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;

    class XtdGearInfo {
        model = QCLASS(Helmets_Phase1_Units);
        camo = "KC_HowzerBrown";
    };
};

P1_HELMET_UNIT(104th);
P1_HELMET_UNIT(212th);
P1_HELMET_UNIT(501st);
P1_HELMET_UNIT_NAME(91st,Ponds);
