class CfgVehicles {
    class 3AS_Rho_REP_F;
    class CLASS(Rho): 3AS_Rho_REP_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Helicopters);

        displayName = "Rho-class Transport Shuttle";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        tas_can_impulse = FALSE;
        ls_impulsor_soundOn = QCLASS(Sound_ImpulseOn);
        ls_impulsor_soundOff = QCLASS(Sound_ImpulseOff);
        ls_impulsor_fuelDrain_1 = 0;
        ls_impulsor_fuelDrain_2 = 0;

        weapons[] = {
            "ParticleBeamCannon_Nu",
            "ls_weapon_CMFlareLauncher"
        };
        magazines[] = {
            "3AS_Nu_5000Rnd_HE",
            "3AS_Nu_5000Rnd_HE",
            "3AS_Nu_5000Rnd_HE",
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

        INVENTORY_VEHICLE_BASE(3);
    };

    class CLASS(Rho_medical): CLASS(Rho) {
        displayName = "Rho-class Transport Shuttle (Medical)";
        attendant = 1;

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
};