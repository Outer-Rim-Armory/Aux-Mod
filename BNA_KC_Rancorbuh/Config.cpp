#include "CfgPatches.hpp"


class CfgVehicles
{
    class WBK_SpecialZombie_Smasher_1;
    class BNA_KC_Smasher_Rancor: WBK_SpecialZombie_Smasher_1
    {
        displayName = "Rancor";
        uniformClass = "BNA_KC_Uniform_Rancor";
        nakedUniform = "BNA_KC_Uniform_Rancor";
        model = "BNA_KC_Rancorbuh\Model\Rancor.p3d";
    };
};

class CfgWeapons
{
    class Uniform_Base;
    class UniformItem;
    class BNA_KC_Uniform_Rancor: Uniform_Base
    {
        displayname = "Rancor Hide";
        model = "BNA_KC_Rancorbuh\Model\Rancor.p3d";
        scope = 1;
        picture = "";
        class ItemInfo: UniformItem
        {
            containerclass = "Supply200";
            uniformclass = "BNA_KC_Smasher_Rancor";
            uniformmodel = "-";
            mass = 30;
        };
    };
};

class Extended_InitPost_EventHandlers
{
    class BKA_KC_Smasher_Rancor
    {
        class Rancor_Init
        {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\WBK_Zombies\AI\WBK_AI_Smasher.sqf';};";
        };
    };
};