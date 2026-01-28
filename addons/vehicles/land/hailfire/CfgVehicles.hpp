class CfgVehicles {
    class 3AS_Hailfire_AT;
    class CLASS(Hailfire_AT_Base): 3AS_Hailfire_AT {
        SCOPE_HIDDEN;
        displayName = "Hailfire (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);

        hiddenSelectionsTextures[] = {
            "3AS\3AS_hailfire\data\headblue_co.paa",
            "3AS\3AS_hailfire\data\wheelsblue_co.paa"
        };
    };

    class 3AS_Hailfire_SAM;
    class CLASS(Hailfire_SAM_Base): 3AS_Hailfire_SAM {
        SCOPE_HIDDEN;
        displayName = "Hailfire SAM (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);

        hiddenSelectionsTextures[] = {
            "3AS\3AS_hailfire\data\headgrey_co.paa",
            "3AS\3AS_hailfire\data\wheelsgrey_co.paa"
        };
    };

    class 3AS_Hailfire_Rocket;
    class CLASS(Hailfire_Rocket_Base): 3AS_Hailfire_Rocket {
        SCOPE_HIDDEN;
        displayName = "Hailfire Rocket (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);

        hiddenSelectionsTextures[] = {
            "3AS\3AS_hailfire\data\headred_co.paa",
            "3AS\3AS_hailfire\data\wheelsred_co.paa"
        };
    };
};
