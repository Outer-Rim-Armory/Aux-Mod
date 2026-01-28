class CfgVehicles {
    class 3AS_GAT;
    class CLASS(GAT_Heavy_Base): 3AS_GAT {
        SCOPE_HIDDEN;
        displayName = "GAT Heavy (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = "O_UAV_AI";

        hiddenSelectionsTextures[] = {
            "3AS\3AS_GAT\data\hull_CO.paa",
            "3AS\3AS_GAT\data\weapons_CO.paa"
        };
    };
    class 3AS_GAT_Light;
    class CLASS(GAT_Light_Base): 3AS_GAT_Light {
        SCOPE_HIDDEN;
        displayName = "GAT Light (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = "O_UAV_AI";

        hiddenSelectionsTextures[] = {
            "3AS\3AS_GAT\data\hull_CO.paa",
            "3AS\3AS_GAT\data\Light_Tank\CIS\weapons_CO.paa"
        };
    };
};
