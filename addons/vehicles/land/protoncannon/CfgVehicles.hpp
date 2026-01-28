class CfgVehicles {
    class 3AS_FieldCannon;
    class CLASS(ProtonCannon_Base): 3AS_FieldCannon {
        SCOPE_HIDDEN;
        displayName = "Proton Cannon (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);
    };
};
