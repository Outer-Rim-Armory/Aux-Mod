class CfgVehicles {
    class Car;
    class Car_F: Car {
        class HitPoints {
            class HitBody;
        };
    };
    class UGV_01_base_F: Car_F {
        class Turrets;

        class HitPoints: HitPoints {
            class HitHull;
            class HitEngine;
            class HitFuel;

            class HitLFWheel;
        };
    };
    class B_UGV_01_F: UGV_01_base_F {};
    class CLASS(Khezu_Unarmed): B_UGV_01_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Drones);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Khezu_Unarmed);

        displayName = "Khezu (Unarmed)";

        armor = 200;
        fuelCapacity = 82.5;
        fuelConsumptionRate = 0.01;

        maxSpeed = 135;
        enginePower = 276;
        engineMOI = 1.0;
        maxOmega = 471;
        idleRpm = 1000;
        redRpm = 4000;
        peakTorque = 1546;
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

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\khezu\data\textures\KeeliCompanyWhite\Body_co.paa),
            QPATHTOF(land\khezu\data\textures\KeeliCompanyWhite\Body2_co.paa)
        };
        textureList[] = {
            "KeeliCompanyWhite", 1,
            "CamoKC", 0,
            "CamoBrown", 0,
            "CamoGrey", 0
        };
        class TextureSources {
            class KeeliCompanyWhite {
                author = AUTHOR;
                displayName = "Keeli Company (White)";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\khezu\data\textures\KeeliCompanyWhite\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\KeeliCompanyWhite\Body2_co.paa)
                };
            };
            class CamoKC: KeeliCompanyWhite {
                displayName = "Keeli Company Camo";
                textures[] = {
                    QPATHTOF(land\khezu\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoKC\Body2_co.paa)
                };
            };
            class CamoBrown: KeeliCompanyWhite {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\khezu\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoBrown\Body2_co.paa)
                };
            };
            class CamoGrey: KeeliCompanyWhite {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\khezu\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoGrey\Body2_co.paa)
                };
            };
        };

        class HitPoints: HitPoints {
            class HitBody: HitBody {
                armor = 4;
                explosionShielding = 1;
                passThrough = 1;
                minimalHit = 0.01;
            };
            class HitHull: HitHull {
                armor = 1;
                explosionShielding = 0.2;
                minimalHit = 0.2;
                passThrough = 0.2;
            };
            class HitEngine: HitEngine {
                armor = 0.5;
                explosionShielding = 0.4;
                minimalHit = 0.2;
                passThrough = 0.4;
            };
            class HitFuel: HitFuel {
                armor = 0.5;
                explosionShielding = 0.1;
                minimalHit = 0.2;
                passThrough = 0.2;
            };

            class HitLFWheel: HitLFWheel {
                name = "wheel_1_1";
                armor = 0.5;
                explosionShielding = 4;
                passThrough = 0.3;
            };
            class HitLF2Wheel: HitLFWheel {
                name = "wheel_1_2";
            };
            class HitLMWheel: HitLFWheel {
                name = "wheel_1_3";
            };

            class HitRFWheel: HitLFWheel {
                name = "wheel_2_1";
            };
            class HitRF2Wheel: HitLFWheel {
                name = "wheel_2_2";
            };
            class HitRMWheel: HitLFWheel {
                name = "wheel_2_3";
            };
        };
        class EventHandlers
        {
            init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeployVehShield"", false,true];";
        };
        class UserActions
        {
            class DeployVehShield
            {
                displayName = "Deploy Assault Shield";
                displayNameDefault = "<img size='2' image='a3\missions_f_beta\data\img\portraitmptypedefense_ca.paa'/>";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 1;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeployVehShield"" == false && fuel this != 0;";
                statement = "this setVariable [""BNA_KC_vehicles_DeployVehShield"",true,true];this call BNA_KC_vehicles_fnc_deployVehShield;";
            };
            class UnDeployVehShield
            {
                displayName = "Undeploy Assault Shield";
                displayNameDefault = "";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeployVehShield"" == true;";
                statement = "this setVariable [""BNA_KC_vehicles_DeployVehShield"",false,true];";
            };
        };
    };

    class UGV_01_rcws_base_F: UGV_01_base_F {
        class Turrets: Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
        class AnimationSources;
    };
    class B_UGV_01_rcws_F: UGV_01_rcws_base_F {};
    class CLASS(Khezu_Armed): B_UGV_01_rcws_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Drones);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Khezu_Armed);

        displayName = "Khezu (HMG/GMG)";

        armor = 200;
        fuelCapacity = 82.5;
        fuelConsumptionRate = 0.01;

        maxSpeed = 135;
        enginePower = 276;
        engineMOI = 1.0;
        maxOmega = 471;
        idleRpm = 1000;
        redRpm = 4000;
        peakTorque = 1546;
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

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\khezu\data\textures\KeeliCompanyWhite\Body_co.paa),
            QPATHTOF(land\khezu\data\textures\KeeliCompanyWhite\Body2_co.paa),
            QPATHTOF(data\csatTurret\KeeliCompanyWhite_Turret_co.paa)
        };
        textureList[] = {
            "KeeliCompanyWhite", 1,
            "CamoKC", 0,
            "CamoBrown", 0,
            "CamoGrey", 0
        };
        class TextureSources {
            class KeeliCompanyWhite {
                author = AUTHOR;
                displayName = "Keeli Company (White)";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\khezu\data\textures\KeeliCompanyWhite\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\KeeliCompanyWhite\Body2_co.paa),
                    QPATHTOF(data\csatTurret\KeeliCompanyWhite_Turret_co.paa)
                };
            };
            class CamoKC: KeeliCompanyWhite {
                displayName = "Keeli Company Camo";
                textures[] = {
                    QPATHTOF(land\khezu\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoKC\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoKC_Turret_co.paa)
                };
            };
            class CamoBrown: KeeliCompanyWhite {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\khezu\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoBrown\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoBrown_Turret_co.paa)
                };
            };
            class CamoGrey: KeeliCompanyWhite {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\khezu\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\khezu\data\textures\CamoGrey\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoGrey_Turret_co.paa)
                };
            };
        };

        class HitPoints: HitPoints {
            class HitBody: HitBody {
                armor = 4;
                explosionShielding = 1;
                passThrough = 1;
                minimalHit = 0.01;
            };
            class HitHull: HitHull {
                armor = 1;
                explosionShielding = 0.2;
                minimalHit = 0.2;
                passThrough = 0.2;
            };
            class HitEngine: HitEngine {
                armor = 0.5;
                explosionShielding = 0.4;
                minimalHit = 0.2;
                passThrough = 0.4;
            };
            class HitFuel: HitFuel {
                armor = 0.5;
                explosionShielding = 0.1;
                minimalHit = 0.2;
                passThrough = 0.2;
            };

            class HitLFWheel: HitLFWheel {
                name = "wheel_1_1";
                armor = 0.5;
                explosionShielding = 4;
                passThrough = 0.3;
            };
            class HitLF2Wheel: HitLFWheel {
                name = "wheel_1_2";
            };
            class HitLMWheel: HitLFWheel {
                name = "wheel_1_3";
            };

            class HitRFWheel: HitLFWheel {
                name = "wheel_2_1";
            };
            class HitRF2Wheel: HitLFWheel {
                name = "wheel_2_2";
            };
            class HitRMWheel: HitLFWheel {
                name = "wheel_2_3";
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Coax_Reek), "GMG_40mm"};
                magazines[] = {
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    "200Rnd_40mm_G_belt"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
        };

        class AnimationSources: AnimationSources {
            class muzzle_rot_MG {
                source = "ammorandom";
                weapon = QCLASS(Coax_Reek);
            };
            class muzzle_hide_MG {
                source = "reload";
                weapon = QCLASS(Coax_Reek);
            };
        };
    };
};
