class ls_impulsor_base;

class CfgVehicles {
    class Plane_Fighter_03_base_F;
    class 3AS_Gozanti_Base_F: Plane_Fighter_03_base_F {
        class ACE_SelfActions;
        class Turrets;
        class pilotCamera;
    };
    class CLASS(Gozanti_Base): 3AS_Gozanti_Base_F {
        class LS_Impulsor: ls_impulsor_base{
            enabled = 1; // 0-Disabled, 1-Enabled
            speed = 400; // Speed in km/h
            fuelDrain = 0; // Percent of fuel used every 1/2 seconds
            overchargeSpeed = 800; // Same but for overcharge
            overchargeFuelDrain = 0; // Same but for overcharge
            // Time in seconds before overcharge can be used after turning it off
            overchargeCooldown = 05;
        };
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);
        side = BLUFOR;

        displayName = "Gozanti (Base)";
        crew = QCLASS(Unit_Phase2_CXA);

        armor = 200;
        fuelCapacity = 3000;
        fuelConsumptionRate = 0.12;

        vehicleClass = "Air";

        weapons[] = {
            "CMFlareLauncher"
        };
        magazines[] = {
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine"
        };

        hiddenSelectionsTextures[] = {
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo_Republic_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo2_Republic_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"
        };

        textureList[] = {
            "Standard", 1,
            "Imperial", 0,
        };

        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo_Republic_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo2_Republic_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo2_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };

        class Turrets: Turrets {
            class MainTurret;
            class MainTurretRear;
            class MainTurretUnder;
        };

        class pilotCamera: pilotCamera {
            initTurn = 0;
            initElev = -10;
            maxTurn = 180;
            minTurn = -180;
            maxElev = 90;
            minElev = -10;

            maxXRotSpeed = 0.3;
            maxYRotSpeed = 0.3;

            ace_missileguidance_usePilotCameraForTargeting = TRUE;
        };
    };

    class CLASS(Gozanti): CLASS(Gozanti_Base) {
        SCOPE_PUBLIC;
        displayName = "Gozanti";

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {
                    QCLASS(Cannon_Gozanti_MassDriver)
                };
                magazines[] = {
                    QCLASS(Mag_100Rnd_Gozanti),
                    QCLASS(Mag_100Rnd_Gozanti),
                    QCLASS(Mag_100Rnd_Gozanti),
                };
            };
            class MainTurretRear: MainTurretRear {
                weapons[] = {
                    "3AS_RX_ParticleBeamCannon"
                };
                magazines[] = {
                    "3AS_Laser_Battery_RX_F",
                    "3AS_Laser_Battery_RX_F",
                    "3AS_Laser_Battery_RX_F",
                    "3AS_Laser_Battery_RX_F"
                };
            };
            class MainTurretUnder: MainTurretUnder {
                weapons[] = {
                    "3AS_Gozanti_Cannon",
                    "SmokeLauncher"
                    };
				magazines[] = {
                    "3AS_500Rnd_Gozanti_Shells",
                    "3AS_500Rnd_Gozanti_Shells",
                    "3AS_500Rnd_Gozanti_Shells",
                    "SmokeLauncherMag"
                };
            };
        };
    };
};
