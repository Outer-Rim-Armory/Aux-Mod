class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class GVAR(clearEffects)
            {
                displayName = "Clear Effects";
                icon = "";

                condition = QUOTE(isTouchingGround _player and {(_player getVariable [ARR_2(QQGVAR(effectSources),[])] isNotEqualTo [])});
                statement = QUOTE(_player call FUNC(clearEffects));
            };
        };
        class ACE_Actions
        {
            class ACE_MainActions
            {
                class GVAR(refuelFromBody)
                {
                    displayName = "Take fuel from %1";
                    icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";

                    distance = 1.75;
                    // exceptions[] = { "isNotInside", "isNotSitting", "isNotSwimming", "isNotDragging", "isNotCarrying" };

                    condition = "_this call BNA_KC_Jetpacks_fnc_canRefuelFromBody";
                    statement = "_this call BNA_KC_Jetpacks_fnc_refuelFromBody";
                    modifierFunction = QUOTE(_this call FUNC(modifyInteraction));
                };

                class GVAR(refuelPlayer)
                {
                    displayName = "Refuel player's %1";
                    icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";

                    distance = 1.75;

                    condition = "_this call BNA_KC_Jetpacks_fnc_canRefuelOtherPlayer";
                    statement = "_this call BNA_KC_Jetpacks_fnc_refuelOtherPlayer";
                    modifierFunction = QUOTE(_this call FUNC(modifyInteraction));
                };
            };
        };
    };

    class CLASS(Backpack_Base);
    class CLASS(Jetpack_JT12): CLASS(Backpack_Base)
    {
        JLTS_isJumppack = FALSE;

        GVAR(isJetpack) = TRUE;
        GVAR(fuel) = 100;
        BNA_KC_Jet_speed = 2;     // Jetpack speed, effects how fast you move in the air
        BNA_KC_Jet_strength = 15; // Jetpack strength, effects fast the player rises

        // Effects
        BNA_KC_Jet_effectPoints[] = {"effect_left", "effect_right"}; // Points to spawn effects, these come from the JLTS model
        BNA_KC_Jet_effects[] =
        {
            QCLASS(Effects_JetpackFire_Blue),
            QCLASS(Effects_JetpackSmoke)
        };
        BNA_KC_Jet_effectSound  = QPATHTOF(data\audio\Jetpack_Loop.wss);
        BNA_KC_Jet_lightColor[] = {0, 0.1, 0.9};

        BNA_KC_Jet_freefallHeight = 500;
    };

    class CLASS(Jetpack_CDV21): CLASS(Jetpack_JT12)
    {
        BNA_KC_Jet_strength = 0;
    };

    class CLASS(Jetpack_CDV19): CLASS(Jetpack_JT12)
    {
        BNA_KC_Jet_effectPoints[] = {"effect"};
    };

    class CLASS(Jetpack_Droid): CLASS(Jetpack_JT12)
    {
        BNA_KC_Jet_freefallHeight = 100000;
    };

    class CLASS(Resupply_Base);
    class CLASS(Resupply_JetpackFuel): CLASS(Resupply_Base)
    {
        displayName = "Jetpack Fuel Tank";

        ace_cargo_size = 2;
        ace_dragging_canDrag = FALSE;
        ace_dragging_canCarry = FALSE;

        model = "\A3\Structures_F\Items\Vessels\WaterTank_F.p3d";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WaterTank_F.jpg";
        hiddenSelections[] = {};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {};
    };
};