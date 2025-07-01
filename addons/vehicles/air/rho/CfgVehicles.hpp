class CfgVehicles {
    class Helicopter_Base_H;
    class 3AS_Rho_Base_F: Helicopter_Base_H {
        class UserActions {
            class RampOpen;
            class RampClose;
        };
    };
    class 3AS_Rho_REP_F: 3AS_Rho_Base_F {
        class ACE_SelfActions;
    };
    class CLASS(Rho): 3AS_Rho_REP_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\rho,Rho);

        displayName = "Rho-class Transport Shuttle";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        IMPULSE_SETTINGS;

        weapons[] = {
            "ParticleBeamCannon_Nu",
            "ls_weapon_CMFlareLauncher"
        };
        magazines[] = {
            "3AS_Nu_5000Rnd_HE",
            "3AS_Nu_5000Rnd_HE",
            "ls_mag_300Rnd_CMFlareChaff_blue",
            "ls_mag_300Rnd_CMFlareChaff_blue"
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
                    "\3AS\3AS_republic_heli\rho_class\data\hull_rho_co.paa",
                    "\3AS\3AS_republic_heli\nu_class\data\hull_front_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\wings_rho_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\cockpit_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_optional_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3AS_republic_heli\rho_class\data\hull_rho_Imp_co.paa",
                    "\3AS\3AS_republic_heli\nu_class\data\hull_front_imp_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\wings_rho_Imp_co.paa",
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
            // Impulse actions don't appear for some reason, I cannot figure out why
            // Keybind works fine
            class ImpulseOn {
                displayName = "Impulse";
                position = "pilotview";
                radius = 5;
                priority = 9;

                onlyForPlayer = FALSE;
                hideOnUse = TRUE;
                showWindow = FALSE;

                condition = QUOTE(this call FUNC(canImpulse));
                statement = QUOTE(this call ls_vehicle_fnc_impulseJoystick);
            };
            class ImpulseOff: ImpulseOn {
                displayName = "Repulse";
                statement = QUOTE(this call ls_vehicle_fnc_repulseJoystick);
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

    class CLASS(Rho_medical): CLASS(Rho) {
        displayName = "Rho-class Transport Shuttle (Medical)";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\rho,Rho_medical);
        attendant = TRUE;

        hiddenSelectionsTextures[] = {
            "\3AS\3AS_republic_heli\rho_class\data\hull_rho_Medical_co.paa",
            "\3AS\3AS_republic_heli\rho_class\data\hull_front_medical_co.paa",
            "\3AS\3AS_republic_heli\rho_class\data\wings_rho_Medical_co.paa",
            "\3AS\3AS_republic_heli\rho_class\data\cockpit_co.paa",
            "\3AS\3AS_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
            "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa",
            "\3AS\3AS_republic_heli\rho_class\data\interior_optional_co.paa"
        };

        textureList[] = {"Standard", 1};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_republic_heli\rho_class\data\hull_rho_Medical_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\hull_front_medical_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\wings_rho_Medical_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\cockpit_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_optional_co.paa"
                };
            };
        };
    };

    class 3AS_Rho_Crate_Base_F;
    class CLASS(Rho_crate_base): 3AS_Rho_Crate_Base_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Turrets);
        editorPreview = EEDITOR_PREVIEW(vehicles\air\rho,Rho_crate);

        crew = QCLASS(Unit_Phase2_CT);

        ace_cargo_space = 50;

        textureList[] = {"Republic", 1, "Imperial", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_republic_heli\rho_class\data\crate_ext_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\crate_int_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\variant_barracks_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\clone_bed_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa"
                };
            };
            class Imperial: Standard {
                displayName = "Imperial";
                textures[] = {
                    "\3AS\3AS_republic_heli\rho_class\data\crate_ext_Imp_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\crate_int_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\variant_barracks_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\clone_bed_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa"
                };
            };
        };
    };

    class CLASS(Rho_crateTransport): CLASS(Rho_crate_base) {
        SCOPE_PUBLIC;

        displayName = "Rho Crate (Transport)";
        animationList[] = {
            "HideBarracks", 1,
            "HideSeats", 0
        };
    };

    class CLASS(Rho_crateBarracks): CLASS(Rho_crate_base) {
        SCOPE_PUBLIC;

        displayName = "Rho Crate (Barracks)";
        animationList[] = {
            "HideBarracks", 0,
            "HideSeats", 1
        };
    };

    class CLASS(Rho_crateMedical): CLASS(Rho_crate_base) {
        SCOPE_PUBLIC;

        attendant = TRUE;

        displayName = "Rho Crate (Medical)";
        editorPreview = EEDITOR_PREVIEW(vehicles\air\rho,Rho_crateMedical);

        animationList[] = {
            "HideBarracks", 1,
            "HideSeats", 0
        };

        textureList[] = {"Standard", 1};
        class TextureSources: TextureSources {
            class Standard: Standard {
                textures[] = {
                    "\3AS\3AS_republic_heli\rho_class\data\crate_ext_Medical_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\crate_int_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\variant_barracks_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\clone_bed_co.paa",
                    "\3AS\3AS_republic_heli\rho_class\data\interior_co.paa"
                };
            };
        };

        class ACE_Cargo {
            class Cargo {
                CARGO_XX(CLASS(Resupply_platoonMedical),1);
            };
        };
    };
};
