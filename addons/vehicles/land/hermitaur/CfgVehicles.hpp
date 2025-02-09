class CfgVehicles {
    class Tank;
    class Tank_F: Tank {
        class Turrets;
    };
    class 3AS_PX10_Base_F: Tank_F {
        class Turrets: Turrets {
        class MainTurret;
        class CargoTurret_01;
        class CargoTurret_02;
        class CargoTurret_03;
        class CargoTurret_04;
        };
    };
    class 3AS_PX10_F: 3AS_PX10_Base_F {
        class ACE_SelfActions;
    };

    class CLASS(Hermitaur_Class_I): 3AS_PX10_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        side = BLUFOR;
        editorSubcategory = QEDSUBCAT(APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hermitaur_Class_I);

        displayName = "Hermitaur (Infantry)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        animationList[] = {
            // These values are actually inverted, they should be "hide"
            "HideAttachmentDozer", TRUE,
            "HideAttachmentFuel", TRUE,
            "HideAttachmentPlate", TRUE,
            "HideAttachmentRepair", TRUE
        };

        ace_cargo_space = 15;

        hiddenSelections[] = {"Camo","camo2","camo3"};
        hiddenSelectionsTextures[] = {
            "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
        };
        model = "3as\3AS_Rebel_Armor\PX10_Cav\model\3AS_PX10.p3d";
        picture = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_side_ca.paa";
        icon = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_top_ca.paa";

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Hermitaur_Medium_Cannon),QCLASS(Coax_Reek),"SmokeLauncher"};
                magazines[] = {
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    "SmokeLauncherMag"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
        };
    };

    class CLASS(Hermitaur_Class_E): CLASS(Hermitaur_Class_I) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        side = BLUFOR;
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hermitaur_Class_E);

        displayName = "Hermitaur (Engineer)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        animationList[] = {
            // These values are actually inverted, they should be "hide"
            "HideAttachmentDozer", FALSE,
            "HideAttachmentFuel", FALSE,
            "HideAttachmentPlate", TRUE,
            "HideAttachmentRepair", FALSE
        };

        ace_cargo_space = 15;
        supplyRadius = 10;
        vehicleClass = "Support";
        attendant = 1;
        threat[] = {0, 0, 0};
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 2;
        ace_refuel_fuelCapacity = 1200;
        ace_refuel_fuelCargo = 10000;
        ace_refuel_hooks[] = {{0.5,-3,-0.5}, {-0.4,-3,-0.75}};
        ace_rearm_defaultSupply = 1200;
        transportAmmo = 0;

        hiddenSelections[] = {"Camo","camo2","camo3","camo_Fuel","camo_repair"};
        hiddenSelectionsTextures[] = {
            "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
        };
        model = "3as\3AS_Rebel_Armor\PX10_Cav\model\3AS_PX10.p3d";
        picture = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_side_ca.paa";
        icon = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_top_ca.paa";
    };

    class CLASS(Hermitaur_Class_M): CLASS(Hermitaur_Class_I) {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        side = BLUFOR;
        editorSubcategory = QEDSUBCAT(APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hermitaur_Class_M);

        displayName = "Hermitaur (Medic)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        animationList[] = {
            // These values are actually inverted, they should be "hide"
            "HideAttachmentDozer", TRUE,
            "HideAttachmentFuel", TRUE,
            "HideAttachmentPlate", FALSE,
            "HideAttachmentRepair", TRUE
        };


        hiddenSelections[] = {"Camo","camo2","camo3"};
        hiddenSelectionsTextures[] = {
            "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
        };
        model = "3as\3AS_Rebel_Armor\PX10_Cav\model\3AS_PX10.p3d";
        picture = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_side_ca.paa";
        icon = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_top_ca.paa";
    };
};
