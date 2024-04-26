class CLASS(Helmet_Phase2_Base);
P2_HELMET_UNIT(CG);
P2_HELMET_UNIT_NAME(CG,Stone);
P2_HELMET_UNIT(DC);

class CLASS(Helmet_Phase2_Fil): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm ('Fil')";
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase2\Fil_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;

    class XtdGearInfo {
        model = QCLASS(Helmets_Phase2_Units);
        camo = "KC_Fil";
    };
};

class CLASS(Helmet_Phase2_FilSquad): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm ('Fil's Squad')";
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase2\FilSquad_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;

    class XtdGearInfo {
        model = QCLASS(Helmets_Phase2_Units);
        camo = "KC_FilSquad";
    };
};

P2_HELMET_UNIT(GC);

class CLASS(Helmet_Phase2_HowzerBlue): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm ('Howzer') [Blue]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase2\HowzerBlue_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;

    class XtdGearInfo {
        model = QCLASS(Helmets_Phase2_Units);
        camo = "KC_Howzer";
    };
};

class CLASS(Helmet_Phase2_HowzerBrown): CLASS(Helmet_Phase2_Base) {
    displayName = "[KC] INF P2 Helm ('Howzer') [Brown]";
    hiddenSelectionsTextures[] = {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase2\HowzerBrown_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;

    class XtdGearInfo {
        model = QCLASS(Helmets_Phase2_Units);
        camo = "KC_HowzerBrown";
    };
};

P2_HELMET_UNIT(104th);
P2_HELMET_UNIT(187th);
P2_HELMET_UNIT(212th);
P2_HELMET_UNIT(501st);
P2_HELMET_UNIT_NAME(91st,Ponds);