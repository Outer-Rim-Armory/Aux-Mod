class CfgVehicles {
    class 3AS_Deka_Static;
    class CLASS(Droideka_Base): 3AS_Deka_Static {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "Droideka (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = "O_UAV_AI";
    };

    class 3AS_Deka_Static_Sniper;
    class CLASS(Droideka_Sniper_Base): 3AS_Deka_Static_Sniper {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "Droideka Sniper (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = "O_UAV_AI";
    };
};
