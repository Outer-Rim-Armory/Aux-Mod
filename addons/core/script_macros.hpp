// Global toggles for caching/logging
// #define DISABLE_COMPILE_CACHE
// #define DEBUG_MODE_FULL
#define DEBUG_SYNCHRONOUS

#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#define EGVAR_ACE(var1,var2) TRIPLES(ace,var1,var2)
#define QEGVAR_ACE(var1,var2) QUOTE(EGVAR_ACE(var1,var2))
#define EFUNC_ACE(var1,var2) TRIPLES(DOUBLES(ace,var1),fnc,var2)

#ifdef DEBUG_MODE_FULL
    #define TRACE_0(MESSAGE) LOG_SYS_FILELINENUMBERS('TRACE',str diag_frameNo + ' ' + (MESSAGE))
#else
    #define TRACE_0(MESSAGE) /* disabled */
#endif

#undef PREP
#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {_this call FUNC(x)}
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
    #define PREP_RECOMPILE_START    if (isNil "ACE_PREP_RECOMPILE") then {ACE_recompiles = []; ACE_PREP_recompile = {{call _x} forEach ACE_recompiles;}}; private _recomp = {
    #define PREP_RECOMPILE_END      }; call _recomp; ACE_recompiles pushBack _recomp;
#else
    #define LINKFUNC(x) FUNC(x)
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
    #define PREP_RECOMPILE_START ; /* disabled */
    #define PREP_RECOMPILE_END ; /* disabled */
#endif

#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(CLASS(var1))
#define QQCLASS(var1) QUOTE(QCLASS(var1))

#define FACTION(var1) CLASS(DOUBLES(Faction,var1))
#define QFACTION(var1) QCLASS(DOUBLES(Faction,var1))
#define EDCAT(var1) CLASS(DOUBLES(EdCat,var1))
#define QEDCAT(var1) QCLASS(DOUBLES(EdCat,var1))
#define EDSUBCAT(var1) CLASS(DOUBLES(EdSubCat,var1))
#define QEDSUBCAT(var1) QCLASS(DOUBLES(EdSubCat,var1))

#define ADDON_LOADED(var1) 'var1' call ace_common_fnc_isModLoaded

#ifdef SUBCOMPONENT
    #define EDITOR_PREVIEW(var1) QPATHTOF(SUBCOMPONENT\data\previews\CLASS(var1).jpg)
#else
    #define EDITOR_PREVIEW(var1) QPATHTOF(data\previews\CLASS(var1).jpg)
#endif
#define EEDITOR_PREVIEW(var1,var2) QUOTE(PATHTOF_SYS(PREFIX,var1,data\previews\CLASS(var2).jpg))

#define QQPATHTOF(var1) QUOTE(QPATHTOF(var1))
#define QQPATHTOEF(var1,var2) QUOTE(QPATHTOEF(var1,var2))

#define IGUI_GVAR(var1) DOUBLES(IGUI,GVAR(var1))
#define QIGUI_GVAR(var1) QUOTE(IGUI_GVAR(var1))
#define QQIGUI_GVAR(var1) QUOTE(QIGUI_GVAR(var1))

#define SCOPE_PUBLIC scope = 2; \
scopeArsenal = 2; \
scopeCurator = 2
#define SCOPE_HIDDEN scope = 1; \
scopeArsenal = 0; \
scopeCurator = 0
#define SCOPE_PRIVATE scope = 0; \
scopeArsenal = 0; \
scopeCurator = 0

#define DEPRECATE_CLASS(old,new) class CLASS(old): CLASS(new) { SCOPE_HIDDEN; }

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
#define ITEM_15(a) ITEM_10(a), ITEM_5(a)
#define ITEM_16(a) ITEM_10(a), ITEM_6(a)
#define ITEM_20(a) ITEM_10(a), ITEM_10(a)

#define WEAP_XX(WEAP, COUNT) class DOUBLES(_xx,WEAP) { \
    weapon = QUOTE(WEAP); \
    count = COUNT; \
}

#define MAG_XX(MAG, COUNT) class DOUBLES(_xx,MAG) { \
    magazine = QUOTE(MAG); \
    count = COUNT; \
}

#define ITEM_XX(ITEM, COUNT) class DOUBLES(_xx,ITEM) { \
    name = QUOTE(ITEM); \
    count = COUNT; \
}

#define CARGO_XX(ITEM, COUNT) class ITEM { \
    type = QUOTE(ITEM); \
    amount = COUNT; \
}

#define GROUND_CLASS(WEAP_NAME) DOUBLES(Ground,CLASS(WEAP_NAME))
#define QGROUND_CLASS(WEAP_NAME) QUOTE(GROUND_CLASS(WEAP_NAME))
#define GROUND_HOLDER(WEAP_NAME, DISPLAY_NAME) class GROUND_CLASS(WEAP_NAME): GROUND_CLASS(Holder_Base) { \
    SCOPE_PUBLIC; \
    displayName = DISPLAY_NAME; \
    class TransportItems { \
        ITEM_XX(CLASS(WEAP_NAME),1); \
    }; \
}

// Conditions
#define IS_STOPPED(var1) speed var1 < 1 and {speed var1 > -1}

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

#define TYPE_ACE_INTERACT_ACTION 0
#define TYPE_ACE_INTERACT_SELF 1

#define HEARING_PROTECTION_CREW ace_hearing_lowerVolume = 0.6; \
ace_hearing_protection = 0.85

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

#define IGUI_SAVEX 0
#define IGUI_SAVEY 1
#define IGUI_SAVEW 2
#define IGUI_SAVEH 3
#define IGUI_SAVEALL IGUI_SAVEX, IGUI_SAVEY, IGUI_SAVEW, IGUI_SAVEH

#define CLAMP(var1,lower,upper) lower max (var1 min upper)
#define GET_NAME(var1) [var1, false, true] call ace_common_fnc_getName

// These are defined here so multiple addons can define jetpack properties easily
#define JETPACK_FUEL_DEFAULT 300
#define JETPACK_SPEED_DEFAULT 4
#define JETPACK_STRENGTH_DEFAULT 15

// ACE Arsenal Tab values
// Left Tabs
#define ARSENAL_TAB_PRIMARY 0
#define ARSENAL_TAB_HANDGUNS 1
#define ARSENAL_TAB_LAUNCHERS 2
#define ARSENAL_TAB_UNIFORMS 3
#define ARSENAL_TAB_VESTS 4
#define ARSENAL_TAB_BACKPACKS 5
#define ARSENAL_TAB_HEADGEAR 6
#define ARSENAL_TAB_GOGGLES 7
#define ARSENAL_TAB_NVGS 8
#define ARSENAL_TAB_BINOCULARS 9
#define ARSENAL_TAB_MAP 10
#define ARSENAL_TAB_GPS 11
#define ARSENAL_TAB_RADIOS 12
#define ARSENAL_TAB_COMPASS 13
#define ARSENAL_TAB_WATCH 14
// Right Tabs
#define ARSENAL_TAB_OPTICS 0
#define ARSENAL_TAB_SIDE 1
#define ARSENAL_TAB_MUZZLES 2
#define ARSENAL_TAB_BIPODS 3
#define ARSENAL_TAB_MAGAZINES 4
#define ARSENAL_TAB_GRENADES 5
#define ARSENAL_TAB_EXPLOSIVES 6
#define ARSENAL_TAB_MISC 7

// Default bar statement for ACE Arsenal Stats
#define STAT_BAR_STATEMENT(min,max) [ARR_3((_this select 0) select 0,_this select 1,[ARR_3([ARR_2(min,max)],[ARR_2(0.01,1)],false)])] call ace_arsenal_fnc_statBarStatement_default