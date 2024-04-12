class CfgVehicles {
    class Wheeled_APC_F;
    class APC_Wheeled_01_base_F: Wheeled_APC_F {
        class Turrets;
    };
    class OPTRE_M413_base: APC_Wheeled_01_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
        class AnimationSources;
    };
    class OPTRE_M412_IFV_UNSC: OPTRE_M413_base {
        class Turrets: Turrets {
            class MainTurret;
        };
        class AnimationSources: AnimationSources {
            class muzzle_hide;
            class muzzle_rot;
            class recoil_source;
        };
    };
    class CLASS(Conga_IFV_Base): OPTRE_M412_IFV_UNSC {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Conga_IFV_Tan);

        displayName = "Conga IFV";

        hiddenSelectionsTextures[] = {
            "\OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
        };

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources {
            class TechnoUnion {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {QFACTION(TU)};
                textures[] = {
                    "\OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
                };
            };
            class EPF: TechnoUnion {
                displayName = "El President Forces";
                factions[] = {QFACTION(EPF)};
                textures[] = {
                    "\OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
                };
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"OPTRE_M230", "OPTRE_M670_ATGM_Launcher"};
                magazines[] = {
                    "OPTRE_100Rnd_50mm_HE",
                    "OPTRE_100Rnd_50mm_APFSDS",
                    "OPTRE_100Rnd_50mm_HE",
                    "OPTRE_100Rnd_50mm_APFSDS",
                    "OPTRE_100Rnd_50mm_HE",
                    "OPTRE_100Rnd_50mm_APFSDS",
                    "OPTRE_2Rnd_GAT_missiles"
                };
            };
        };

        class AnimationSources: AnimationSources {
            class muzzle_hide: muzzle_hide {
                weapon = "OPTRE_M230";
            };
            class muzzle_rot: muzzle_rot {
                weapon = "OPTRE_M230";
            };
            class recoil_source: recoil_source {
                weapon = "OPTRE_M230";
            };
        };
    };

    class OPTRE_M413_MGS_UNSC: OPTRE_M413_base {
        class AnimationSources: AnimationSources {
            class muzzle_hide;
            class muzzle_rot;
            class recoil_source;
        };
    };
    class CLASS(Conga_MGS_Base): OPTRE_M413_MGS_UNSC {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Conga_MGS_Tan);

        displayName = "Conga MGS";

        hiddenSelectionsTextures[] = {
            "\OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
            "\OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
        };

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources {
            class TechnoUnion {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {QFACTION(TU)};
                textures[] = {
                    "\OPTRE_Vehicles\Bison\data\Bison_Body_tan_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Misc_tan_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
                };
            };
            class EPF: TechnoUnion {
                displayName = "El President Forces";
                factions[] = {QFACTION(EPF)};
                textures[] = {
                    "\OPTRE_Vehicles\Bison\data\Bison_Body_standard_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Misc_standard_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa",
                    "\OPTRE_Vehicles\Bison\data\Bison_90mm_CO.paa"
                };
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {"OPTRE_105mm_M556", "OPTRE_M670_ATGM_Launcher"};
                magazines[] = {
                    "OPTRE_60Rnd_105mm_APBC",
                    "OPTRE_60Rnd_105mm_SAPHE",
                    "OPTRE_60Rnd_105mm_HEAT",
                    "OPTRE_60Rnd_105mm_APBC",
                    "OPTRE_60Rnd_105mm_SAPHE",
                    "OPTRE_60Rnd_105mm_HEAT",
                    "OPTRE_60Rnd_105mm_APBC",
                    "OPTRE_60Rnd_105mm_SAPHE",
                    "OPTRE_60Rnd_105mm_HEAT",
                    "OPTRE_2Rnd_GAT_missiles"
                };
            };
        };

        class AnimationSources: AnimationSources {
            class muzzle_hide: muzzle_hide {
                weapon = "OPTRE_105mm_M556";
            };
            class muzzle_rot: muzzle_rot {
                weapon = "OPTRE_105mm_M556";
            };
            class recoil_source: recoil_source {
                weapon = "OPTRE_105mm_M556";
            };
        };
    };
};