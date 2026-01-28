class CfgVehicles {
    class 3AS_HMP_Gunship;
    class CLASS(HMP_Base): 3AS_HMP_Gunship {
        SCOPE_HIDDEN;
        displayName = "HMP Gunship (Base)";
        editorSubcategory = QEDSUBCAT(Helicopters);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);
    };

    class 3AS_HMP_Transport;
    class CLASS(HMP_Transport_Base): 3AS_HMP_Transport {
        SCOPE_HIDDEN;
        displayName = "HMP Transport (Base)";
        editorSubcategory = QEDSUBCAT(Helicopters);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);
    };
};
