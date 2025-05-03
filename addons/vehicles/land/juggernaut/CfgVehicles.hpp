class CfgVehicles {
    class Car_F;
    class Wheeled_Apc_F: Car_F {
        class HitPoints;
    };
    class 3AS_Jug_base_F: Wheeled_Apc_F {
        // class HitPoints: HitPoints {
        //     class HitBody;
        //     class HitHull;
        // };
        class UserActions {
            class Crow_Nest_Up;
            class Crow_Nest_Down;
            class Open_Rockets;
            class Close_Rockets;
        };
    };
    class 3AS_B_Jug_01_base_F: 3AS_Jug_base_F {
        class ACE_SelfActions;
    };
    class 3AS_Jug: 3AS_B_Jug_01_base_F {};
    class CLASS(Juggernaut): 3AS_Jug {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Juggernaut);

        displayName = "HAVw A6 Juggernaut";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        ace_cargo_space = 20;

        weapons[] = {
            QCLASS(Horn_Juggernaut),
            QCLASS(Alarm_Juggernaut)
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\SUBCOMPONENT\data\textures\KeeliCompany\Body_co.paa),
            QPATHTOF(land\SUBCOMPONENT\data\textures\KeeliCompany\Guns_co.paa),
            "\3AS\3AS_Jug\data\juggernaut_props_co.paa",
            "\3AS\3AS_Jug\data\juggernaut_wheels_co.paa"
        };

        textureList[] = {
            "Standard", 0,
            "KeeliCompany", 1,
            "KeeliCompanyWhite", 0,
            "CamoBrown", 0,
            "CamoGrey", 0
        };
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3AS\3AS_Jug\data\juggernaut_base_co.paa",
                    "\3AS\3AS_Jug\data\juggernaut_guns_co.paa",
                    "\3AS\3AS_Jug\data\juggernaut_props_co.paa",
                    "\3AS\3AS_Jug\data\juggernaut_wheels_co.paa"
                };
            };

            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                textures[] = {
                    QPATHTOF(land\juggernaut\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\KeeliCompany\Guns_co.paa),
                    "\3AS\3AS_Jug\data\juggernaut_props_co.paa",
                    "\3AS\3AS_Jug\data\juggernaut_wheels_co.paa"
                };
            };

            class KeeliCompanyWhite: KeeliCompany {
                displayName = "Keeli Company (White)";
                textures[] = {
                    QPATHTOF(land\juggernaut\data\textures\KeeliCompanyWhite\Body_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\KeeliCompanyWhite\Guns_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\KeeliCompanyWhite\Props_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\KeeliCompanyWhite\Wheels_co.paa)
                };
            };

            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\juggernaut\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\CamoBrown\Guns_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\CamoBrown\Props_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\CamoBrown\Wheels_co.paa)
                };
            };

            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\juggernaut\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\CamoGrey\Guns_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\CamoGrey\Props_co.paa),
                    QPATHTOF(land\juggernaut\data\textures\CamoGrey\Wheels_co.paa)
                };
            };
        };

        // Look at https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection for info on what each value does
        // class HitPoints: HitPoints {
        //     class HitBody: HitBody {
        //         armor = 2;
        //         explosionShielding = 0.15;
        //     };
        //     class HitHull: HitHull {
        //         armor = 2;
        //         explosionShielding = 0.85;
        //     };
        // };

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };
        class UserActions: UserActions {
            class Crow_Nest_Up: Crow_Nest_Up {
                condition = QUOTE(this animationSourcePhase 'crownest' == 0 and alive this and ace_player == this turretUnit [4]);
            };
            class Crow_Nest_Down: Crow_Nest_Down {
                condition = QUOTE(this animationSourcePhase 'crownest' == 5 and alive this and ace_player == this turretUnit [4]);
            };
            class Open_Rockets: Open_Rockets {
                condition = QUOTE(this animationSourcePhase 'rocket_move' == 1  and alive this and ace_player == this turretUnit [3]);
            };
            class Close_Rockets: Close_Rockets {
                condition = QUOTE(this animationSourcePhase 'rocket_move' == 0 and alive this and ace_player == this turretUnit [3]);
            };
        };

        INVENTORY_VEHICLE_BASE(5);
    };
};