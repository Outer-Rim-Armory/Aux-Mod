class CfgVehicles {
    class lsd_laatc_base;
    class lsd_heli_laatc: lsd_laatc_base {
        class ACE_SelfActions;
        class UserActions;
    };
    class CLASS(LAATc): lsd_heli_laatc {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\SUBCOMPONENT,LAATc);

        displayName = "LAAT/c";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        ls_impulsor_soundOn = QCLASS(Sound_ImpulseOn);
        ls_impulsor_soundOff = QCLASS(Sound_ImpulseOff);
        ls_impulsor_fuelDrain_1 = 0;
        ls_impulsor_fuelDrain_2 = 0;
        // ls_impulsor_boostSpeed_1 = 400; // Impulse speeds, default values listed
        // ls_impulsor_boostSpeed_2 = 600;

        backRotorForceCoef = 1.8;
        backRotorSpeed = 1;
        bodyFrictionCoef = 1.9845;
        brakeDistance = 400;

        cyclicAsideForceCoef = 2.8;
        cyclicForwardForceCoef = 2;

        liftForceCoef = 3;

        maxMainRotorDive = 7;
        maxSpeed = 600;
        startDuration = 4.5;

        weapons[] = {"ls_laat_gun", "ls_weapon_CMFlareLauncher"};
        magazines[] = {"200Rnd_laat_he_mag", "200Rnd_laat_he_mag", "ls_mag_240Rnd_CMFlareChaff_blue", "ls_mag_240Rnd_CMFlareChaff_blue"};

        hiddenSelectionsTextures[] = {
            QPATHTOF(air\laatc\data\textures\Auxiliary_co.paa),
            QPATHTOF(air\laatc\data\textures\Cockpit_co.paa),
            "\lsd_vehicles_heli\laatc\data\glass_ca.paa",
            QPATHTOF(air\laatc\data\textures\Hull_co.paa),
            QPATHTOF(air\laatc\data\textures\Wings_co.paa)
        };
        textureList[] = {"Standard", 0, "KeeliCompany", 1};
        class TextureSources {
            class Standard {
                author = "Legion Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\lsd_vehicles_heli\laatc\data\auxiliary_co.paa",
                    "\lsd_vehicles_heli\laatc\data\standard\cockpit_co.paa",
                    "\lsd_vehicles_heli\laatc\data\glass_ca.paa",
                    "\lsd_vehicles_heli\laatc\data\standard\hull_co.paa",
                    "\lsd_vehicles_heli\laatc\data\standard\wings_co.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(air\laatc\data\textures\Auxiliary_co.paa),
                    QPATHTOF(air\laatc\data\textures\Cockpit_co.paa),
                    "\lsd_vehicles_heli\laatc\data\glass_ca.paa",
                    QPATHTOF(air\laatc\data\textures\Hull_co.paa),
                    QPATHTOF(air\laatc\data\textures\Wings_co.paa)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };

        class UserActions: UserActions {
            class Impulse {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;

                shortcut = "User19";
                onlyforplayer = 0;
                hideOnUse = 1;

                condition = QUOTE(isEngineOn this and ace_player == currentPilot this and !isTouchingGround this);
                statement = QUOTE(this call ls_vehicle_fnc_ImpulseJoystick);
            };
            class Repulse: Impulse {
                displayName = "Repulse";
                shortcut = "User20";
                statement = QUOTE(this call ls_vehicle_fnc_RepulseJoystick);
            };

            class LoadVehicle: Impulse {
                displayName = "Load Vehicle";
                condition = QUOTE(ace_player isEqualTo currentPilot this and {this call FUNC(vivCanLoad)});
                statement = QUOTE(this call FUNC(vivLoad));
            };
        };

        INVENTORY_VEHICLE_BASE(1);
    };
};