class CfgVehicles {
    class 3AS_OG9Turret;
    class CLASS(OG9_Static_Base): 3AS_OG9Turret {
        SCOPE_HIDDEN;
        displayName = "OG-9 (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    };
};
