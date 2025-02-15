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
            QPATHTOF(land\hermitaur\data\textures\KeeliCompany\PX10CAV_KC_co.paa),
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
            "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
        };

        textureList[] = {"Standard", 0, "KeeliCompany", 1, "BrownCamo", 0, "GreyCamo", 0, "Medic", 0, "Imperial", 0};
        class TextureSources {
            class Standard {
                author = AUTHOR;
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class KeeliCompany: Standard {
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\KeeliCompany\PX10CAV_KC_co.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class BrownCamo: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\BrownCamo\PX10CAV_KCBROWNCAMO_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class GreyCamo: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\GreyCamo\PX10CAV_KCGREYCAMO_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class Medic: KeeliCompany {
                displayName = "Medic";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\Medic\PX10CAV_KCMEDIC_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class Imperial: KeeliCompany {
                displayName = "Imperial";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\Imperial\PX10CAV_KCImp_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
        };

        model = "3as\3AS_Rebel_Armor\PX10_Cav\model\3AS_PX10.p3d";
        picture = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_side_ca.paa";
        icon = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_top_ca.paa";

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Hermitaur_Medium_Cannon),"SmokeLauncher"};
                magazines[] = {
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
                    QCLASS(Mag_250Rnd_Hermitaur),
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
        textureList[] = {"Standard", 0, "KeeliCompany", 0, "BrownCamo", 0, "GreyCamo", 1, "Medic", 0, "Imperial", 0};
        class TextureSources {
            class Standard {
                author = AUTHOR;
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class KeeliCompany: Standard {
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\KeeliCompany\PX10CAV_KC_co.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class BrownCamo: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\BrownCamo\PX10CAV_KCBROWNCAMO_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class GreyCamo: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\GreyCamo\PX10CAV_KCGREYCAMO_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class Medic: KeeliCompany {
                displayName = "Medic";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\Medic\PX10CAV_KCMEDIC_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class Imperial: KeeliCompany {
                displayName = "Imperial";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\Imperial\PX10CAV_KCImp_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
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

        class EventHandlers{
            init = "(_this #0) setVariable [""BNA_KC_vehicles_DeployCCP"", false,true]";
        };

        class UserActions {
            class DeployCCP {
                displayName = "Deploy CCP";
                priority = 10;
                radius = 5;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeployCCP"" == false && fuel this != 0;";
                statement = "this setVariable [""BNA_KC_vehicles_DeployCCP"",true,true]; this call BNA_KC_vehicles_fnc_deployCCP;";
            };
            class UnDeployCCP {
                displayName = "Undeploy CCP";
                priority = 10;
                radius = 5;
                position = "camera";
                showWindow = 0;
                hideOnUse = 1;
                onlyForPlayer = 0;
                shortcut = "";
                condition = "this getVariable ""BNA_KC_vehicles_DeployCCP"" == true;";
                statement = "this setVariable [""BNA_KC_vehicles_DeployCCP"",false,true];";
            };
        };

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
        textureList[] = {"Standard", 0, "KeeliCompany", 0, "BrownCamo", 0, "GreyCamo", 0, "Medic", 1, "Imperial", 0};
        class TextureSources {
            class Standard {
                author = AUTHOR;
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class KeeliCompany: Standard {
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\KeeliCompany\PX10CAV_KC_co.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class BrownCamo: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\BrownCamo\PX10CAV_KCBROWNCAMO_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class GreyCamo: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\GreyCamo\PX10CAV_KCGREYCAMO_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class Medic: KeeliCompany {
                displayName = "Medic";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\Medic\PX10CAV_KCMEDIC_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
            class Imperial: KeeliCompany {
                displayName = "Imperial";
                textures[] = {
                    QPATHTOF(land\hermitaur\data\textures\Imperial\PX10CAV_KCImp_CO.paa),
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
                    "3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa"
                };
            };
        };
        model = "3as\3AS_Rebel_Armor\PX10_Cav\model\3AS_PX10.p3d";
        picture = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_side_ca.paa";
        icon = "3as\3AS_Rebel_Armor\PX10_Cav\data\ui\px10cav_top_ca.paa";
    };
};
