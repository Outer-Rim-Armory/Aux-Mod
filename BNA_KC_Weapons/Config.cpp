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
    class JLTS_bullet_stun;
    class 12thFleet_Ammo_Stun: JLTS_bullet_stun
    {
        coefgravity = 0;
    };
};