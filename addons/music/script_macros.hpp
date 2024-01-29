#define SOUND_NAME(var1) TRIPLES(PREFIX,Sound,var1)
#define SOUND_OBJ_NAME(var1) TRIPLES(PREFIX,Ambient,var1)
#define SOUND_FX_NAME(var1) DOUBLES(SOUND_NAME(var1),SFX)
#define MUSIC_NAME(var1) TRIPLES(Prefix,Music,var1)

#define SOUND(var1,var2,var3,var4) class SOUND_NAME(var1) \
{ \
    name = var2; \
    sound[] = {QPATHTOF(data\ambience\var3), "db+10", 1}; \
    titles[] = {2, var4}; \
}

#define SOUND_FX(var1,var2,var3) class SOUND_FX_NAME(var1) \
{ \
    name = var2; \
    sounds[] = {"sound0"}; \
    sound0[] = {QPATHTOF(data\ambience\var3), "db+10", 1, 500, 1, 2, 3, 4}; \
    empty[] = {"", 0, 0, 0, 0, 0, 0, 0}; \
}

#define SOUND_OBJ(var1,var2) class SOUND_OBJ_NAME(var1): Sound \
{ \
    SCOPE_PUBLIC; \
    displayName = var2; \
    sound = QUOTE(SOUND_FX_NAME(var1)); \
}

#define MUSIC(var1,var2,var3,var4) class MUSIC_NAME(var1) \
{ \
    name = var2; \
    sound[] = {QPATHTOF(data\music\var1##.ogg), "db+0", 1}; \
    duration = var3; \
    musicClass = QCLASS(MusicCat_##var4##); \
}