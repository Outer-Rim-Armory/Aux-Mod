class CfgVehicles {
    class 3AS_UTAT_01_Base;
    class 3AS_UTAT: 3AS_UTAT_01_Base {
        class ACE_SelfActions;
        class UserActions;
    };
    class CLASS(UTAT): 3AS_UTAT {
        SCOPE_PUBLIC;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\utat,UTAT);

        displayName = "UT-AT";
        crew = QCLASS(Unit_Phase2_ARMR_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_ARMR_CT)};

        weapons[] = {"SmokeLauncher"};
                magazines[] = {
                    "SmokeLauncherMag",
                    "SmokeLauncherMag",
                    "SmokeLauncherMag",
                    "SmokeLauncherMag",
                    "SmokeLauncherMag"
                };

        hiddenSelections[] = {"camo", "camo1"}; // 3AS bug, missing comma in original config
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\utat\data\textures\KeeliCompany\Primary_co.paa),
            QPATHTOF(land\utat\data\textures\KeeliCompany\Secondary_co.paa)
        };

        textureList[] = {
            "Standard", 0,
            "KeeliCompany", 1,
            "KeeliCompanyWhite", 0,
            "CamoBrown", 0,
            "CamoGrey", 0,
            "Imperial", 0
        };
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_UTAT\data\utat_primary_co.paa",
                    "\3AS\3AS_UTAT\data\utat_primary_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\KeeliCompany\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\KeeliCompany\Secondary_co.paa)
                };
            };
            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\KeeliCompanyWhite\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\KeeliCompanyWhite\Secondary_co.paa)
                };
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\CamoBrown\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\CamoBrown\Secondary_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\utat\data\textures\CamoGrey\Primary_co.paa),
                    QPATHTOF(land\utat\data\textures\CamoGrey\Secondary_co.paa)
                };
            };
            class Imperial: KeeliCompany {
                displayName = "Empire";
                textures[] = {
                    "3AS\3AS_UTAT\data\UTAT_Primary_Imp_CO.paa",
                    "3AS\3AS_UTAT\data\UTAT_Secondary_Imp_CO.paa"
                };
            };
        };

        maxSpeed = 160.934;
        enginePower = 15000;
        engineMOI = 1.0;
        maxOmega = 6000;
        idleRpm = 1000;
        redRpm = 9000;
        peakTorque = 15000;
        torqueCurve[] = {
            {0, 0.3},
            {0.178, 0.5},
            {0.25, 0.85},
            {0.4, 0.95},
            {0.5, 1},
            {0.625, 0.95},
            {0.75, 0.7},
            {1, 0.5}
        };
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        dampingRateZeroThrottleClutchEngaged = 2;

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };

        class UserActions: UserActions {
            VS_CITADELSHIELD
        };

        INVENTORY_VEHICLE_BASE(9);

        class VehicleTransport {
            class Cargo {
                canBeTransported = TRUE;
                dimensions[] = {
                    {-3.61739,  5.24512, 1.25418},
                    { 1.94353, -9.91646, 12.53851}
                };
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
            };
        };
    };
};
