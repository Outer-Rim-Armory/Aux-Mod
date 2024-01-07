#define SELFINTERACTION_HUD_CHANGER class LS_HUD_Changer \
{ \
    displayName = "Change HUD Color"; \
    condition = QUOTE(ace_player == currentPilot (_this#0) and isEngineOn (_this#0)); \
    exceptions[] = {"isNotInside"}; \
    icon = "\ls_data\icons\hud\colorWheel.paa"; \
    class HUD_White \
    { \
        displayName = "White"; \
        runOnHover = TRUE; \
        condition = "true"; \
        statement = QUOTE([ARR_5(1,1,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1,'#FFFFFF']"; \
    }; \
    class HUD_Black: HUD_White \
    { \
        displayName = "Black"; \
        statement = QUOTE([ARR_5(0,0,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#000000')]); \
    }; \
    class HUD_Blue: HUD_White \
    { \
        displayName = "Blue"; \
        statement = QUOTE([ARR_5(0,0,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#0000FF']"; \
    }; \
    class HUD_Purple: HUD_White \
    { \
        displayName = "Purple"; \
        statement = QUOTE([ARR_5(0.5,0,0.5,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#800080']"; \
    }; \
    class HUD_Red: HUD_White \
    { \
        displayName = "Red"; \
        statement = QUOTE([ARR_5(1,0,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#FF0000']"; \
    }; \
    class HUD_Orange: HUD_White \
    { \
        displayName = "Orange"; \
        statement = QUOTE([ARR_5(1,0.5,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#FF8000']"; \
    }; \
    class HUD_Yellow: HUD_White \
    { \
        displayName = "Yellow"; \
        statement = QUOTE([ARR_5(1,1,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#FFFF00']"; \
    }; \
    class HUD_Green: HUD_White \
    { \
        displayName = "Green"; \
        statement = QUOTE([ARR_5(0,1,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#00FF00']"; \
    }; \
    class HUD_Cyan: HUD_White \
    { \
        displayName = "Cyan"; \
        statement = QUOTE([ARR_5(0,1,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = "_this#3#2 set [1, '#00FFFF']"; \
    }; \
    class HUD_Clear: HUD_White \
    { \
        displayName = "No Hud"; \
        icon = "ls_data\icons\hud\noHud.paa"; \
        statement = QUOTE([ARR_5(0,0,0,0,_this#0)] call ls_utility_fnc_hudColorChange); \
    }; \
}

#define INTERCOM_START class TFAR_IntercomChannel \
{ \
    displayName = "Intercom Channel"; \
    condition = "true"; \
    statement = ""

#define INTERCOM_DISABLED class TFAR_IntercomChannel_disabled \
{ \
    displayName = "Disabled"; \
    condition = QUOTE(_vehicle = objectParent ace_player; _intercom = _vehicle getVariable [ARR_2(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),-2)]; if (_intercom == -2) then {_intercom = _vehicle getVariable [ARR_2('TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot)]}; _intercom != -1); \
    statement = QUOTE((objectParent ace_player) setVariable [ARR_3(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),-1,true)]); \
}
#define INTERCOM_CARGO class TFAR_IntercomChannel_1 \
{ \
    displayName = "Cargo"; \
    condition = QUOTE(_vehicle = objectParent ace_player; _intercom = _vehicle getVariable [ARR_2(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),-2)]; if (_intercom == -2) then {_intercom = _vehicle getVariable [ARR_2('TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot)]}; _intercom != 1); \
    statement = QUOTE((objectParent ace_Player) setVariable [ARR_3(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),0,true)]); \
}
#define INTERCOM_CREW class TFAR_IntercomChannel_2 \
{ \
    displayName = "Crew"; \
    condition = QUOTE(_vehicle = objectParent ace_player; _intercom = _vehicle getVariable [ARR_2(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),-2)]; if (_intercom == -2) then {_intercom = _vehicle getVariable [ARR_2('TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot)]}; _intercom != 1); \
    statement = QUOTE((objectParent ace_Player) setVariable [ARR_3(FORMAT_1('TFAR_IntercomSlot_%1',netID ace_player),1,true)]); \
}

#define INTERCOM_END }

#define INVENTORY_VEHICLE_BASE(CREW_COUNT) class TransportWeapons \
{ \
    WEAP_XX(CLASS(DC15S),__EVAL(1 * CREW_COUNT)); \
    WEAP_XX(CLASS(DC17),1); \
}; \
class TransportMagazines \
{ \
    MAG_XX(CLASS(Mag_80rnd_DC15S),__EVAL(5 * CREW_COUNT)); \
    MAG_XX(SmokeShellPurple,2); \
    MAG_XX(SmokeShellBlue,2); \
    MAG_XX(ACE_Chemlight_HiBlue,2); \
    MAG_XX(CLASS(Mag_UGL_3rnd_FlareBlue),2); \
}; \
class TransportItems \
{ \
    ITEM_XX(ACE_packingBandage,__EVAL(10 * CREW_COUNT)); \
    ITEM_XX(ACE_elasticBandage,__EVAL(10 * CREW_COUNT)); \
    ITEM_XX(ACE_quikclot,__EVAL(15 * CREW_COUNT)); \
    ITEM_XX(ACE_tourniquet,__EVAL(4 * CREW_COUNT)); \
    ITEM_XX(ACE_splint,__EVAL(2 * CREW_COUNT)); \
    ITEM_XX(RD501_Painkiller,__EVAL(3 * CREW_COUNT)); \
    ITEM_XX(ACE_epinephrine,__EVAL(2 * CREW_COUNT)); \
    ITEM_XX(ToolKit,1); \
}; \
class TransportBackpacks {}

#define INVENTORY_VEHICLE_COMMON class TransportWeapons {}; \
class TransportMagazines \
{ \
    MAG_XX(CLASS(Mag_60rnd_DC15A),5); \
    MAG_XX(CLASS(Mag_80rnd_DC15S),5); \
    MAG_XX(3Rnd_UGL_FlareWhite_F,2); \
    MAG_XX(3Rnd_UGL_FlareRed_F,2); \
    MAG_XX(CLASS(Mag_UGL_3rnd_FlareBlue),2); \
    MAG_XX(3Rnd_UGL_FlareCIR_F,2); \
    MAG_XX(3Rnd_Smoke_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeRed_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeGreen_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeYellow_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokePurple_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeBlue_Grenade_shell,2); \
    MAG_XX(3Rnd_SmokeOrange_Grenade_shell,2); \
    MAG_XX(3Rnd_HE_Grenade_shell,2); \
    MAG_XX(CLASS(Mag_20rnd_DC17),5); \
    MAG_XX(CLASS(Mag_1rnd_RPS7_AT),1); \
    MAG_XX(ls_mag_classC_thermalDet,4); \
}; \
class TransportBackpacks {}; \
class TransportItems \
{ \
    ITEM_XX(ACE_elasticBandage,20); \
    ITEM_XX(RD501_Painkiller,5); \
    ITEM_XX(ACE_tourniquet,4); \
    ITEM_XX(ACE_splint,2); \
}

#define INVENTORY_VEHICLE_RECON class TransportWeapons \
{ \
    WEAP_XX(CLASS(DC15A),1); \
    WEAP_XX(CLASS(DC15S),1); \
}; \
class TransportMagazines \
{ \
    MAG_XX(CLASS(Mag_60rnd_DC15A),15); \
    MAG_XX(CLASS(Mag_80rnd_DC15S),15); \
    MAG_XX(CLASS(Mag_15rnd_DC15X),5); \
}; \
class TransportBackpacks {}; \
class TransportItems \
{ \
    ITEM_XX(ACE_elasticBandage,30); \
}

#define INVENTORY_VEHICLE_MEDICAL class TransportWeapons {}; \
class TransportMagazines \
{ \
    MAG_XX(3AS_SmokePurple,1); \
    MAG_XX(SquadShieldMagazine,1); \
}; \
class TransportBackpacks {}; \
class TransportItems \
{ \
    ITEM_XX(ACE_elasticBandage,30); \
    ITEM_XX(ACE_elasticBandage,20); \
    ITEM_XX(ACE_elasticBandage,15); \
    ITEM_XX(ACE_salineIV,1); \
    ITEM_XX(ACE_salineIV_500,1); \
    ITEM_XX(ACE_salineIV_250,2); \
    ITEM_XX(ACE_morphine,2); \
    ITEM_XX(ACE_epinephrine,2); \
    ITEM_XX(RD501_Painkiller,5); \
    ITEM_XX(ACE_tourniquet,8); \
    ITEM_XX(ACE_splint,2); \
};