#include "CfgPatches.hpp"
#include "CfgCloudlets.hpp"


class CfgWeapons
{
    /*
    class 3AS_ATRT_Base;
    class 3AS_ATRT_Uniform: 3AS_ATRT_Base
    {
        class ItemInfo;
    };
    class BNA_KC_Uniform_ATRT: 3AS_ATRT_Uniform
    {
        displayName = "AT-RT Plating";
        JLTS_hasStunProtection = 1;
        picture = "\BNA_KC_Vehicles\Light\Data\Textures\UI\Uniform_ATRT_UI.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_ATRT";
        };
    };
    */
};


class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
    /*
    class 3AS_ATRT_Base;
    class 3AS_ATRT: 3AS_ATRT_Base
    {
        class EventHandlers;
    };
    class BNA_KC_ATRT: 3AS_ATRT
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";

        displayName = "[KC] AT-RT";
        uniformClass = "BNA_KC_Uniform_ATRT";
        nakedUniform = "BNA_KC_Uniform_ATRT";
        impactEffectsBlood = "ImpactMetal";

        weapons[] = { "BNA_KC_ATRT_Turret" };
        magazines[] = { "BNA_KC_9999Rnd_ATRT_Turret_Magazine" };

        allowedfacewear[] = {""};
        allowedHeadgear[] = {""};
        allowedHeadgearB[] = {""};
        headgearList[] = {""};
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_Euro"};

		// Textures are not set-up on the 3AS end yet.
		// hiddenSelectionsTextures[] =
		// {
		// 	"BNA_KC_Vehicles\Light\Data\Textures\ATRT\BNA_KC_ATRT.paa"
		// };
        class EventHandlers
        {
            init = "";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };

        class VehicleTransport
        {
            class Cargo
            {
                BNA_KC_SpecialLoad = 1;
            };
        };
	};
    */
};


class CfgFunctions
{
    class BNAKC
    {
        class ATRT
        {
            file = "BNA_KC_Vehicles\Light\Data\Functions\ATRT";
            class initATRT {};
            class mountATRT {};
            class dismountATRT {};
            class spawnATRTSmoke {};
        };
    };
};


class Extended_Init_EventHandlers
{
    class BNA_KC_ATRT
    {
        class BNA_KC_ATRT_init
        {
            init = "(_this select 0) call BNAKC_fnc_initATRT;";
        };
    };
};