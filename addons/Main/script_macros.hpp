#include "\x\cba\addons\main\script_macros_common.hpp"

#undef PREP
#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

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

// Item Types
#define TYPE_HEADGEAR 605
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
#define WHOT 0
#define BHOT 1
#define GHOT 2
#define GBHOT 3
#define RHOT 4
#define RBHOT 5

// Booleans
#define TRUE 1
#define FALSE 0