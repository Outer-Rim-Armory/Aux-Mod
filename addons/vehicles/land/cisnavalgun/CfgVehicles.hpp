class CfgVehicles {
    class 3AS_CIS_Naval_Gun;
    class CLASS(CIS_Naval_Gun_Base): 3AS_CIS_Naval_Gun {
        SCOPE_HIDDEN;
        displayName = "CIS Naval Gun (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = "O_UAV_AI";
    };

    class 3AS_CIS_Naval_Gun_180;
    class CLASS(CIS_Naval_Gun_180_Base): 3AS_CIS_Naval_Gun_180 {
        SCOPE_HIDDEN;
        displayName = "CIS Naval Gun 180 (Base)";
        editorSubcategory = QEDSUBCAT(Turrets);
        faction = QFACTION(CIS);
        crew = "O_UAV_AI";
    };
};
