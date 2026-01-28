class CfgVehicles {
    class 3AS_PAC_F;
    class CLASS(PAC_Base): 3AS_PAC_F {
        SCOPE_HIDDEN;
        displayName = "Platoon Assault Craft (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);

        hiddenSelectionsTextures[] = {
            "3as\3AS_CIS_Wheeled\PAC\data\pac_CO.paa"
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
                    "3as\3AS_CIS_Wheeled\PAC\data\pac_CO.paa"
                };
            };
            class TradeFederation: CIS {
                author = AUTHOR;
                displayName = "Trade Federation";
                textures[] = {
                    "3as\3AS_CIS_Wheeled\PAC\data\pac_tradefederation_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                textures[] = {
                    "3as\3AS_CIS_Wheeled\PAC\data\pac_tradefederation_brown_CO.paa"
                };
            };
        };
    };

    class 3AS_SAC_F;
    class CLASS(SAC_Base): 3AS_SAC_F {
        SCOPE_HIDDEN;
        displayName = "Squad Assault Craft (Base)";
        editorSubcategory = QEDSUBCAT(Tanks);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_Droid_B1_Crew);

        hiddenSelectionsTextures[] = {
            "3as\3AS_CIS_Wheeled\PAC\data\Sac_CO.paa"
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
                    "3as\3AS_CIS_Wheeled\PAC\data\Sac_CO.paa"
                };
            };
            class TradeFederation: CIS {
                author = AUTHOR;
                displayName = "Trade Federation";
                textures[] = {
                    "3as\3AS_CIS_Wheeled\SAC\data\Sac_tradefederation_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                textures[] = {
                    "3as\3AS_CIS_Wheeled\SAC\data\Sac_tradefederation_brown_CO.paa"
                };
            };
        };
    };
};
