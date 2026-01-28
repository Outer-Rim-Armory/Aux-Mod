class CfgVehicles {
    class 3AS_Static_FlakCannon;
    class CLASS(Flak_Cannon_Base): 3AS_Static_FlakCannon {
        SCOPE_HIDDEN;
        displayName = "Flak Cannon (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);
    };
};
