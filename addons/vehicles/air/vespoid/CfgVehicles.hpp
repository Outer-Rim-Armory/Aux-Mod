class CfgVehicles {
    class OPTRE_falcon_base;
    class OPTRE_falcon_base_unarmed: OPTRE_falcon_base {
        class ACE_SelfActions;
        class Components;
    };
    class CLASS(Vespoid_Base): OPTRE_falcon_base_unarmed {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,Vespoid_Tan);

        displayName = "Vespoid";

        weapons[] = {"CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] = {"168Rnd_CMFlare_Chaff_Magazine", "Laserbatteries"};

        visionMode[] = {"Normal", "NVG", "Ti"};
        thermalMode[] = {0};

        hiddenSelections[] = {"camo1", "camo2", "camo3", "attach_gun", "attach_sideguns"};
        hiddenSelectionsTextures[] = {
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Main_co.paa",
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Attachments_co.paa",
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Interior_co.paa"
        };

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources {
            class TechnoUnion {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {QFACTION(TU)};
                textures[] = {
                    "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Main_co.paa",
                    "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Attachments_co.paa",
                    "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Interior_co.paa"
                };
            };
            class EPF: TechnoUnion {
                displayName = "El President Forces";
                factions[] = {QFACTION(EPF)};
                textures[] = {
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };
    };

    class CLASS(Vespoid_Armed_Base): CLASS(Vespoid_Base) {
        displayName = "Vespoid (Armed)";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,Vespoid_Armed_Tan);

        weapons[] = {"OPTRE_M638", "CMFlareLauncher","Laserdesignator_pilotCamera"};
        magazines[] = {
            "OPTRE_2000Rnd_20mm_HE",
            "OPTRE_2000Rnd_20mm_HE",
            "168Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries"
        };

        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] = {
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Main_co.paa",
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Attachments_co.paa",
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Interior_co.paa"
        };

        class Components: Components {
            class TransportPylonsComponent {
                UIPicture = "\optre_vehicles_air\falcon\FalconPylonPic.paa";
                class Pylons {
                    class WingPylonRight1 {
                        attachment = "OPTRE_16Rnd_Anvil1_missiles";
                        bay = -1;
                        hardpoints[] = {"OPAEX_Hardpoint_UH144"};
                        maxweight = 560;
                        priority = 3;
                        turret[] = {};
                        UIposition[] = {0.35, 0.1};
                    };
                    class WingPylonLeft1: WingPylonRight1 {
                        mirroredMissilePos = 1;
                        UIposition[] = {0.35, 0.467};
                    };
                };

                class Presets {
                    class Default {
                        displayName = "Empty";
                        attachment[] = {};
                    };
                    class CAS_Rockets {
                        displayName = "CAS: ANVIL I";
                        attachment[] = {
                            "OPTRE_16Rnd_Anvil1_missiles",
                            "OPTRE_16Rnd_Anvil1_missiles"
                        };
                    };
                    class CAS_Rockets_Guided {
                        displayName = "CAS: ANVIL II & III";
                        attachment[] = {
                            "OPTRE_16Rnd_Anvil2_missiles",
                            "OPTRE_16Rnd_Anvil3_missiles"
                        };
                    };
                    class CAS_AT {
                        displayName = "AT";
                        attachment[] = {
                            "OPTRE_1Rnd_Jackknife_missile",
                            "OPTRE_1Rnd_Jackknife_missile"
                        };
                    };
                };
            };
        };
    };
};