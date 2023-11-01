#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Car_F;
    class Wheeled_Apc_F: Car_F
    {
        class HitPoints;
    };
    class 3AS_Jug_base_F: Wheeled_Apc_F
    {
        // class HitPoints: HitPoints
        // {
        //     class HitBody;
        //     class HitHull;
        // };
        class UserActions
        {
            class Crow_Nest_Up;
            class Crow_Nest_Down;
            class Open_Rockets;
            class Close_Rockets;
        };
    };
    class 3AS_B_Jug_01_base_F: 3AS_Jug_base_F {};
    class 3as_Jug: 3AS_B_Jug_01_base_F {};
    class BNA_KC_Juggernaut: 3as_Jug
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_APCs";
        editorPreview = "\BNA_KC_Vehicles\Armored\Juggernaut\Data\Previews\Juggernaut.jpg";

        displayName = "HAVw A6 Juggernaut";
        crew = "BNA_KC_Unit_Phase2_Tanker";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Tanker"};

        ace_cargo_space = 20;

        weapons[] =
        {
            "BNA_KC_Juggernaut_Horn",
            "BNA_KC_Juggernaut_Alarm"
        };

        // Look at https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection for info on what each value does
        // class HitPoints: HitPoints
        // {
        //     class HitBody: HitBody
        //     {
        //         armor = 2;
        //         explosionShielding = 0.15;
        //     };
        //     class HitHull: HitHull
        //     {
        //         armor = 2;
        //         explosionShielding = 0.85;
        //     };
        // };

        class UserActions: UserActions
        {
            class Crow_Nest_Up: Crow_Nest_Up
            {
                condition = "this animationSourcePhase 'crownest' == 0 and alive this and ace_player == this turretUnit [4]";
            };
            class Crow_Nest_Down: Crow_Nest_Down
            {
                condition = "this animationSourcePhase 'crownest' == 5 and alive this and ace_player == this turretUnit [4]";
            };
            class Open_Rockets: Open_Rockets
            {
                condition = "this animationSourcePhase 'rocket_move' == 1  and alive this and ace_player == this turretUnit [3]";
            };
            class Close_Rockets: Close_Rockets
            {
                condition = "this animationSourcePhase 'rocket_move' == 0 and alive this and ace_player == this turretUnit [3]";
            };
        };

        INVENTORY_VEHICLE_BASE(5)
    };
};