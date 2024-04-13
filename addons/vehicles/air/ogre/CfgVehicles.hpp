class CfgVehicles {
    class All;
    class AllVehicles: All {
        class CargoTurret;
    };
    class Air: AllVehicles {};
    class Helicopter: Air {};
    class Helicopter_Base_F: Helicopter {};
    class Helicopter_Base_H: Helicopter_Base_F {
        class Turrets;
    };
    class OPTRE_Pelican_F: Helicopter_Base_H {
        class ACE_SelfActions;
        class Turrets: Turrets {
            class CopilotTurret;
        };
    };
    class CLASS(Ogre_Base): OPTRE_Pelican_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,Ogre_Tan);

        displayName = "Ogre";

        weapons[] = {"CMFlareLauncher"};
        magazines[] = {
            "168Rnd_CMFlare_Chaff_Magazine"
        };

        tf_hasLRradio = TRUE;
        tf_range = 25000;
        tf_isolatedAmount = 0.4;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";

        hiddenSelections[] = {"camo1", "camo3", "clan", "clan_text", "insignia", "attach_gun"};
        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"};

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources {
            class TechnoUnion {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {QFACTION(TU)};
                textures[] = {"\OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"};
            };
            class EPF: TechnoUnion {
                displayName = "El President Forces";
                factions[] = {QFACTION(EPF)};
                textures[] = {"\OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa"};
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };
    };

    class CLASS(Ogre_Armed_Base): CLASS(Ogre_Base) {
        displayName = "Ogre (Armed)";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,Ogre_Armed_Tan);
        hiddenSelections[] = {"camo1", "camo3", "clan", "clan_text", "insignia"};

        class Turrets: Turrets {
            class CopilotTurret: CopilotTurret {
                animationSourceBody = "mainTurret";
                animationSourceGun = "mainGun";
                body = "mainTurret";
                canEject = 1;
                castGunnerShadow = 0;
                commanding = -1;
                discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100};
                discreteDistanceInitIndex = 5;
                gun = "mainGun";
                gunAxis = "Osa Hlavne";
                gunBeg = "Usti hlavne";
                gunEnd = "konec hlavne";
                gunnerAction = "pilot_Heli_Light_02";
                gunnerForceOptics = 0;
                gunnerGetInAction = "pilot_Heli_Light_02_Enter";
                gunnerGetOutAction = "pilot_Heli_Light_02_Exit";
                gunnerInAction = "pilot_Heli_Light_02";
                gunnerLeftHandAnimName = "";
                gunnerName = "Gunner";
                gunnerOpticsEffect[] = {"TankCommanderOptics1", "BWTV"};
                gunnerOpticsModel = "";
                gunnerRightHandAnimName = "";
                initElev = 0;
                initTurn = 0;
                isCopilot = 1;
                maxHorizontalRotSpeed = 5;
                maxElev = 30;
                maxTurn = 180;
                minElev = -90;
                minTurn = -180;
                maxVerticalRotSpeed = 5;
                memoryPointGunnerOptics = "gunner1";
                memoryPointsGetInGunner = "Pos_Gunner";
                memoryPointsGetInGunnerDir = "Pos_Gunner_dir";
                outGunnerMayFire = 1;
                precisegetinout = 1;
                primaryGunner = 1;
                proxyindex = 1;
                selectionFireAnim = "";
                showAllTargets = 4;
                stabilizedInAxes = "StabilizedInAxesBoth";
                startEngine = 0;
                turretAxis = "axisturret1";
                turretInfoType = "RscOptics_Heli_Attack_01_gunner";
                viewGunnerShadow = 0;
                visionMode[] = {"Normal", "NVG", "Ti"};
                thermalMode[] = {0};
                weapons[] = {"OPTRE_CHAINGUN40", "CMFlareLauncher", "Laserdesignator_mounted"};
                magazines[] = {
                    "OPTRE_1200Rnd_40mm_HE",
                    "OPTRE_1200Rnd_40mm_HE",
                    "OPTRE_1200Rnd_40mm_HE",
                    "OPTRE_1200Rnd_40mm_HE",
                    "OPTRE_1200Rnd_40mm_HE",
                    "168Rnd_CMFlare_Chaff_Magazine",
                    "Laserbatteries"
                };
            };
            class CargoTurret_01: CargoTurret {
                ejectDeadGunner = 0;
                enabledByAnimationSource = "cargoDoors";
                gunnerAction = "passenger_inside_2";
                gunnerCompartments = "Compartment2";
                gunnerName = "Passenger (Left door)";
                isPersonTurret = 1;
                maxElev = 15;
                maxTurn = 10;
                minElev = -25;
                minTurn = -50;
                memoryPointGunnerOptics = "";
                memoryPointsGetInGunner = "pos_cargo_l";
                memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
                proxyIndex = 1;
            };
            class CargoTurret_02: CargoTurret_01 {
                gunnerName = "Passenger (Right door)";
                maxTurn = 50;
                minTurn = -10;
                memoryPointsGetInGunner = "pos_cargo_r";
                memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
                proxyIndex = 2;
            };
        };
    };
};