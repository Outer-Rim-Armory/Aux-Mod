#define P1_HELMET_UNIT(var1) class CLASS(DOUBLES(Helmet_Phase1,var1)): CLASS(Helmet_Phase1_Base) { \
    displayName = QUOTE([##var1##] INF P1 Helm); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(SUBCOMPONENT\data\helmets\phase1\DOUBLES(var1,camo1_co.paa)), \
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa", \
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa" \
    }; \
    EGVAR(custom_armor,isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase1_Units); \
        camo = QUOTE(DOUBLES(KC,var1)); \
    }; \
}

#define P1_HELMET_UNIT_NAME(var1,var2) class CLASS(TRIPLES(Helmet_Phase1,var1,var2)): CLASS(Helmet_Phase1_Base) { \
    displayName = QUOTE([##var1##] INF P1 Helm ('##var2##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(SUBCOMPONENT\data\helmets\phase1\TRIPLES(var1,var2,camo1_co.paa)), \
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa", \
        "\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa" \
    }; \
    EGVAR(custom_armor,isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase1_Units); \
        camo = QUOTE(TRIPLES(KC,var1,var2)); \
    }; \
}

#define P2_HELMET_UNIT(var1) class CLASS(DOUBLES(Helmet_Phase2,var1)): CLASS(Helmet_Phase2_Base) { \
    displayName = QUOTE([##var1##] INF P2 Helm); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(SUBCOMPONENT\data\helmets\phase2\DOUBLES(var1,camo1_co.paa)), \
        "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa" \
    }; \
    EGVAR(custom_armor,isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase2_Units); \
        camo = QUOTE(DOUBLES(KC,var1)); \
    }; \
}

#define P2_HELMET_UNIT_NAME(var1,var2) class CLASS(TRIPLES(Helmet_Phase2,var1,var2)): CLASS(Helmet_Phase2_Base) { \
    displayName = QUOTE([##var1##] INF P2 Helm ('##var2##')); \
    hiddenSelectionsTextures[] = { \
        QPATHTOF(SUBCOMPONENT\data\helmets\phase2\TRIPLES(var1,var2,camo1_co.paa)), \
        "\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa" \
    }; \
    EGVAR(custom_armor,isCustom) = TRUE; \
    class XtdGearInfo { \
        model = QCLASS(Helmets_Phase2_Units); \
        camo = QUOTE(TRIPLES(KC,var1,var2)); \
    }; \
}
