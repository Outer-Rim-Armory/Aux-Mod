class CfgVehicles {
    class 3AS_MTT;
    class CLASS(MTT_Base): 3AS_MTT {
        SCOPE_HIDDEN;
        displayName = "MTT (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Crew);

        hiddenSelectionsTextures[] = {
            "3as\3AS_MTT\data\MTT_Main_Blue_CO.paa",
            "3as\3AS_MTT\data\MTT_Rack_CO.paa"
        };

        textureList[] = {
            "CIS", 1,
            "TradeFederation", 0
        };
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                textures[] = {
                    "3as\3AS_MTT\data\MTT_Main_Blue_CO.paa",
                    "3as\3AS_MTT\data\MTT_Rack_CO.paa"
                };
            };
            class TradeFederation: CIS {
                author = AUTHOR;
                displayName = "Trade Federation";
                textures[] = {
                    "3as\3AS_MTT\data\MTT_Main_CO.paa",
                    "3as\3AS_MTT\data\MTT_Rack_CO.paa"
                };
            };
        };
    };
};
