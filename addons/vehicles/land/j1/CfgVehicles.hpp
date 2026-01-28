class CfgVehicles {
    class 3AS_J1_Proton_Cannon;
    class CLASS(J1_Static_Base): 3AS_J1_Proton_Cannon {
        SCOPE_HIDDEN;
        displayName = "J-1 Proton Cannon (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);
    };

    class 3AS_J1_Proton_Legged;
    class CLASS(J1_Legged_Static_Base): 3AS_J1_Proton_Legged {
        SCOPE_HIDDEN;
        displayName = "J-1 Proton Cannon Legged (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);
    };
};
