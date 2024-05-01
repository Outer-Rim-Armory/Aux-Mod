class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(switchExternalChannel) {
                displayName = "Switch External Intercom Channel";
                condition = QUOTE(!isNull (_player getVariable [ARR_2('TFAR_externalIntercomVehicle',objNull)]));
                statement = "";
                insertChildren = QUOTE(_player call FUNC(external_insertChildren));
            };
        };
    };

    // Add channel id to base actions
    class AllVehicles;
    class Air: AllVehicles {
        class ACE_SelfActions;
    };
    class Helicopter: Air {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                class TFAR_IntercomChannel_disabled {
                    GVAR(channelId) = -1;
                };
                class TFAR_IntercomChannel_1 {
                    GVAR(channelId) = 0;
                };
                class TFAR_IntercomChannel_2 {
                    GVAR(channelId) = 1;
                };
                class TFAR_IntercomChannel_Misc_1 {
                    GVAR(channelId) = 2;
                };
                class TFAR_IntercomChannel_Misc_2 {
                    GVAR(channelId) = 3;
                };
                class TFAR_IntercomChannel_Misc_3 {
                    GVAR(channelId) = 4;
                };
            };
        };
    };

    class Plane: Air {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                class TFAR_IntercomChannel_disabled {
                    GVAR(channelId) = -1;
                };
                class TFAR_IntercomChannel_1 {
                    GVAR(channelId) = 0;
                };
                class TFAR_IntercomChannel_2 {
                    GVAR(channelId) = 1;
                };
                class TFAR_IntercomChannel_Misc_1 {
                    GVAR(channelId) = 2;
                };
                class TFAR_IntercomChannel_Misc_2 {
                    GVAR(channelId) = 3;
                };
                class TFAR_IntercomChannel_Misc_3 {
                    GVAR(channelId) = 4;
                };
            };
        };
    };

    class LandVehicle;
    class Car: LandVehicle {
        class ACE_SelfActions;
    };
    class Car_F: Car {};
    class Wheeled_APC_F: Car_F {
        class ACE_SelfActions: ACE_SelfActions {
            class TFAR_IntercomChannel {
                class TFAR_IntercomChannel_disabled {
                    GVAR(channelId) = -1;
                };
                class TFAR_IntercomChannel_1 {
                    GVAR(channelId) = 0;
                };
                class TFAR_IntercomChannel_2 {
                    GVAR(channelId) = 1;
                };
                class TFAR_IntercomChannel_Misc_1 {
                    GVAR(channelId) = 2;
                };
                class TFAR_IntercomChannel_Misc_2 {
                    GVAR(channelId) = 3;
                };
                class TFAR_IntercomChannel_Misc_3 {
                    GVAR(channelId) = 4;
                };
            };
        };
    };


    // Custom KC actions for specific vehicles

    class Plane_Fighter_03_dynamicLoadout_base_F;
    class 3AS_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_SelfActions;
    };
    class CLASS(ARC170): 3AS_ARC_170_Base {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class lsd_laatc_base;
    class lsd_heli_laatc: lsd_laatc_base {
        class ACE_SelfActions;
    };
    class CLASS(LAATc): lsd_heli_laatc {
        TFAR_hasIntercom = FALSE;

        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class Helicopter_Base_H;
    class 3AS_LAAT_Base: Helicopter_Base_H {
        class ACE_SelfActions;
    };
    class CLASS(LAATi_Base): 3AS_LAAT_Base {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class 3AS_Nu_Base_F;
    class 3AS_Nu_REP_F: 3AS_Nu_Base_F {
        class ACE_SelfActions;
    };
    class CLASS(Nu): 3AS_Nu_REP_F {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class OPTRE_Pelican_F: Helicopter_Base_H {
        class ACE_SelfActions;
    };
    class CLASS(Ogre_Base): OPTRE_Pelican_F {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class OPTRE_Hornet_base: Helicopter_Base_H {
        class ACE_SelfActions;
    };
    class CLASS(Rathian_Base): OPTRE_Hornet_base {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class 3AS_Rho_Base_F;
    class 3AS_Rho_REP_F: 3AS_Rho_Base_F {
        class ACE_SelfActions;
    };
    class CLASS(Rho): 3AS_Rho_REP_F {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class 3AS_Republic_Transport_01_Base;
    class 3AS_Republic_Transport_01: 3AS_Republic_Transport_01_Base {
        class ACE_SelfActions;
    };
    class CLASS(RepublicTransport): 3AS_Republic_Transport_01 {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class OPTRE_falcon_base;
    class OPTRE_falcon_base_unarmed: OPTRE_falcon_base {
        class ACE_SelfActions;
    };
    class CLASS(Vespoid_Base): OPTRE_falcon_base_unarmed {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class Plane_Fighter_03_dynamicLoadout_base_F;
    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F {
        class ACE_SelfActions;
    };
    class CLASS(BTLB_YWing): BTL_Base {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class 3AS_CIS_AAT_F;
    class 3AS_AAT: 3AS_CIS_AAT_F {
        class ACE_SelfActions;
    };
    class CLASS(AAT_Base): 3AS_AAT {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class Tank_F;
    class ls_ground_aat_base: Tank_F {
        class ACE_SelfActions;
    };
    class CLASS(AAT_King_Base): ls_ground_aat_base {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class APC_Wheeled_01_base_F;
    class 3AS_ATAP_Base: APC_Wheeled_01_base_F {
        class ACE_SelfActions;
    };
    class CLASS(ATAP): 3AS_ATAP_Base {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class 3AS_ATTE_base: APC_Wheeled_01_base_F {
        class ACE_SelfActions;
    };
    class CLASS(ATTE_Base): 3AS_ATTE_base {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class B_MBT_01_cannon_F;
    class B_MBT_01_TUSK_F: B_MBT_01_cannon_F {
        class ACE_SelfActions;
    };
    class CLASS(Blitz): B_MBT_01_TUSK_F {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class OPTRE_M413_base;
    class OPTRE_M412_IFV_UNSC: OPTRE_M413_base {
        class ACE_SelfActions;
    };
    class CLASS(Conga_IFV_Base): OPTRE_M412_IFV_UNSC {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class OPTRE_M413_MGS_UNSC: OPTRE_M413_base {
        class ACE_SelfActions;
    };
    class CLASS(Conga_MGS_Base): OPTRE_M413_MGS_UNSC {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class APC_Wheeled_02_base_v2_F;
    class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F {
        class ACE_SelfActions;
    };
    class CLASS(Hydra): O_APC_Wheeled_02_rcws_v2_F {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class 3AS_B_Jug_01_base_F;
    class 3AS_Jug: 3AS_B_Jug_01_base_F {
        class ACE_SelfActions;
    };
    class CLASS(Juggernaut): 3AS_Jug {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class OPTRE_M808B_base;
    class OPTRE_M808B_UNSC: OPTRE_M808B_base {
        class ACE_SelfActions;
    };
    class CLASS(Plesioth_Base): OPTRE_M808B_UNSC {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class B_APC_Wheeled_01_base_F;
    class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F {
        class ACE_SelfActions;
    };
    class CLASS(Reek): B_APC_Wheeled_01_cannon_F {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class 3AS_RX200_Base: Tank_F {
        class ACE_SelfActions;
    };
    class CLASS(RX200_Base): 3AS_RX200_Base {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };
    };

    class 3AS_Saber_Base;
    class 3AS_Saber_M1: 3AS_Saber_Base {
        class ACE_SelfActions;
    };
    class CLASS(TX130_M1): 3AS_Saber_M1 {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class 3AS_Saber_03_Base;
    class 3AS_Saber_M1Recon: 3AS_Saber_03_Base {
        class ACE_SelfActions;
    };
    class CLASS(TX130_M1_Recon): 3AS_Saber_M1Recon {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class 3AS_Saber_02_Base;
    class 3AS_Saber_M1G: 3AS_Saber_02_Base {
        class ACE_SelfActions;
    };
    class CLASS(TX130_M1_GL): 3AS_Saber_M1G {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };

    class 3AS_Saber_Super_base;
    class 3AS_Saber_Super: 3AS_Saber_Super_base {
        class ACE_SelfActions;
    };
    class CLASS(TX130_Super): 3AS_Saber_Super {
        class ACE_SelfActions: ACE_SelfActions {
            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CARGO;
                INTERCOM_CREW;
                INTERCOM_MISC1;
                INTERCOM_MISC2;
                INTERCOM_MISC3;
            INTERCOM_END;
        };
    };
};