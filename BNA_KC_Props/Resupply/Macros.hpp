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
