// Inventory Macros
// Inventory
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
#define ITEM_12(a) ITEM_10(a), ITEM_2(a)

// Transport
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

// Base Unit Linked Items
#define BASE_LINKED_ITEMS "ItemMap", "ItemRadio", "ItemCompass", "ItemGPS", "ItemWatch"