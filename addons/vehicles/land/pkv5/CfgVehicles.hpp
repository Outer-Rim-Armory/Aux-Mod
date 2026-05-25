class CfgVehicles {
    class Tank;
    class Tank_F: Tank{
        class Turrets;
    };
    class ls_vehicle_pkv5_base: Tank_F{
        class ACE_SelfActions;
        class UserActions;
        class Turrets:Turrets {
            class CommanderOptics;
            class MainTurret;
        };
    };
    class ls_vehicle_pkv5: ls_vehicle_pkv5_base {
        class ACE_SelfActions;
    };
    class CLASS(PKV5_Base): ls_vehicle_pkv5 {
        SCOPE_PRIVATE;
        displayName = "PK-V5 Medium Fighter Tank";
        faction = QFACTION(KC);
        crew = QCLASS(Unit_Phase2_ARMR_CT);
        editorSubcategory = QEDSUBCAT(Tanks);
        armor = 1500;
        waterSpeedFactor = 10;
        waterLeakiness = 0.0001;

        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {
            "\ls\core\addons\vehicles_pkv5\data\republic\camo1_co.paa",
            "\ls\core\addons\vehicles_pkv5\data\republic\camo2_cannon_co.paa"
        };

        maxSpeed = 150;
        enginePower = 2000;
        engineMOI = 1.0;
        maxOmega = 3000;
        idleRpm = 600;
        redRpm = 6900;
        peakTorque = 3000;
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

        textureList[] = {"Standard", 1, "Imperial", 0, "Logo", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\ls\core\addons\vehicles_pkv5\data\republic\camo1_co.paa",
                    "\ls\core\addons\vehicles_pkv5\data\republic\camo2_cannon_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\ls\core\addons\vehicles_pkv5\data\imperial\camo1_co.paa",
                    "\ls\core\addons\vehicles_pkv5\data\imperial\camo2_cannon_co.paa"
                };
            };
            class Logo: Standard {
                author = AUTHOR;
                displayName = "Logo";
                textures[] = {
                    "\ls\core\addons\vehicles_pkv5\data\republic\logo\camo1_co.paa",
                    "\ls\core\addons\vehicles_pkv5\data\republic\logo\camo2_cannon_co.paa"
                };
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(PKV5_Cannon)};
                magazines[] = {
                    QCLASS(Mag_400Rnd_PKV5_Blue),
                    QCLASS(Mag_400Rnd_PKV5_Blue),
                    QCLASS(Mag_400Rnd_PKV5_Blue),
                    QCLASS(Mag_400Rnd_PKV5_Blue),
                    QCLASS(Mag_400Rnd_PKV5_AT_Blue),
                    QCLASS(Mag_400Rnd_PKV5_AT_Blue),
                    QCLASS(Mag_400Rnd_PKV5_AT_Blue),
                    QCLASS(Mag_400Rnd_PKV5_AT_Blue)
                };
            };
        };
        class UserActions: UserActions {
            VS_ASSAULTSHIELD
        };
        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };
    };
    class CLASS(PKV5): CLASS(PKV5_Base) {
        SCOPE_PUBLIC;
    };
};
