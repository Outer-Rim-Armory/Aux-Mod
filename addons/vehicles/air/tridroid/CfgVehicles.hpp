class CfgVehicles {
    class 3AS_Tri_Fighter_DynamicLoadout;
    class CLASS(Tri_Fighter_Base): 3AS_Tri_Fighter_DynamicLoadout {
        SCOPE_HIDDEN;
        displayName = "Tri Fighter (Base)";
        editorSubcategory = QEDSUBCAT(Planes);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);
    };
};
