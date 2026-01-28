class CfgVehicles {
    class 3AS_MAF_Gunship_F;
    class CLASS(MAF_Gunship_Base): 3AS_MAF_Gunship_F {
        SCOPE_HIDDEN;
        displayName = "MAF Gunship (Base)";
        editorSubcategory = QEDSUBCAT(Helicopters);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);
        hiddenSelectionsTextures[] = {
            "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Front_CIS_co.paa",
            "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Back_CIS_co.paa"
        };

        textureList[] = {
            "Base", 1,
            "CIS", 0,
            "True", 0,
        };
        class TextureSources {
            class Base {
                author = "3rd Army Studios";
                displayName = "Base";
                textures[] = {
                    "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Front_co.paa",
                    "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Back_co.paa"
                };
            };
            class CIS: Base {
                author = AUTHOR;
                displayName = "CIS";
                textures[] = {
                    "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Front_CIS_co.paa",
                    "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Back_CIS_co.paa"
                };
            };
            class True: Base {
                author = AUTHOR;
                displayName = "The One True Texture";
                textures[] = {
                    "#(argb,8,8,3)color(1,0.501961,1,1.0,co)",
                    "#(argb,8,8,3)color(1,0.501961,1,1.0,co)",
                    "#(argb,8,8,3)color(1,0.501961,1,1.0,co)"
                };
            };
        };
    };

    class 3AS_MAF_Transport_F;
    class CLASS(MAF_Transport_Base): 3AS_MAF_Transport_F {
        SCOPE_HIDDEN;
        displayName = "MAF Transport (Base)";
        editorSubcategory = QEDSUBCAT(Helicopters);
        faction = QFACTION(CIS);
        crew = QCLASS(CIS_Unit_B1_Pilot);
    };
    hiddenSelectionsTextures[] = {
            "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Front_CIS_co.paa",
            "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Back_CIS_co.paa"
        };

        textureList[] = {
            "Base", 1,
            "CIS", 0,
            "True", 0,
        };
        class TextureSources {
            class Base {
                author = "3rd Army Studios";
                displayName = "Base";
                textures[] = {
                    "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Front_co.paa",
                    "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Back_co.paa"
                };
            };
            class CIS: Base {
                author = AUTHOR;
                displayName = "CIS";
                textures[] = {
                    "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Front_CIS_co.paa",
                    "3as\3AS_CIS_Heli\MAF\data\MAF_Body_Back_CIS_co.paa"
                };
            };
            class True: Base {
                author = AUTHOR;
                displayName = "The One True Texture";
                textures[] = {
                    "#(argb,8,8,3)color(1,0.501961,1,1.0,co)",
                    "#(argb,8,8,3)color(1,0.501961,1,1.0,co)",
                    "#(argb,8,8,3)color(1,0.501961,1,1.0,co)"
                };
            };
        };
};
