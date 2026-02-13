class CfgVehicles {
    class 3AS_Keeradak_Base_F;
    class 3AS_Keeradak_F: 3AS_Keeradak_Base_F {
    };
    class CLASS(Keeradak_Base): 3AS_Keeradak_F {
        SCOPE_HIDDEN;
        author = AUTHOR;

        displayName = "Keeradak (Base)";
        crew = QCLASS(Unit_Phase2_CT);
        side = BLUFOR;
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Turrets);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Keeradak_Base);
        hiddenSelectionsTextures[] = {
            "3as\3as_republic_static\keeradak\data\rep_aa_base_co.paa",
            "3as\3as_republic_static\keeradak\data\rep_aa_Gun_co.paa"
        };
        textureList[] = {
            "Standard", 0,
            "KC", 0,
            "Imperial", 0
        };
        class TextureSources {
            class Standard {
                displayName = "Standard";
                textures[] = {
                    "3as\3as_republic_static\keeradak\data\rep_aa_base_co.paa",
                    "3as\3as_republic_static\keeradak\data\rep_aa_Gun_co.paa"
                };
            };
            class KC: Standard {
                displayName = "KC";
                author = AUTHOR;
                textures[] = {
                    QPATHTOF(land\SUBCOMPONENT\data\textures\KC_AA_Base_co.paa),
                    QPATHTOF(land\SUBCOMPONENT\data\textures\KC_AA_Gun_co.paa)
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "3as\3as_republic_static\keeradak\data\Imp_aa_base_co.paa",
                    "3as\3as_republic_static\keeradak\data\Imp_aa_Gun_co.paa"
                };
            };
        };
    };

    class CLASS(Keeradak): CLASS(Keeradak_Base) {
        SCOPE_PUBLIC;
        displayName = "Keeradak";
    };

    class CLASS(Keeradak_AI): CLASS(Keeradak_Base) {
        SCOPE_PUBLIC;
        displayName = "Keeradak (AI)";
        crew = "B_UAV_AI";
    };
};
