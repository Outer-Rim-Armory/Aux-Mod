class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(clearEffects) {
                displayName = "Clear Effects";
                icon = "";

                condition = QUOTE(isTouchingGround _player and {_player call FUNC(hasJetpack)});
                statement = QUOTE(_player call FUNC(clearEffects));
            };
        };
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(refuelFromBody) {
                    displayName = "Take fuel from %1";
                    icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";

                    distance = 1.75;
                    // exceptions[] = { "isNotInside", "isNotSitting", "isNotSwimming", "isNotDragging", "isNotCarrying" };

                    condition = QUOTE(call FUNC(canRefuelFromBody));
                    statement = QUOTE(call FUNC(refuelFromBody));
                    modifierFunction = QUOTE(_this call FUNC(modifyInteraction));
                };

                class GVAR(refuelPlayer) {
                    displayName = "Refuel player's %1";
                    icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";

                    distance = 1.75;

                    condition = QUOTE(call FUNC(canRefuelPlayer));
                    statement = QUOTE(call FUNC(refuelOtherPlayer));
                    modifierFunction = QUOTE(_this call FUNC(modifyInteraction));
                };
            };
        };
    };

    class CLASS(cloneBackpack_base);
    class CLASS(Jetpack_JT12): CLASS(cloneBackpack_base) {
        JLTS_isJumppack = FALSE;

        GVAR(isJetpack) = TRUE;
        GVAR(fuel) = JETPACK_FUEL_DEFAULT;
        GVAR(speed) = JETPACK_SPEED_DEFAULT;     // Jetpack speed, effects how fast you move in the air
        GVAR(strength) = JETPACK_STRENGTH_DEFAULT; // Jetpack strength, effects fast the player rises
        GVAR(canHover) = TRUE;

        // Effects
        GVAR(effectPoints)[] = {"effect_left", "effect_right"}; // Points to spawn effects, these come from the JLTS model
        GVAR(effects)[] = {
            QCLASS(Effects_JetpackFire_Blue),
            QCLASS(Effects_JetpackSmoke)
        };
        GVAR(effectSound)  = QPATHTOF(data\audio\Jetpack_Loop.wss);
        GVAR(lightColor)[] = {0, 0.1, 0.9};

        GVAR(freefallHeight) = 500;
    };

    class CLASS(Jetpack_CDV21): CLASS(Jetpack_JT12) {
        GVAR(strength) = 0;
        GVAR(canHover) = FALSE;
    };

    class CLASS(Jetpack_CDV19): CLASS(Jetpack_JT12) {
        GVAR(effectPoints)[] = {"effect"};
    };

    class CLASS(CIS_Backpack_Droid_B1);
    class CLASS(CIS_Jetpack_Droid_B1): CLASS(CIS_Backpack_Droid_B1) {
        JLTS_isJumppack = FALSE;

        GVAR(isJetpack) = TRUE;
        GVAR(fuel) = JETPACK_FUEL_DEFAULT;
        GVAR(speed) = JETPACK_SPEED_DEFAULT;
        GVAR(strength) = JETPACK_STRENGTH_DEFAULT;
        GVAR(canHover) = TRUE;

        GVAR(effectPoints)[] = {"effect_left", "effect_right"};
        GVAR(effects)[] = {
            QCLASS(Effects_JetpackFire_Blue),
            QCLASS(Effects_JetpackSmoke)
        };
        GVAR(effectSound)  = QPATHTOF(data\audio\Jetpack_Loop.wss);
        GVAR(lightColor)[] = {0, 0.1, 0.9};

        GVAR(freefallHeight) = 100000;
    };

    class CLASS(Resupply_Base);
    class CLASS(Resupply_JetpackFuel): CLASS(Resupply_Base) {
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