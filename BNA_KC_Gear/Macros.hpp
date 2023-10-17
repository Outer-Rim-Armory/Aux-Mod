/*
Macros for item counts and other values to help keep things consistent.

To include these macros in a file, add this line:
Your code editor of choice might display this as an error since the
the path begins with a "\", but it essentially represents the project root
(aka the "addons" folder itself, in a way)

#include "\BNA_KC_Gear\Macros.hpp"
*/

// Item Counts
// ITEM_2(className) gives two of that item, etc.
#define ITEM_2(a) a, a
#define ITEM_3(a) a, a, a
#define ITEM_4(a) a, a, a, a
#define ITEM_5(a) a, a, a, a, a
#define ITEM_6(a) a, a, a, a, a, a
#define ITEM_7(a) a, a, a, a, a, a, a
#define ITEM_8(a) a, a, a, a, a, a, a, a
#define ITEM_9(a) a, a, a, a, a, a, a, a, a
#define ITEM_10(a) a, a, a, a, a, a, a, a, a, a
#define ITEM_11(a) a, a, a, a, a, a, a, a, a, a, a
#define ITEM_12(a) a, a, a, a, a, a, a, a, a, a, a, a

// Config Properties
#define GET_STRING(config, defaultValue) (if (isText (config)) then {getText (config)} else {defaultValue})
#define GET_ARRAY(config, defaultValue) (if (isArray (config)) then {getArray (config)} else {defaultValue})
#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})

#define WEAP_XX(WEAP, COUNT) class _xx_##WEAP \
{ \
    weapon = #WEAP; \
    count = COUNT; \
};

#define MAG_XX(MAG, COUNT) class _xx_##MAG \
{ \
    magazine = #MAG; \
    count = COUNT; \
};

#define ITEM_XX(ITEM, COUNT) class _xx_##ITEM \
{ \
    name = #ITEM; \
    count = COUNT; \
};

// Returns text (normally code) in quotes
#define QUOTE(CODE) #CODE