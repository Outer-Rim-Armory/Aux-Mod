class CfgPatches
{
    class BNA_KC_Rancorbuh
    {
        author="SweMonkey";
        requiredVersion=1.6;
        requiredAddons[]=
        {
            "WBK_ZombieCreatures"
        };
        units[] =
        {
            "BKA_KC_Smasher_Rancor"
        };
        weapons[]=
        {
            "Rancor_uniform"
        };

        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles
{
    class WBK_SpecialZombie_Smasher_1;
    class BKA_KC_Smasher_Rancor: WBK_SpecialZombie_Smasher_1
    {
        displayName = "Rancor";
        uniformClass = "Rancor_uniform";
        nakedUniform = "Rancor_uniform";
        model = "BNA_KC_Rancorbuh\Model\Rancor.p3d";
    };
};

class CfgWeapons
{
    class Uniform_Base;
    class UniformItem;
    class Rancor_uniform: Uniform_Base
    {
        displayname = "Rancor Hide";
        model = "BNA_KC_Rancorbuh\Model\Rancor.p3d";
        scope = 1;
        picture = "";
        class ItemInfo: UniformItem
        {
            containerclass = "Supply200";
            uniformclass = "Rancor_uniform";
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