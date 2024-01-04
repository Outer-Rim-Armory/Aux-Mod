#define INTERACTION_HUD_CHANGER /*Disabled*/

#define INTERACTION_SHIELD_ACTIONS /*Disabled*/

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