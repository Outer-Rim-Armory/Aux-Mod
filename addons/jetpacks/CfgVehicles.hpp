class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class BNA_KC_Jetpack_ClearEffects
            {
                displayName = "Delete Effects";
                icon = "";

                condition = "!(_player getVariable ['BNA_KC_Jet_effectSources', []] isEqualTo []) and isTouchingGround _player";
                statement = "_player call BNAKC_Jetpacks_fnc_deleteEffects";
            };
        };
        class ACE_Actions
        {
            class ACE_MainActions
            {
                class BNA_KC_Jetpack_RefuelFromBody
                {
                    displayName = "Take fuel from %1";
                    icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";

                    distance = 1.75;
                    // exceptions[] = { "isNotInside", "isNotSitting", "isNotSwimming", "isNotDragging", "isNotCarrying" };

                    condition = "_this call BNAKC_Jetpacks_fnc_canRefuelFromBody";
                    statement = "_this call BNAKC_Jetpacks_fnc_refuelFromBody";
                    modifierFunction = "_this call BNAKC_Jetpacks_fnc_addJetpackNameIcon";
                };

                class BNA_KC_Jetpack_RefuelOtherPlayer
                {
                    displayName = "Refuel player's %1";
                    icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";

                    distance = 1.75;

                    condition = "_this call BNAKC_Jetpacks_fnc_canRefuelOtherPlayer";
                    statement = "_this call BNAKC_Jetpacks_fnc_refuelOtherPlayer";
                    modifierFunction = "_this call BNAKC_Jetpacks_fnc_addJetpackNameIcon";
                };
            };
        };
    };

    class BNA_KC_Backpack_Base;
    class BNA_KC_Jetpack_JT12: BNA_KC_Backpack_Base
    {
        JLTS_isJumppack = 0;

        BNA_KC_Jet_isJetpack = 1;
        BNA_KC_Jet_fuel = 100;
        BNA_KC_Jet_speed = 2;     // Jetpack speed, effects how fast you move in the air
        BNA_KC_Jet_strength = 15; // Jetpack strength, effects fast the player rises

        // Effects
        BNA_KC_Jet_effectPoints[] = {"effect_left", "effect_right"}; // Points to spawn effects, these come from the JLTS model
        BNA_KC_Jet_effects[] =
        {
            "BNA_KC_Effects_JetpackFire_Blue",
            "BNA_KC_Effects_JetpackSmoke"
        };
        BNA_KC_Jet_effectSound  = "\BNA_KC_Gear\Jetpacks\Data\Audio\Jetpack_Loop.wss";
        BNA_KC_Jet_lightColor[] = {0, 0.1, 0.9};

        BNA_KC_Jet_freefallHeight = 500;
    };

    class BNA_KC_Jetpack_CDV21: BNA_KC_Jetpack_JT12
    {
        BNA_KC_Jet_strength = 0;
    };

    class BNA_KC_Jetpack_CDV19: BNA_KC_Jetpack_JT12
    {
        // Jetpack properties
        BNA_KC_Jet_effectPoints[] = {"effect"};
    };

    class BNA_KC_Jetpack_Droid: BNA_KC_Jetpack_JT12
    {
        BNA_KC_Jet_freefallHeight = 100000;
    };

    class BNA_KC_Resupply_Base;
    class BNA_KC_Resupply_JetpackFuel: BNA_KC_Resupply_Base
    {
        displayName = "Jetpack Fuel Tank";

        ace_cargo_size = 2;
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;

        model = "\A3\Structures_F\Items\Vessels\WaterTank_F.p3d";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WaterTank_F.jpg";
        hiddenSelections[] = {};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {};
    };
};