class CfgVehicles {
    class Helicopter_Base_H;
    class 3AS_Nu_Base_F: Helicopter_Base_H {
        class UserActions {
            class RampOpen;
            class RampClose;
        };
    };
    class 3AS_Nu_REP_F: 3AS_Nu_Base_F {
        class ACE_SelfActions;
    };
    class CLASS(Nu): 3AS_Nu_REP_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\nu,Nu);

        displayName = "Nu-class Attack Shuttle";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        IMPULSE_SETTINGS;

        weapons[] = {
            "ParticleBeamCannon_Nu",
            "ls_weapon_CMFlareLauncher",
            "SmokeLauncher"
        };
        magazines[] = {
            "3AS_Nu_5000Rnd_HE",
            "3AS_Nu_5000Rnd_HE",
            "3AS_Nu_5000Rnd_HE",
            "ls_mag_300Rnd_CMFlareChaff_blue",
            "ls_mag_300Rnd_CMFlareChaff_blue",
            "ls_mag_300Rnd_CMFlareChaff_blue",
            "SmokeLauncherMag"
        };

        textureList[] = {
            "Standard", 1,
            "Imperial", 0/*,
            "KeeliCompany", 0*/
        };

        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_republic_heli\nu_class\data\hull_co.paa",
                    "\3AS\3AS_republic_heli\nu_class\data\hull_front_co.paa",
                    "\3AS\3AS_republic_heli\nu_class\data\wings_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\cockpit_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_optional_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3AS_republic_heli\nu_class\data\hull_Imp_co.paa",
                    "\3AS\3AS_republic_heli\nu_class\data\hull_front_imp_co.paa",
                    "\3AS\3AS_republic_heli\nu_class\data\wings_Imp_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\cockpit_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_optional_co.paa"
                };
            };
            // class KeeliCompany: Standard {
            //     author = AUTHOR;
            //     displayName = "Keeli Company";
            //     textures[] = {
            //         QPATHTOF(air\nu\data\textures\KeeliCompany\Hull_co.paa),
            //         QPATHTOF(air\nu\data\textures\KeeliCompany\Hull_front_co.paa),
            //         QPATHTOF(air\nu\data\textures\KeeliCompany\Wings_co.paa),
            //         "\3AS\3AS_republic_heli\rho_class\data\cockpit_co.paa",
            //         "\3AS\3AS_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
            //         "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa",
            //         "\3AS\3AS_republic_heli\rho_class\data\interior_optional_co.paa"
            //     };
            // };
        };

        class ACE_SelfActions: ACE_SelfActions {
            HUD_CHANGER;
        };

        class UserActions: UserActions {
            class ImpulseOn {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;
                priority = 9;

                onlyForPlayer = FALSE;
                hideOnUse = TRUE;
                showWindow = FALSE;

                condition = QUOTE(this call FUNC(canImpulse));
                statement = QUOTE(this call ls_vehicle_fnc_impulseJoystick;);
            };
            class ImpulseOff: ImpulseOn {
                displayName = "Repulse";
                statement = QUOTE(this call ls_vehicle_fnc_repulseJoystick;);
            };
            class RampOpen: RampOpen {
                condition = QUOTE(alive this and {this animationSourcePhase 'ramp' == 0});
            };
            class RampClose: RampClose {
                condition = QUOTE(alive this and {this animationSourcePhase 'ramp' == 1});
            };
        };

        INVENTORY_VEHICLE_BASE(3);
    };
};