#define ATRT_HEALTH 100

#define VIV_PICKUP_RANGE 30

#define IMPULSE_SETTINGS tas_can_impulse = FALSE; \
ls_impulsor_soundOn = QCLASS(Sound_ImpulseOn); \
ls_impulsor_soundOff = QCLASS(Sound_ImpulseOff); \
ls_impulsor_boostSpeed_1 = 400; \
ls_impulsor_boostSpeed_2 = 600; \
ls_impulsor_fuelDrain_1 = 0; \
ls_impulsor_fuelDrain_2 = 0 \

#define SKIN_SWITCHER class GVAR(switchSkin) { \
    displayName = "Switch Vehicle Skin"; \
    condition = QUOTE(call FUNC(skin_canSwitch)); \
    insertChildren = QUOTE(call FUNC(skin_insertChildren)); \
}

#define AI_CREW_SPAWNER class GVAR(spawnCrew) { \
    displayName = "Create Vehicle Crew"; \
    condition = QUOTE(_this#0 call FUNC(canSpawnCrew)); \
    statement = QUOTE((group ace_player) createVehicleCrew _this#0); \
}; \
class GVAR(deleteCrew) { \
    displayName = "Delete Vehicle Crew"; \
    condition = QUOTE(_this#0 call FUNC(canDeleteCrew)); \
    statement = QUOTE({_this#0 deleteVehicleCrew _x;} forEach (_this#0 call ace_common_fnc_getVehicleCrew)); \
}

#define UNFLIP_VEHICLE class GVAR(unflip) { \
    displayName = "Unflip"; \
    condition = QUOTE(alive _target and {!canMove _target}); \
    statement = QUOTE(_target call FUNC(unflip)); \
    distance = 10; \
}

#define HUD_CHANGER class LS_HUD_Changer { \
    displayName = "Change HUD Color"; \
    condition = QUOTE(ace_player == currentPilot (_this#0) and isEngineOn (_this#0)); \
    exceptions[] = {"isNotInside"}; \
    icon = "\ls_data\icons\hud\colorWheel.paa"; \
    class HUD_White { \
        displayName = "White"; \
        runOnHover = TRUE; \
        condition = "true"; \
        statement = QUOTE([ARR_5(1,1,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1,'#FFFFFF']"; \
    }; \
    class HUD_Black: HUD_White { \
        displayName = "Black"; \
        statement = QUOTE([ARR_5(0,0,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#000000')]); \
    }; \
    class HUD_Blue: HUD_White { \
        displayName = "Blue"; \
        statement = QUOTE([ARR_5(0,0,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#0000FF']"; \
    }; \
    class HUD_Purple: HUD_White { \
        displayName = "Purple"; \
        statement = QUOTE([ARR_5(0.5,0,0.5,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#800080']"; \
    }; \
    class HUD_Red: HUD_White { \
        displayName = "Red"; \
        statement = QUOTE([ARR_5(1,0,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#FF0000']"; \
    }; \
    class HUD_Orange: HUD_White { \
        displayName = "Orange"; \
        statement = QUOTE([ARR_5(1,0.5,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#FF8000']"; \
    }; \
    class HUD_Yellow: HUD_White { \
        displayName = "Yellow"; \
        statement = QUOTE([ARR_5(1,1,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#FFFF00']"; \
    }; \
    class HUD_Green: HUD_White { \
        displayName = "Green"; \
        statement = QUOTE([ARR_5(0,1,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#00FF00']"; \
    }; \
    class HUD_Cyan: HUD_White { \
        displayName = "Cyan"; \
        statement = QUOTE([ARR_5(0,1,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#00FFFF']"; \
    }; \
    class HUD_Clear: HUD_White { \
        displayName = "No Hud"; \
        icon = "\ls_data\icons\hud\noHud.paa"; \
        statement = QUOTE([ARR_5(0,0,0,0,_this#0)] call ls_utility_fnc_hudColorChange); \
    }; \
}

#define INVENTORY_VEHICLE_BASE(CREW_COUNT) class TransportWeapons { \
    WEAP_XX(CLASS(DC15S),__EVAL(1 * CREW_COUNT)); \
    WEAP_XX(CLASS(DC17),1); \
}; \
class TransportMagazines { \
    MAG_XX(CLASS(Mag_80Rnd_DC15S),__EVAL(5 * CREW_COUNT)); \
    MAG_XX(SmokeShellPurple,2); \
    MAG_XX(SmokeShellBlue,2); \
    MAG_XX(ACE_Chemlight_HiBlue,2); \
    MAG_XX(CLASS(Mag_UGL_3Rnd_FlareBlue),2); \
}; \
class TransportItems { \
    ITEM_XX(ACE_packingBandage,__EVAL(10 * CREW_COUNT)); \
    ITEM_XX(ACE_elasticBandage,__EVAL(10 * CREW_COUNT)); \
    ITEM_XX(ACE_quikclot,__EVAL(15 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(ACE_splint,__EVAL(2 * CREW_COUNT)); \
    ITEM_XX(EGVAR(medical,Painkiller),__EVAL(3 * CREW_COUNT)); \
    ITEM_XX(ACE_epinephrine,__EVAL(2 * CREW_COUNT)); \
    ITEM_XX(ToolKit,1); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_HYDRA(CREW_COUNT) class TransportWeapons { \
    WEAP_XX(CLASS(DC15S),__EVAL(2 * CREW_COUNT)); \
    WEAP_XX(CLASS(DC15A),4); \
    WEAP_XX(CLASS(DC15A_UGL),2); \
}; \
class TransportMagazines { \
    MAG_XX(CLASS(Mag_80Rnd_DC15S),__EVAL(20 * CREW_COUNT)); \
    MAG_XX(Mag_60Rnd_DC15A,40); \
    MAG_XX(BNA_KC_Mag_StunLong,5); \
    MAG_XX(BNA_KC_Mag_StunShort,5); \
    MAG_XX(3AS_SmokePurple,2); \
    MAG_XX(3AS_SmokeBlue,2); \
    MAG_XX(3AS_SmokeGreen,2); \
    MAG_XX(3AS_SmokeRed,2); \
    MAG_XX(3AS_SmokeYellow,2); \
    MAG_XX(3AS_SmokeWhite,5); \
    MAG_XX(ls_mag_classC_thermalDet,5); \
    MAG_XX(CLASS(Grenade_EMP),5); \
}; \
class TransportItems { \
    ITEM_XX(ACE_packingBandage,__EVAL(10 * CREW_COUNT)); \
    ITEM_XX(ACE_elasticBandage,__EVAL(30 * CREW_COUNT)); \
    ITEM_XX(ACE_quikclot,__EVAL(15 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(ACE_splint,__EVAL(2 * CREW_COUNT)); \
    ITEM_XX(EGVAR(medical,Painkiller),__EVAL(3 * CREW_COUNT)); \
    ITEM_XX(ACE_epinephrine,__EVAL(2 * CREW_COUNT)); \
    ITEM_XX(ToolKit,1); \
    ITEM_XX(ACE_CableTie,15); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_GLAVTRANS(CREW_COUNT) class TransportWeapons { \
    WEAP_XX(CLASS(DC15A),__EVAL(1 * CREW_COUNT)); \
    WEAP_XX(CLASS(DC15A_UGL),__EVAL(1 * CREW_COUNT)); \
}; \
class TransportMagazines { \
    MAG_XX(CLASS(Mag_60Rnd_DC15A),__EVAL(20 * CREW_COUNT)); \
    MAG_XX(BNA_KC_Mag_StunLong,5); \
    MAG_XX(BNA_KC_Mag_StunShort,5); \
    MAG_XX(3AS_SmokePurple,2); \
    MAG_XX(3AS_SmokeBlue,2); \
    MAG_XX(3AS_SmokeGreen,2); \
    MAG_XX(3AS_SmokeRed,2); \
    MAG_XX(3AS_SmokeYellow,2); \
    MAG_XX(3AS_SmokeWhite,5); \
    MAG_XX(CLASS(Grenade_EMP),5); \
}; \
class TransportItems { \
    ITEM_XX(ACE_elasticBandage,__EVAL(30 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(ToolKit,1); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_GLAVMED(CREW_COUNT) class TransportMagazines { \
    MAG_XX(3AS_SmokePurple,4); \
    MAG_XX(CLASS(Grenade_Bacta),2); \
}; \
class TransportItems { \
    ITEM_XX(ACE_packingBandage,__EVAL(20 * CREW_COUNT)); \
    ITEM_XX(ACE_elasticBandage,__EVAL(30 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(8 * CREW_COUNT)); \
    ITEM_XX(ACE_splint,__EVAL(8 * CREW_COUNT)); \
    ITEM_XX(EGVAR(medical,Painkiller),__EVAL(5 * CREW_COUNT)); \
    ITEM_XX(ACE_epinephrine,__EVAL(5 * CREW_COUNT)); \
    ITEM_XX(ACE_morphine,__EVAL(5 * CREW_COUNT)); \
    ITEM_XX(ACE_salineIV,2); \
    ITEM_XX(ACE_salineIV_500,3); \
    ITEM_XX(ACE_salineIV_250,4); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_GAMAMMO(CREW_COUNT) class TransportWeapons { \
    WEAP_XX(CLASS(DC15S),__EVAL(1 * CREW_COUNT)); \
}; \
class TransportMagazines { \
    MAG_XX(CLASS(Mag_80Rnd_DC15S),__EVAL(10 * CREW_COUNT)); \
}; \
class TransportItems { \
    ITEM_XX(ACE_elasticBandage,__EVAL(20 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(EGVAR(medical,Painkiller),__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(ToolKit,1); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_GAMFUEL(CREW_COUNT) class TransportWeapons { \
    WEAP_XX(CLASS(DC15S),__EVAL(1 * CREW_COUNT)); \
}; \
class TransportMagazines { \
    MAG_XX(CLASS(Mag_80Rnd_DC15S),__EVAL(10 * CREW_COUNT)); \
}; \
class TransportItems { \
    ITEM_XX(ACE_elasticBandage,__EVAL(20 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(EGVAR(medical,Painkiller),__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(ToolKit,1); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_GAMMED(CREW_COUNT) class TransportMagazines { \
    MAG_XX(3AS_SmokePurple,5); \
    MAG_XX(CLASS(Grenade_Bacta),5); \
}; \
class TransportItems { \
    ITEM_XX(ACE_packingBandage,__EVAL(25 * CREW_COUNT)); \
    ITEM_XX(ACE_elasticBandage,__EVAL(35 * CREW_COUNT)); \
    ITEM_XX(ACE_quikclot,__EVAL(15 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(ACE_splint,__EVAL(2 * CREW_COUNT)); \
    ITEM_XX(EGVAR(medical,Painkiller),__EVAL(6 * CREW_COUNT)); \
    ITEM_XX(ACE_epinephrine,__EVAL(6 * CREW_COUNT)); \
    ITEM_XX(ACE_morphine,__EVAL(6 * CREW_COUNT)); \
    ITEM_XX(ACE_salineIV,3); \
    ITEM_XX(ACE_salineIV_500,4); \
    ITEM_XX(ACE_salineIV_250,5); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_GAMTRANS(CREW_COUNT) class TransportWeapons { \
    WEAP_XX(CLASS(DC15S),__EVAL(2 * CREW_COUNT)); \
    WEAP_XX(CLASS(DC15A),5); \
    WEAP_XX(CLASS(DC15A_UGL),2); \
}; \
class TransportMagazines { \
    MAG_XX(CLASS(Mag_80Rnd_DC15S),__EVAL(20 * CREW_COUNT)); \
    MAG_XX(Mag_60Rnd_DC15A,50); \
    MAG_XX(CLASS(Grenade_EMP),5); \
}; \
class TransportItems { \
    ITEM_XX(ACE_elasticBandage,__EVAL(20 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(ToolKit,1); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_COMMON class TransportWeapons {}; \
class TransportMagazines { \
    MAG_XX(CLASS(Mag_60Rnd_DC15A),5); \
    MAG_XX(CLASS(Mag_80Rnd_DC15S),5); \
    MAG_XX(3Rnd_UGL_FlareWhite_F,2); \
    MAG_XX(3Rnd_UGL_FlareRed_F,2); \
    MAG_XX(CLASS(Mag_UGL_3Rnd_FlareBlue),2); \
    MAG_XX(3Rnd_UGL_FlareCIR_F,2); \
    MAG_XX(3Rnd_Smoke_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeRed_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeGreen_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeYellow_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokePurple_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeBlue_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeOrange_Grenade_shell,2); \
    MAG_XX(3Rnd_HE_Grenade_shell,2); \
    MAG_XX(CLASS(Mag_20Rnd_DC17),5); \
    MAG_XX(CLASS(Mag_1Rnd_RPS7_AT),1); \
    MAG_XX(ls_mag_classC_thermalDet,4); \
}; \
class TransportBackpacks {}; \
class TransportItems { \
    ITEM_XX(ACE_elasticBandage,20); \
    ITEM_XX(EGVAR(medical,Painkiller),5); \
    ITEM_XX(ACE_tourniquet,4); \
    ITEM_XX(ACE_splint,2); \
}

#define INVENTORY_VEHICLE_RECON class TransportWeapons { \
    WEAP_XX(CLASS(DC15A),1); \
    WEAP_XX(CLASS(DC15S),1); \
}; \
class TransportMagazines { \
    MAG_XX(CLASS(Mag_60Rnd_DC15A),15); \
    MAG_XX(CLASS(Mag_80Rnd_DC15S),15); \
    MAG_XX(CLASS(Mag_15Rnd_DC15X),5); \
}; \
class TransportBackpacks {}; \
class TransportItems { \
    ITEM_XX(ACE_elasticBandage,30); \
}

#define INVENTORY_VEHICLE_MEDICAL class TransportWeapons {}; \
class TransportMagazines { \
    MAG_XX(3AS_SmokePurple,1); \
    MAG_XX(SquadShieldMagazine,1); \
}; \
class TransportBackpacks {}; \
class TransportItems { \
    ITEM_XX(ACE_elasticBandage,30); \
    ITEM_XX(ACE_packingBandage,20); \
    ITEM_XX(ACE_quickclot,15); \
    ITEM_XX(ACE_salineIV,1); \
    ITEM_XX(ACE_salineIV_500,1); \
    ITEM_XX(ACE_salineIV_250,2); \
    ITEM_XX(ACE_morphine,2); \
    ITEM_XX(ACE_epinephrine,2); \
    ITEM_XX(EGVAR(medical,Painkiller),5); \
    ITEM_XX(ACE_tourniquet,8); \
    ITEM_XX(ACE_splint,2); \
}

#define CSW_MAG_CARRY(MAG) class DOUBLES(MAG,CSW): MAG { \
    scope = 2; \
    scopeArsenal = 2; \
    type = TYPE_MAGAZINE_PRIMARY_AND_THROW; \
    mass = 300; \
}

#define VEHICLE_LIST_AIR [ \
    QCLASS(ARC170), \
    QCLASS(LAATc), \
    QCLASS(LAATi_MK1), \
    QCLASS(LAATi_MK1_Lamps), \
    QCLASS(LAATi_MK2), \
    QCLASS(LAATi_MK2_Lamps), \
    QCLASS(RepublicTransport), \
    QCLASS(BTLB_YWing), \
    QCLASS(Nu), \
    QCLASS(Rho), \
    QCLASS(Rho_medical), \
    QCLASS(VWing), \
    QCLASS(V19), \
    QCLASS(Delta7), \
    QCLASS(Z95) \
]

#define VEHICLE_LIST_LAND [ \
    QCLASS(ATAP), \
    QCLASS(ATRT), \
    QCLASS(ATTE), \
    QCLASS(BARC), \
    QCLASS(Blitz), \
    QCLASS(Gammoth_Transport), \
    QCLASS(Gammoth_Covered), \
    QCLASS(Gammoth_Ammo), \
    QCLASS(Gammoth_Medical), \
    QCLASS(Gammoth_Repair), \
    QCLASS(Gammoth_Refuel), \
    QCLASS(Gammoth_Device), \
    QCLASS(Glavenus_Unarmed), \
    QCLASS(Glavenus_Medic), \
    QCLASS(Glavenus_HMG), \
    QCLASS(Glavenus_GMG), \
    QCLASS(Hermitaur_Class_E), \
    QCLASS(Hermitaur_Class_I), \
    QCLASS(Hermitaur_Class_M), \
    QCLASS(Hornet_Unarmed), \
    QCLASS(Hornet_MG), \
    QCLASS(Hornet_AT), \
    QCLASS(Hydra), \
    QCLASS(Juggernaut), \
    QCLASS(Khezu_Unarmed), \
    QCLASS(Khezu_Armed), \
    QCLASS(Reek), \
    QCLASS(RX200_AA), \
    QCLASS(RX200_Artillery), \
    QCLASS(TX130_M1), \
    QCLASS(TX130_M1_Recon), \
    QCLASS(TX130_M1_GL), \
    QCLASS(TX130_Super), \
    QCLASS(UTAT) \
]
