class CfgVehicles {
    class 3AS_Fliknot_F;
    class CLASS(Fliknot_Base): 3AS_Fliknot_F {
        SCOPE_HIDDEN;
        displayName = "Fliknot (Base)";
        editorSubcategory = QEDSUBCAT(Cars);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1);

        hiddenSelectionsTextures[] = {
            "3as\3AS_CIS_Wheeled\Fliknot\data\Fliknot_Speeder_CIS_CO.paa"
        };

        textureList[] = {"CIS", 1, "Tan", 0};
        class TextureSources {
            class CIS {
                author = "3rd Army Studios";
                displayName = "CIS";
                textures[] = {
                    "3as\3AS_CIS_Wheeled\Fliknot\data\Fliknot_Speeder_CIS_CO.paa"
                };
            };
            class Tan: CIS {
                author = AUTHOR;
                displayName = "Tan";
                textures[] = {
                    "3as\3AS_CIS_Wheeled\Fliknot\data\Fliknot_Speeder_CO.paa"
                };
            };
        };
    };
};
