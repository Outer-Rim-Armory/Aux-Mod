class CfgVehicles
{
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F
    {
        class ACE_Actions;
        class ACE_SelfActions;
    };
    class CLASS(ARC170): 3AS_ARC_170_Base
    {
        GVAR(hasShield) = TRUE;
        GVAR(health) = 20;
        GVAR(regenDelay) = 10;
        GVAR(regenAmount) = 1;

        class ACE_Actions: ACE_Actions
        {
            class RechargeShield_Left
            {
                displayName = "Recharge Shield: %1";
                selection = "airbrake1_axis";
                distance = 2;

                // condition = QUOTE([ARR_2(_this#0,_this#1)] call FUNC(canFullRechargeShield));
                // statement = QUOTE([ARR_2(_this#0,_this#1)] call FUNC(shieldFullChargeAction));
                // modifierFunction = QUOTE(_this call FUNC(shieldActionModifier));
            };
            class RechargeShield_Right: RechargeShield_Left
            {
                selection = "airbrake2_axis";
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            class CLASS(Shield)
            {
                displayName = "Shield Health: %1";
                condition = "true";
                statement = "";
                // modifierFunction = QUOTE(_this call FUNC(modifyInteraction))

                class Activate
                {
                    displayName = "Activate Shield";
                    condition = QUOTE(ace_player call FUNC(canActivate));
                    statement = QUOTE(_this call FUNC(activate));
                };

                class Deactivate
                {
                    displayName = "Deactivate Shield";
                    condition = QUOTE(ace_player call FUNC(canDeactivate));
                    statement = QUOTE(_this call FUNC(deactivate));
                };
            };
        };
    };
};