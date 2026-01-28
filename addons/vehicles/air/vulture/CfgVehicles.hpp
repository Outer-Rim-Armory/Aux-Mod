class CfgVehicles {
    class 3AS_CIS_Vulture_F;
    class CLASS(Vulture_Base): 3AS_CIS_Vulture_F {
        SCOPE_HIDDEN;
        displayName = "Vulture Droid (Base)";
        editorSubcategory = QEDSUBCAT(Planes);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);

        hiddenSelectionsTextures[] = {
            "3as\3as_vulture\data\VultureDroid_CO.paa"
        };

        textureList[] = {"CIS", 1, "Tan", 0, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
        };
    };

    class 3AS_CIS_Vulture_AA_F;
    class CLASS(Vulture_AA_Base): 3AS_CIS_Vulture_AA_F {
        SCOPE_HIDDEN;
        displayName = "Vulture Droid (AA Base)";
        editorSubcategory = QEDSUBCAT(Planes);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);

        hiddenSelectionsTextures[] = {
            "3as\3as_vulture\data\VultureDroid_CO.paa"
        };

        textureList[] = {"CIS", 1, "Tan", 0, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
        };
    };

    class 3AS_CIS_Vulture_CAS_F;
    class CLASS(Vulture_CAS_Base): 3AS_CIS_Vulture_CAS_F {
        SCOPE_HIDDEN;
        displayName = "Vulture Droid (CAS Base)";
        editorSubcategory = QEDSUBCAT(Planes);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);

        hiddenSelectionsTextures[] = {
            "3as\3as_vulture\data\VultureDroid_CO.paa"
        };

        textureList[] = {"CIS", 1, "Tan", 0, "Brown", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_CO.paa"

                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
            class Brown: CIS {
                author = AUTHOR;
                displayName = "Brown";
                factions[] = {};
                textures[] = {
                    "3as\3as_vulture\data\VultureDroid_TradeFederation_Brown_CO.paa"
                };
            };
        };
    };
};
