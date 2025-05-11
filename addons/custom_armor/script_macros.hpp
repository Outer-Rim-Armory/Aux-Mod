#define P1_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase1,var1)): CLASS(Helmet_Phase1_Base) { \
    displayName = QUOTE([KC] INF P1 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa", \
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase1_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define P1_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Phase1,var1)): CLASS(Helmet_Phase1_Base) { \
    displayName = QUOTE([KC] INF P1 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa", \
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Phase1,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Phase1,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase1_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Phase1,var1)##var2): CLASS(DOUBLES(Helmet_Phase1,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa" \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define P1_PILOT_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase1_Pilot,var1)): CLASS(Helmet_Phase1_Pilot_Base) { \
    displayName = QUOTE([KC] AVI P1 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1Pilot\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\helmets\phase1Pilot\DOUBLES(var1,camo2_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Pilot_Phase1_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define P1_PILOT_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Phase1_Pilot,var1)): CLASS(Helmet_Phase1_Pilot_Base) { \
    displayName = QUOTE([KC] AVI P1 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1Pilot\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa", \
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa" \
    }; \
    subItems[] = {}; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Phase1_Pilot,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Phase1_Pilot,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Pilot_Phase1_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Phase1_Pilot,var1)##var2): CLASS(DOUBLES(Helmet_Phase1_Pilot,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1Pilot\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa", \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define P1_TANKER_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase1_Tanker,var1)): CLASS(Helmet_Phase1_Tanker_Base) { \
    displayName = QUOTE([KC] ARMR P1 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1SpecOp\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Tanker_Phase1_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define P1_TANKER_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Phase1_Tanker,var1)): CLASS(Helmet_Phase1_Tanker_Base) { \
    displayName = QUOTE([KC] ARMR P1 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1SpecOp\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa" \
    }; \
    subItems[] = {}; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Phase1_Tanker,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Phase1_Tanker,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Tanker_Phase1_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Phase1_Tanker,var1)##var2): CLASS(DOUBLES(Helmet_Phase1_Tanker,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase1SpecOp\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define P2_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase2,var1)): CLASS(Helmet_Phase2_Base) { \
    displayName = QUOTE([KC] INF P2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase2_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define P2_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Phase2,var1)): CLASS(Helmet_Phase2_Base) { \
    displayName = QUOTE([KC] INF P2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Phase2,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Phase2,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase2_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Phase2,var1)##var2): CLASS(DOUBLES(Helmet_Phase2,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define P2_PILOT_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase2_Pilot,var1)): CLASS(Helmet_Phase2_Pilot_Base) { \
    displayName = QUOTE([KC] AVI P2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2Pilot\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Pilot_Phase2_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define P2_PILOT_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Phase2_Pilot,var1)): CLASS(Helmet_Phase2_Pilot_Base) { \
    displayName = QUOTE([KC] AVI P2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2Pilot\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa" \
    }; \
    subItems[] = {}; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Phase2_Pilot,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Phase2_Pilot,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Pilot_Phase2_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Phase2_Pilot,var1)##var2): CLASS(DOUBLES(Helmet_Phase2_Pilot,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2Pilot\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define P2_TANKER_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase2_Tanker,var1)): CLASS(Helmet_Phase2_Tanker_Base) { \
    displayName = QUOTE([KC] ARMR P2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2SpecOp\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Tanker_Phase2_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define P2_TANKER_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Phase2_Tanker,var1)): CLASS(Helmet_Phase2_Tanker_Base) { \
    displayName = QUOTE([KC] ARMR P2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2SpecOp\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa" \
    }; \
    subItems[] = {}; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Phase2_Tanker,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Phase2_Tanker,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Tanker_Phase2_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Phase2_Tanker,var1)##var2): CLASS(DOUBLES(Helmet_Phase2_Tanker,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2SpecOp\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define P2_INSULATED_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase2_Insulated,var1)): CLASS(Helmet_Phase2_Insulated_Base) { \
    displayName = QUOTE([KC] INF P2 Insulated Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\insulated\DOUBLES(var1,camo1_co.paa)) \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Insulated_Phase2_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define ENGINEER_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Engineer,var1)): CLASS(Helmet_Engineer_Base) { \
    displayName = QUOTE([KC] ENG Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\engineer\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa", \
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Engineer_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define ENGINEER_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Engineer,var1)): CLASS(Helmet_Engineer_Base) { \
    displayName = QUOTE([KC] ENG Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\engineer\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa", \
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Engineer,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Engineer,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Engineer_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Engineer,var1)##var2): CLASS(DOUBLES(Helmet_Engineer,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\engineer\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa", \
        QPATHTOF(data\visors\TRIPLES(var2,Engineer,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define ARC_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_ARC,var1)): CLASS(Helmet_ARC_Base) { \
    displayName = QUOTE([KC] SF ARC P1.5 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\arc\DOUBLES(var1,camo1_co.paa)), \
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa", \
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_ARC_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define ARC_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_ARC,var1)): CLASS(Helmet_ARC_Base) { \
    displayName = QUOTE([KC] SF ARC P1.5 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\arc\DOUBLES(var1,camo1_co.paa)), \
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa", \
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_ARC,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_ARC,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_ARC_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_ARC,var1)##var2): CLASS(DOUBLES(Helmet_ARC,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\arc\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)), \
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa" \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define ARF_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_ARF,var1)): CLASS(Helmet_ARF_Base) { \
    displayName = QUOTE([KC] SF ARF Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\arf\DOUBLES(var1,camo1_co.paa)), \
        "", \
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_ARF_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define ARF_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_ARF,var1)): CLASS(Helmet_ARF_Base) { \
    displayName = QUOTE([KC] SF ARF Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\arf\DOUBLES(var1,camo1_co.paa)), \
        "", \
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_ARF,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_ARF,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_ARF_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_ARF,var1)##var2): CLASS(DOUBLES(Helmet_ARF,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\arF\DOUBLES(var1,camo1_co.paa)), \
        "", \
        QPATHTOF(data\visors\TRIPLES(var2,ARF,visor_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define BARC_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_BARC,var1)): CLASS(Helmet_BARC_Base) { \
    displayName = QUOTE([KC] INF BARC Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\barc\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_BARC_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define BARC_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_BARC,var1)): CLASS(Helmet_BARC_Base) { \
    displayName = QUOTE([KC] INF BARC Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\barc\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_BARC,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_BARC,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_BARC_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_BARC,var1)##var2): CLASS(DOUBLES(Helmet_BARC,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\barc\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define P12_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase12,var1)): CLASS(Helmet_Phase12_Base) { \
    displayName = QUOTE([KC] INF P1-2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase12\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\rex\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase12_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define P12_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Phase12,var1)): CLASS(Helmet_Phase12_Base) { \
    displayName = QUOTE([KC] INF P1-2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase12\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\rex\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase12_Custom); \
        custom = QUOTE(var1); \
    }; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Phase12,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Phase12,var1)##var2##); \
}; \
class CLASS(DOUBLES(Helmet_Phase12,var1)##var2): CLASS(DOUBLES(Helmet_Phase12,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase12\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define AB_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Airborne,var1)): CLASS(Helmet_Airborne_Base) { \
    displayName = QUOTE([KC] AB Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\airborne\DOUBLES(var1,camo1_co.paa)), \
        "\lsd_armor_bluefor\helmet\gar\airborne\data\AB_Helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Airborne_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define SAND_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Sand,var1)): CLASS(Helmet_Sand_Base) { \
    displayName = QUOTE([KC] INF Sand Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\desert\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Sand_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define SAND_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Sand,var1)): CLASS(Helmet_Sand_Base) { \
    displayName = QUOTE([KC] INF Sand Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\desert\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Sand,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Sand,var1)##var2##); \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Sand_Custom); \
        custom = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Sand,var1)##var2): CLASS(DOUBLES(Helmet_Sand,var1)) { \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,desert_visor_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define HUNTER_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Hunter,var1)): CLASS(Helmet_Hunter_Base) { \
    displayName = QUOTE([KC] INF Hunter Helm ('##var1##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(data\helmets\hunter\DOUBLES(var1,camo1_co.paa)), \
        "ls_armor_bluefor\helmet\sob\hunter\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Hunter_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define UNIFORM_CUSTOM(var1) class CLASS(DOUBLES(Uniform,var1)): CLASS(Uniform_Base) { \
    displayName = QUOTE([KC] Custom Armor ('##var1##')); \
    GVAR(isCustom) = TRUE; \
    class ItemInfo: ItemInfo { \
        uniformClass = QCLASS(DOUBLES(Unit,var1)); \
    }; \
    class XtdGearInfo { \
        model = QCLASS(Uniforms_Custom); \
        custom = QUOTE(var1); \
    }; \
}

#define UNIFORM_INSULATED_P2_CUSTOM(var1) class CLASS(DOUBLES(Uniform_Phase2_Insulated,var1)): CLASS(Uniform_Phase2_Insulated_Base) { \
    displayName = QUOTE([KC] Custom P2 Insulated Armor ('##var1##')); \
    GVAR(isCustom) = TRUE; \
    class ItemInfo: ItemInfo { \
        uniformClass = QCLASS(DOUBLES(Unit_Phase2_Insulated,var1)); \
    }; \
    class XtdGearInfo { \
        model = QCLASS(Uniforms_Insulated_Custom); \
        custom = QUOTE(var1); \
    }; \
}