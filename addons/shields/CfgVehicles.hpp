class CfgVehicles {
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(ARC170): 3AS_ARC_170_Base {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 5;
        GVAR(regenDelay) = SHIELD_REGEN_DELAY_DEFAULT;
        GVAR(regenAmount) = SHIELD_REGEN_AMOUNT_DEFAULT;

        class ACE_Actions: ACE_Actions {
            class GVAR(rechargeShield_left) {
                displayName = "Recharge Shield: %1";
                selection = "airbrake1_axis";
                distance = 2;

                condition = QUOTE(call FUNC(canExternalRecharge));
                statement = QUOTE(call FUNC(externalRecharge));
                modifierFunction = QUOTE(call FUNC(modifyInteraction));
            };
            class GVAR(rechargeShield_right): GVAR(rechargeShield_left) {
                selection = "airbrake2_axis";
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            SHIELD_TOGGLE;
        };
    };

    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(BTLB_YWing): BTL_Base {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 10;
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

    class 3AS_Z95_VTOL_Dynamic_Base_F;
    class 3AS_Z95_Republic: 3AS_Z95_VTOL_Dynamic_Base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(Z95): 3AS_Z95_Republic {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
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

    class 3AS_Delta7_Base_F;
    class 3AS_Delta7_F: 3AS_Delta7_Base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(Delta7): 3AS_Delta7_F {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
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

    class lsd_laatc_base;
    class lsd_heli_laatc: lsd_laatc_base {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(LAATc): lsd_heli_laatc {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
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

    class Helicopter_Base_H;
    class 3AS_LAAT_Base: Helicopter_Base_H {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(LAATi_Base): 3AS_LAAT_Base {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
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

    class 3AS_Nu_Base_F;
    class 3AS_Nu_REP_F: 3AS_Nu_Base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(Nu): 3AS_Nu_REP_F {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
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

    class 3AS_Rho_Base_F;
    class 3AS_Rho_REP_F: 3AS_Rho_Base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(Rho): 3AS_Rho_REP_F {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
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

    class 3AS_Republic_Transport_01_Base;
    class 3AS_Republic_Transport_01: 3AS_Republic_Transport_01_Base {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(RepublicTransport): 3AS_Republic_Transport_01 {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
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

    class Plane_Fighter_03_base_F;
    class 3as_V19_base: Plane_Fighter_03_base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(V19): 3as_V19_base {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
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

    class 3as_Vwing_base: Plane_Fighter_03_base_F {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(VWing): 3as_Vwing_base {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 2;
        GVAR(regenDelay) = SHIELD_REGEN_DELAY_DEFAULT;
        GVAR(regenAmount) = SHIELD_REGEN_AMOUNT_DEFAULT;

        class ACE_Actions: ACE_Actions {
            class GVAR(rechargeShield) {
                displayName = "Recharge Shield: %1";
                position = "[0, -4, 0.4]";
                distance = 5;

                condition = QUOTE(call FUNC(canExternalRecharge));
                statement = QUOTE(call FUNC(externalRecharge));
                modifierFunction = QUOTE(call FUNC(modifyInteraction));
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            SHIELD_TOGGLE;
        };
    };
};
