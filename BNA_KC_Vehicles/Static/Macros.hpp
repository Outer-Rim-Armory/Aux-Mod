#define MORTAR_SOUND_FIRE() class StandardSound \
{ \
    begin1[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot1.wss", 1.5, 1, 250}; \
    begin2[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot2.wss", 1.5, 1, 250}; \
    begin3[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot3.wss", 1.5, 1, 250}; \
    begin4[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot4.wss", 1.5, 1, 250}; \
    begin5[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_shot5.wss", 1.5, 1, 250}; \
    soundBegin[] = {"begin1", 0.15, "begin2", 0.25, "begin3", 0.1, "begin4", 0.3, "begin5", 0.2}; \
}; \
reloadSound[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reload.wss", 2, 1, 20}; \
reloadMagazineSound[] = {"swlb_core\data\sounds\vehicles\mortar\weapon\mortar_reloadMagazine.wss", 1, 1, 20};


#define MORTAR_SOUND_AMMO() soundHit[] = {"",316.228,1}; \
soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",3,1,250}; \
soundHit1[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit1.wss",2.51189,1,1900}; \
soundHit2[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit2.wss",2.51189,1,1900}; \
soundHit3[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit3.wss",2.51189,1,1900}; \
soundHit4[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit4.wss",2.51189,1,1900}; \
soundHit5[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_hit5.wss",2.51189,1,1900};


#define CSW_MAG_CARRY() type = 256; \
scope = 2; \
scopeArsenal = 2; \
mass = 300;