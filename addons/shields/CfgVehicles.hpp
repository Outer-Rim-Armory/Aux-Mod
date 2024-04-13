class CfgVehicles {
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(ARC170): 3AS_ARC_170_Base {
        GVAR(hasShield) = TRUE;
        GVAR(health) = SHIELD_HEALTH_DEFAULT;
        GVAR(regenDelay) = SHIELD_REGEN_DELAY_DEFAULT;
        GVAR(regenAmount) = SHIELD_REGEN_AMOUNT_DEFAULT;

        class ACE_Actions: ACE_Actions {
            class RechargeShield_Left {
                displayName = "Recharge Shield: %1";
                selection = "airbrake1_axis";
                distance = 2;

                condition = QUOTE([ARR_2(_this#0,_this#1)] call FUNC(canExternalRecharge));
                statement = QUOTE([ARR_2(_this#0,_this#1)] call FUNC(externalRecharge));
                modifierFunction = QUOTE(_this call FUNC(modifyInteraction));
            };
            class RechargeShield_Right: RechargeShield_Left {
                selection = "airbrake2_axis";
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            SHIELD_TOGGLE;
        };
    };

    class Plane_Fighter_03_dynamicLoadout_base_F;
    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(BTLB_YWing): BTL_Base {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 15;
        GVAR(regenDelay) = SHIELD_REGEN_DELAY_DEFAULT;
        GVAR(regenAmount) = SHIELD_REGEN_AMOUNT_DEFAULT;

        class ACE_Actions: ACE_Actions {
            class RechargeShield {
                displayName = "Recharge Shield: %1";
                position = "[0, -4, 0.4]";
                distance = 5;

                condition = QUOTE([ARR_2(_this#0,_this#1)] call FUNC(canExternalRecharge));
                statement = QUOTE([ARR_2(_this#0,_this#1)] call FUNC(externalRecharge));
                modifierFunction = QUOTE(_this call FUNC(modifyInteraction));
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            SHIELD_TOGGLE;
        };
    };
};