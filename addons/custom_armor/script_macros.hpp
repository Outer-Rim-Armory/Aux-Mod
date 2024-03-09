#define P2_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_Phase2,var1)): CLASS(Helmet_Phase2_Base) \
{ \
    displayName = QUOTE([KC] INF P2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo \
    { \
        model = QCLASS(Helmets_Phase2_Custom); \
        camo = QUOTE(var1); \
    }; \
}

#define P2_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_Phase2,var1)): CLASS(Helmet_Phase2_Base) \
{ \
    displayName = QUOTE([KC] INF P2 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_Phase2,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_Phase2,var1)##var2##); \
    class XtdGearInfo \
    { \
        model = QCLASS(Helmets_Phase2_Custom); \
        camo = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_Phase2,var1)##var2): CLASS(DOUBLES(Helmet_Phase2,var1)) \
{ \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = \
    { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define ARC_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_ARC,var1)): CLASS(Helmet_ARC_Base) \
{ \
    displayName = QUOTE([KC] SF ARC P1.5 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\arc\DOUBLES(var1,camo1_co.paa)), \
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa", \
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo \
    { \
        model = QCLASS(Helmets_ARC_Custom); \
        camo = QUOTE(var1); \
    }; \
}

#define ARC_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_ARC,var1)): CLASS(Helmet_ARC_Base) \
{ \
    displayName = QUOTE([KC] SF ARC P1.5 Helm ('##var1##')); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\arc\DOUBLES(var1,camo1_co.paa)), \
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa", \
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_ARC,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_ARC,var1)##var2##); \
    class XtdGearInfo \
    { \
        model = QCLASS(Helmets_ARC_Custom); \
        camo = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_ARC,var1)##var2): CLASS(DOUBLES(Helmet_ARC,var1)) \
{ \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\arc\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)), \
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa" \
    }; \
    hiddenSelectionsMaterials[] = \
    { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define ARF_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_ARF,var1)): CLASS(Helmet_ARF_Base) \
{ \
    displayName = QUOTE([KC] SF ARF Helm ('##var1##')); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\arf\DOUBLES(var1,camo1_co.paa)), \
        "", \
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo \
    { \
        model = QCLASS(Helmets_ARF_Custom); \
        camo = QUOTE(var1); \
    }; \
}

#define ARF_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_ARF,var1)): CLASS(Helmet_ARF_Base) \
{ \
    displayName = QUOTE([KC] SF ARF Helm ('##var1##')); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\arf\DOUBLES(var1,camo1_co.paa)), \
        "", \
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_ARF,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_ARF,var1)##var2##); \
    class XtdGearInfo \
    { \
        model = QCLASS(Helmets_ARF_Custom); \
        camo = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_ARF,var1)##var2): CLASS(DOUBLES(Helmet_ARF,var1)) \
{ \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\arF\DOUBLES(var1,camo1_co.paa)), \
        "", \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = \
    { \
        "", \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}

#define BARC_HELMET_CUSTOM(var1) class CLASS(DOUBLES(Helmet_BARC,var1)): CLASS(Helmet_BARC_Base) \
{ \
    displayName = QUOTE([KC] SF BARC Helm ('##var1##')); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\barc\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    class XtdGearInfo \
    { \
        model = QCLASS(Helmets_BARC_Custom); \
        camo = QUOTE(var1); \
    }; \
}

#define BARC_HELMET_VISOR_CUSTOM(var1,var2) class CLASS(DOUBLES(Helmet_BARC,var1)): CLASS(Helmet_BARC_Base) \
{ \
    displayName = QUOTE([KC] SF BARC Helm ('##var1##')); \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\barc\DOUBLES(var1,camo1_co.paa)), \
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa" \
    }; \
    GVAR(isCustom) = TRUE; \
    EGVAR(armor,nvCanToggle) = TRUE; \
    EGVAR(armor,nvHelmetOff) = QCLASS(DOUBLES(Helmet_BARC,var1)); \
    EGVAR(armor,nvHelmetOn) = QCLASS(DOUBLES(Helmet_BARC,var1)##var2##); \
    class XtdGearInfo \
    { \
        model = QCLASS(Helmets_BARC_Custom); \
        camo = QUOTE(var1); \
    }; \
}; \
class CLASS(DOUBLES(Helmet_BARC,var1)##var2): CLASS(DOUBLES(Helmet_BARC,var1)) \
{ \
    SCOPE_HIDDEN; \
    hiddenSelectionsTextures[] = \
    { \
        QPATHTOF(data\helmets\barc\DOUBLES(var1,camo1_co.paa)), \
        QPATHTOF(data\visors\DOUBLES(var2,camo2_co.paa)) \
    }; \
    hiddenSelectionsMaterials[] = \
    { \
        "", \
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" \
    }; \
}