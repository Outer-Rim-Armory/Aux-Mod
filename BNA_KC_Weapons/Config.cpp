#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


class Mode_SemiAuto;
class Mode_FullAuto: Mode_SemiAuto {};

class SlotInfo {};
class CowsSlot: SlotInfo {};
class CowsSlot_Rail: CowsSlot {};
class PointerSlot: SlotInfo {};
class PointerSlot_Rail: PointerSlot {};
class UnderBarrelSlot: SlotInfo {};
class UnderBarrelSlot_Rail: UnderBarrelSlot {};


class CfgMagazines
{
    #include "12thMags.hpp"
};

class CfgAmmo
{
    class JLTS_bullet_rifle_blue;
    class 12thFleet_Ammo_Rifle_Blue: JLTS_bullet_rifle_blue
    {
        coefgravity = 0;
    };

    class JLTS_bullet_sniper_blue;
    class 12thFleet_Ammo_Sniper_Blue: JLTS_bullet_sniper_blue
    {
        coefgravity = 0;
    };
    
    class JLTS_bullet_pistol_blue;
    class 12thFleet_Ammo_Pistol_Blue: JLTS_bullet_pistol_blue
    {
        coefgravity = 0;
    };
    
    class 3AS_EC50_BluePlasma;
    class 12thFleet_Ammo_Westar_Blue: 3AS_EC50_BluePlasma
    {
        coefgravity = 0;
    };

    class JLTS_bullet_stun;
    class 12thFleet_Ammo_Stun: JLTS_bullet_stun
    {
        coefgravity = 0;
    };
};