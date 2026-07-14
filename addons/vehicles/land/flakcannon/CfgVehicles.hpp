class CfgVehicles {
    class 3as_FlakCannon;
    class CLASS(Flak_Cannon_Base): 3as_FlakCannon {
        SCOPE_HIDDEN;
        displayName = "Flak Cannon";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);
    };
};
