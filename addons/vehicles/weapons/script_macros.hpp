#define M190_RANGE_SMALL 0.443
#define M190_RANGE_MEDIUM 0.7/*Unused*/
#define M190_RANGE_FAR 0.5647/*Unused*/

#define MORTAR_SOUND_FIRE reloadSound[] = {"\ls_core_sounds\vehicles\mortar\weapon\mortar_reload.wss", 2, 1, 20}; \
reloadMagazineSound[] = {"\ls_core_sounds\vehicles\mortar\weapon\mortar_reloadMagazine.wss", 1, 1, 20}


#define MORTAR_SOUND_AMMO soundHit[] = {"", 316.228, 1}; \
soundFly[] = {"\ls_core_sounds\vehicles\mortar\weapon\mortar_fly.wss", 3, 1, 250}; \
soundHit1[] = {"\ls_core_sounds\vehicles\mortar\weapon\mortar_hit1.wss", 2.51189, 1, 1900}; \
soundHit2[] = {"\ls_core_sounds\vehicles\mortar\weapon\mortar_hit2.wss", 2.51189, 1, 1900}; \
soundHit3[] = {"\ls_core_sounds\vehicles\mortar\weapon\mortar_hit3.wss", 2.51189, 1, 1900}; \
soundHit4[] = {"\ls_core_sounds\vehicles\mortar\weapon\mortar_hit4.wss", 2.51189, 1, 1900}; \
soundHit5[] = {"\ls_core_sounds\vehicles\mortar\weapon\mortar_hit5.wss", 2.51189, 1, 1900}


#define CSW_MAG_CONVERSION(MAG) class DOUBLES(MAG,CSW): MAG { \
    SCOPE_PUBLIC; \
    type = TYPE_MAGAZINE_PRIMARY_AND_THROW; \
    mass = 300; \
}
