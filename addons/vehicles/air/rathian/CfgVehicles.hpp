class CfgVehicles {
    class Helicopter_Base_H;
    class OPTRE_Hornet_base: Helicopter_Base_H {
        class ACE_SelfActions;
    };
    class CLASS(Rathian_Base): OPTRE_Hornet_base {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,Rathian_Tan);

        displayName = "Rathian";

        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Air\hornet\data\hornet_hull_desert_co.paa"};

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources {
            class TechnoUnion {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {QFACTION(TU)};
                textures[] = {"\OPTRE_Vehicles_Air\hornet\data\hornet_hull_desert_co.paa"};
            };
            class EPF: TechnoUnion {
                displayName = "El President Forces";
                factions[] = {QFACTION(EPF)};
                textures[] = {"\OPTRE_Vehicles_Air\hornet\data\hornet_hull_standard_co.paa"};
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;

            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class CLASS(Rathian_CAP_Base): CLASS(Rathian_Base) {
        displayName = "Rathian (CAP)";
        weapons[] = {"OPTRE_GUA23A", "OPTRE_missiles_C2GMLS", "CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] = {
            "OPTRE_2000Rnd_20mm_HEIAP",
            "OPTRE_8Rnd_C2GMLS_missiles",
            "OPTRE_8Rnd_C2GMLS_missiles",
            "168Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries"
        };
    };

    class CLASS(Rathian_CAS_Base): CLASS(Rathian_Base) {
        displayName = "Rathian (CAS)";
        weapons[] = {"OPTRE_GUA23A", "OPTRE_missiles_C2GMLS", "CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] = {
            "OPTRE_2000Rnd_20mm_HEIAP",
            "OPTRE_8Rnd_C2GMLS_missiles",
            "OPTRE_8Rnd_C2GMLS_missiles",
            "168Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries"
        };
    };
};