class CfgVehicles {
    class O_Truck_03_transport_F;
    class CLASS(Gammoth_base): O_Truck_03_transport_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);

        displayName = "Gammoth (Base)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Gammoth)};

        terrainCoef = 2.5; // was 1.8
        maxSpeed = 120; // was 90

        hiddenSelectionsTextures[] = {};
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources {
            class CamoKC {
                author = AUTHOR;
                displayName = "Keeli Company Camo";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoKC_co.paa)
                };
            };
            class CamoBrown: CamoKC {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoBrown_co.paa)
                };
            };
            class CamoGrey: CamoKC {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoGrey_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_BASE(2);
    };

    class CLASS(Gammoth_Transport): CLASS(Gammoth_base) {
        SCOPE_PUBLIC;

        displayName = "Gammoth Transport";
        editorPreview = EEDITOR_PREVIEW(vehicles\land\gammoth,Gammoth_Transport);

        INVENTORY_VEHICLE_GAMTRANS(2);
        class EventHandlers
        {
            init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeploySquadShield"", false,true];";
        };
        class UserActions
        {
            class DeploySquadShield
            {
                displayName = "Deploy Squad Shield";
                displayNameDefault = "<img size='2' image='\a3\missions_f_beta\data\img\iconmptypedefense_ca.paa'/>";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 1;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeploySquadShield"" == false && fuel this != 0;";
                statement = "this setVariable [""BNA_KC_vehicles_DeploySquadShield"",true,true];this call BNA_KC_vehicles_fnc_deploySquadShield;";
            };
            class UnDeploySquadShield
            {
                displayName = "Undeploy Squad Shield";
                displayNameDefault = "";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeploySquadShield"" == true;";
                statement = "this setVariable [""BNA_KC_vehicles_DeploySquadShield"",false,true];";
            };
        };
    };

    class CLASS(Gammoth_Covered): CLASS(Gammoth_base) {
        SCOPE_PUBLIC;

        displayName = "Gammoth Transport (Covered)";
        editorPreview = EEDITOR_PREVIEW(vehicles\land\gammoth,Gammoth_Covered);

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_covered_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_covered_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Covered_CA.paa";

        class TextureSources: TextureSources {
            class CamoKC: CamoKC {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Covered\Covered_CamoKC_co.paa)
                };
            };
            class CamoBrown: CamoBrown {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Covered\Covered_CamoBrown_co.paa)
                };
            };
            class CamoGrey: CamoGrey {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Covered\Covered_CamoGrey_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_GAMTRANS(2);
        class EventHandlers
        {
            init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeploySquadShield"", false,true];";
        };
        class UserActions
        {
            class DeploySquadShield
            {
                displayName = "Deploy Squad Shield";
                displayNameDefault = "<img size='2' image='\a3\missions_f_beta\data\img\iconmptypedefense_ca.paa'/>";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 1;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeploySquadShield"" == false && fuel this != 0;";
                statement = "this setVariable [""BNA_KC_vehicles_DeploySquadShield"",true,true];this call BNA_KC_vehicles_fnc_deploySquadShield;";
            };
            class UnDeploySquadShield
            {
                displayName = "Undeploy Squad Shield";
                displayNameDefault = "";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeploySquadShield"" == true;";
                statement = "this setVariable [""BNA_KC_vehicles_DeploySquadShield"",false,true];";
            };
        };
    };

    class CLASS(Gammoth_Ammo): CLASS(Gammoth_base) {
        SCOPE_PUBLIC;

        displayName = "Gammoth Ammo Truck";
        editorPreview = EEDITOR_PREVIEW(vehicles\land\gammoth,Gammoth_Ammo);

        ace_cargo_space = 9;
        ace_rearm_defaultSupply = 1200;
        supplyRadius = 10;
        transportAmmo = 0;
        transportSoldier = 1;
        vehicleClass = "Support";

        explosionEffect = "FuelExplosion";
        fuelExplosionPower = 5;
        secondaryExplosion = 10000;

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_box_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_box_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_box_CA.paa";

        class TextureSources: TextureSources {
            class CamoKC: CamoKC {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoKC_co.paa),
                    "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
            class CamoBrown: CamoBrown {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoBrown_co.paa),
                   "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
            class CamoGrey: CamoGrey {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoGrey_co.paa),
                    "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_GAMAMMO(2);
    };

    class CLASS(Gammoth_Medical): CLASS(Gammoth_base) {
        SCOPE_PUBLIC;

        displayName = "Gammoth Medical Truck";
        editorPreview = EEDITOR_PREVIEW(vehicles\land\gammoth,Gammoth_Medical);

        ace_cargo_space = 8;
        supplyRadius = 10;
        transportSoldier = 12;
        vehicleClass = "Support";
        attendant = 1;
        threat[] = {0, 0, 0};
        class EventHandlers
        {
            init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeployModule"", false,true];";
        };
        class UserActions {
            class DeployCCP {
                displayName = "Deploy CCP";
                priority = 10;
                radius = 5;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 1;
                shortcut = "";
                condition = QUOTE([ARR_2(this,ace_player)] call FUNC(canDeployCCP));
                statement = QUOTE([ARR_2(this,ace_player)] call FUNC(deployCCP));
            };
            class UndeployCCP: DeployCCP {
                displayName = "Undeploy CCP";
                condition = QUOTE([ARR_2(this,ace_player)] call FUNC(canUndeployCCP));
                statement = QUOTE([ARR_2(this,ace_player)] call FUNC(undeployCCP));
            };
            class DeployModule
            {
                displayName = "Deploy Repair Module";
                displayNameDefault = "<img size='2' image='\a3\ui_f_oldman\data\igui\cfg\holdactions\repair_ca.paa'/>";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 1;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeployModule"" == false && fuel this != 0;";
                statement = "this setVariable [""BNA_KC_vehicles_DeployModule"",true,true];this call BNA_KC_vehicles_fnc_deployModuleRepair;";
            };
            class UnDeployModule
            {
                displayName = "Undeploy Repair Module";
                displayNameDefault = "";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeployModule"" == true;";
                statement = "this setVariable [""BNA_KC_vehicles_DeployModule"",false,true];";
            };
        };

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_medevac_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_medevac_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_medevac_CA.paa";

        class TextureSources: TextureSources {
            class CamoKC: CamoKC {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Covered\Covered_CamoKC_co.paa)
                };
            };
            class CamoBrown: CamoBrown {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Covered\Covered_CamoBrown_co.paa)
                };
            };
            class CamoGrey: CamoGrey {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Covered\Covered_CamoGrey_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_GAMMED(2);
    };

    class CLASS(Gammoth_Repair): CLASS(Gammoth_base) {
        SCOPE_PUBLIC;

        displayName = "Gammoth Repair Truck";
        editorPreview = EEDITOR_PREVIEW(vehicles\land\gammoth,Gammoth_Repair);

        ace_cargo_space = 12;
        ace_repair_canRepair = 1;
        supplyRadius = 10;
        transportSoldier = 1;
        transportRepair = 0;
        vehicleClass = "Support";

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_repair_F.p3d";
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_ammo_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_ammo_CA.paa";

        class TextureSources: TextureSources {
            class CamoKC: CamoKC {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Repair\Repair_CamoKC_co.paa)
                };
            };
            class CamoBrown: CamoBrown {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Repair\Repair_CamoBrown_co.paa)
                };
            };
            class CamoGrey: CamoGrey {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Repair\Repair_CamoGrey_co.paa)
                };
            };
        };
        class EventHandlers
        {
            init = "(_this # 0) setVariable [""BNA_KC_vehicles_DeployModule"", false,true];";
        };
        class UserActions
        {
            class DeployModule
            {
                displayName = "Deploy Repair Module";
                displayNameDefault = "<img size='2' image='\a3\ui_f_oldman\data\igui\cfg\holdactions\repair_ca.paa'/>";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 1;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeployModule"" == false && fuel this != 0;";
                statement = "this setVariable [""BNA_KC_vehicles_DeployModule"",true,true];this call BNA_KC_vehicles_fnc_deployModuleRepair;";
            };
            class UnDeployModule
            {
                displayName = "Undeploy Repair Module";
                displayNameDefault = "";
                priority = 10;
                radius = 10;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeployModule"" == true;";
                statement = "this setVariable [""BNA_KC_vehicles_DeployModule"",false,true];";
            };
        };
    };

    class CLASS(Gammoth_Refuel): CLASS(Gammoth_base) {
        SCOPE_PUBLIC;

        displayName = "Gammoth Refuel Truck";
        editorPreview = EEDITOR_PREVIEW(vehicles\land\gammoth,Gammoth_Refuel);

        ace_cargo_space = 4;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 2;
        ace_refuel_fuelCapacity = 600;
        ace_refuel_fuelCargo = 10000;
        ace_refuel_hooks[] = {{1.3, -1.59, -0.62}, {-1.16, -1.59, -0.62}};


        supplyRadius = 10;
        transportSoldier = 1;
        transportFuel = 0;
        vehicleClass = "Support";

        explosionEffect = "FuelExplosion";
        fuelExplosionPower = 5;
        secondaryExplosion = 10000;

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_fuel_F.p3d";
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_fuel_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Fuel_CA.paa";
        mapSize = 11.07;

        class TextureSources: TextureSources {
            class CamoKC: CamoKC {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Fuel\Fuel_CamoKC_co.paa)
                };
            };
            class CamoBrown: CamoBrown {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Fuel\Fuel_CamoBrown_co.paa)
                };
            };
            class CamoGrey: CamoGrey {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Fuel\Fuel_CamoGrey_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_GAMFUEL(2);
    };

    class CLASS(Gammoth_Device): CLASS(Gammoth_base) {
        SCOPE_PUBLIC;

        displayName = "Gammoth Device Truck";
        editorPreview = EEDITOR_PREVIEW(vehicles\land\gammoth,Gammoth_Device);

        ace_cargo_space = 4;
        aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2"}, {"Light_1"}};

        transportSoldier = 1;


        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_device_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5"};
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_device_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Device_CA.paa";

        class TextureSources: TextureSources {
            class CamoKC: CamoKC {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoKC_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoKC_co.paa),
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
                };
            };
            class CamoBrown: CamoBrown {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoBrown_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoBrown_co.paa),
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
                };
            };
            class CamoGrey: CamoGrey {
                textures[] = {
                    QPATHTOF(land\gammoth\data\textures\Body\Body_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Body\Body2_CamoGrey_co.paa),
                    QPATHTOF(land\gammoth\data\textures\Cargo\Cargo_CamoGrey_co.paa),
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
                };
            };
        };
    };
};