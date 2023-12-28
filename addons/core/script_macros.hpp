#ifdef __A3_DEBUG__
    #include "\BNA\BNA_KC\addons\core\script_debug.hpp"
#endif
#include "\x\cba\addons\main\script_macros_common.hpp"

#undef PREP
#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {_this call FUNC(x)}
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #define LINKFUNC(x) FUNC(x)
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(CLASS(var1))

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#undef GETVAR
#define GETVAR(var1,var2,var3) (var1 GETVAR_SYS(var2,var3))
#define GETMVAR(var1,var2) (missionNamespace GETVAR_SYS(var1,var2))
#define GETUVAR(var1,var2) (uiNamespace GETVAR_SYS(var1,var2))
#define GETPRVAR(var1,var2) (profileNamespace GETVAR_SYS(var1,var2))
#define GETPAVAR(var1,var2) (parsingNamespace GETVAR_SYS(var1,var2))

#undef SETVAR
#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define EDITOR_PREVIEW(CLASS) QPATHTOF(data\previews\CLASS.jpg)
#define EEDITOR_PREVIEW(COMPONENT,CLASS) QUOTE(PATHTOF_SYS(PREFIX,COMPONENT,data\previews\CLASS.jpg))

#define SCOPE_PUBLIC scope = 2; \
scopeArsenal = 2; \
scopeCurator = 2
#define SCOPE_HIDDEN scope = 1; \
scopeArsenal = 0; \
scopeCurator = 0
#define SCOPE_PRIVATE scope = 0; \
scopeArsenal = 0; \
scopeCurator = 0

#define DBUG_TEX_RED "#(rgb,8,8,3)color(1,0,0,1)"
#define DBUG_TEX_GRN "#(rgb,8,8,3)color(0,1,0,1)"
#define DBUG_TEX_BLU "#(rgb,8,8,3)color(0,0,1,1)"
#define DBUG_TEX_PUR "#(rgb,8,8,3)color(1,0,1,1)"
#define DBUG_TEX_YEL "#(rgb,8,8,3)color(1,1,0,1)"

// Inventory & Loadouts
#define ITEM_2(a) a, a
#define ITEM_3(a) a, a, a
#define ITEM_4(a) a, a, a, a
#define ITEM_5(a) a, a, a, a, a
#define ITEM_6(a) a, a, a, a, a, a
#define ITEM_7(a) a, a, a, a, a, a, a
#define ITEM_8(a) a, a, a, a, a, a, a, a
#define ITEM_9(a) a, a, a, a, a, a, a, a, a
#define ITEM_10(a) a, a, a, a, a, a, a, a, a, a
#define ITEM_11(a) ITEM_10(a), a

#define WEAP_XX(WEAP, COUNT) class _xx_##WEAP \
{ \
    weapon = #WEAP; \
    count = COUNT; \
}

#define MAG_XX(MAG, COUNT) class _xx_##MAG \
{ \
    magazine = #MAG; \
    count = COUNT; \
}

#define ITEM_XX(ITEM, COUNT) class _xx_##ITEM \
{ \
    name = #ITEM; \
    count = COUNT; \
}

#define GROUND_CLASS(WEAP_NAME) DOUBLES(Ground,WEAP_NAME)
#define QGROUND_CLASS(WEAP_NAME) QUOTE(GROUND_CLASS(WEAP_NAME))
#define GROUND_HOLDER(WEAP_NAME, DISPLAY_NAME) class GROUND_CLASS(WEAP_NAME): DOUBLES(Ground,CLASS(Holder_Base)) \
{ \
    SCOPE_PUBLIC; \
    displayName = DISPLAY_NAME; \
    class TransportItems \
    { \
        ITEM_XX(CLASS(WEAP_NAME),1); \
    }; \
}

// Weapon Types
#define TYPE_WEAPON_PRIMARY 1
#define TYPE_WEAPON_HANDGUN 2
#define TYPE_WEAPON_SECONDARY 4
// Magazine Types
#define TYPE_MAGAZINE_HANDGUN_AND_GL 16
#define TYPE_MAGAZINE_PRIMARY_AND_THROW 256
#define TYPE_MAGAZINE_SECONDARY_AND_PUT 512
#define TYPE_MAGAZINE_MISSILE 768
// More Types
#define TYPE_BINOCULAR_AND_NVG 4096
#define TYPE_WEAPON_VEHICLE 65536
#define TYPE_ITEM 131072
// Item Types
#define TYPE_DEFAULT 0
#define TYPE_MUZZLE 101
#define TYPE_OPTICS 201
#define TYPE_FLASHLIGHT 301
#define TYPE_BIPOD 302
#define TYPE_FIRST_AID_KIT 401
#define TYPE_FINS 501
#define TYPE_BREATHING_BOMB 601
#define TYPE_NVG 602
#define TYPE_GOGGLE 603
#define TYPE_SCUBA 604
#define TYPE_HEADGEAR 605
#define TYPE_FACTOR 607
#define TYPE_RADIO 611
#define TYPE_HMD 616
#define TYPE_BINOCULAR 617
#define TYPE_MEDIKIT 619
#define TYPE_TOOLKIT 620
#define TYPE_UAV_TERMINAL 621
#define TYPE_VEST 701
#define TYPE_UNIFORM 801
#define TYPE_BACKPACK 901

#define HEARING_PROTECTION_CREW ace_hearing_lowerVolume = 0.6; \
ace_hearing_protection = 0.85;

// Linked Items
#define LINKED_ITEMS "ItemMap", "ItemCompass", "ItemGPS", "ItemWatch"
#define LINKED_ITEMS_RADIO LINKED_ITEMS, "ItemRadio"

// Sides
#define OPFOR 0
#define BLUFOR 1
#define INDEP 2
#define CIVILIAN 3
#define ALL_SIDES OPFOR, BLUFOR, INDEP, CIVILIAN

// NVGs
#define VISION_NORMAL 0
#define VISION_NV 1
#define VISION_THERMAL 2
#define WHOT 0
#define BHOT 1
#define GHOT 2
#define GBHOT 3
#define RHOT 4
#define RBHOT 5

// Booleans
#define TRUE 1
#define FALSE 0