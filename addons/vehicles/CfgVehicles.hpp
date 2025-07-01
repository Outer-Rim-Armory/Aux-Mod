class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_MainActions {
                class GVAR(eject) {
                    displayName = "Eject";
                    exceptions[] = {"isNotSitting", "isNotInside"};
                    condition = QUOTE(call FUNC(canEjectUnit));
                    statement = QUOTE(moveOut _target);
                };
            };
        };
        class ACE_SelfActions {
            class ace_csw_deploy {
                condition = QUOTE(call FUNC(csw_canDeploy));
                modifierFunction = QUOTE(call FUNC(csw_modifyInteraction));
            };
        };

        class UserActions {
            class GVAR(CSW_Deploy) {
                displayName = "Deploy Tripod";
                displayNameDefault = "";

                position = "camera";
                radius = 30;
                onlyForPlayer = FALSE;

                hideOnUse = TRUE;
                priority = 5;

                condition = QUOTE(GVAR(csw_showDeployAction) and {ace_player isEqualTo this} and {ace_player call FUNC(csw_canDeploy)});
                statement = QUOTE(ace_player call ace_csw_fnc_assemble_deployTripod);
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                UNFLIP_VEHICLE;
            };
        };
        class ACE_SelfActions {
            SKIN_SWITCHER;
        };
    };
    class Tank: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {
                UNFLIP_VEHICLE;
            };
        };
        class ACE_SelfActions {
            SKIN_SWITCHER;
        };
    };
    class StaticWeapon: LandVehicle {
        class ACE_SelfActions {
            SKIN_SWITCHER;
        };
    };

    class Air;
    class Helicopter: Air {
        class ACE_Actions {
            class ACE_MainActions {
                UNFLIP_VEHICLE;
            };
        };
        class ACE_SelfActions {
            SKIN_SWITCHER;
        };
    };
    class Plane: Air {
        class ACE_Actions {
            class ACE_MainActions {
                UNFLIP_VEHICLE;
            };
        };
        class ACE_SelfActions {
            SKIN_SWITCHER;
        };
    };

    class Ship;
    class Ship_F: Ship {
        class ACE_Actions {
            class ACE_MainActions {
                UNFLIP_VEHICLE;
            };
        };
        class ACE_SelfActions {
            SKIN_SWITCHER;
        };
    };
};
