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

    class Wheeled_Apc_F;
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