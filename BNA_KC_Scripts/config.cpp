class CfgPatches
{
	class BNA_KC_Scripts
	{
		author = "Monkey";
		requiredVersion = 1;
		requiredAddons[]=
        {
            "cba_settings",
                // Addon Options
            "ace_fortify",
                // Fortify system
            "lsb_fob_hblock"
                // LS's Hesco Blocks
                // Comes from Legion Studios: Battlefields
        };
		units[]={};
		weapons[]={};
	};
};

class CfgFunctions
{
	class BNAKC
	{
		class Helmets
		{
			file = "BNA_KC_Scripts\Data\Functions\Helmets";
			class helmetNVGSwitch{};
		};
		class Loadouts
		{
			file = "BNA_KC_Scripts\Data\Functions\Loadouts";
			class GrabLoadout{};
			class GrabUniform{};
		};
		class Misc
		{
			file = "BNA_KC_Scripts\Data\Functions\Misc";
			class LoadoutBox{};
			class PlayRestaurauntAmbience{};
			class ConfigureAddonOptions{};
		};
		class Fortifications
		{
			file = "BNA_KC_Scripts\Data\Functions\Fortification";
			class FortificationsPostInit{};
            class RegisterPreset{};
		};
        class Weapons
        {
            file = "BNA_KC_Scripts\Data\Functions\Weapons";
            class SpecialGrenades{};
            class PlayDroidPopperSound{};
            class TempDisableVehicles{};
            class DisableDekaShields{};
        }
	};
};

class Extended_PreInit_EventHandlers
{
    class BNA_KC_Scripts_AddonOptionsPreInit
	{
        init = "call BNAKC_fnc_ConfigureAddonOptions";
    };
};

class Extended_PostInit_EventHandlers
{
    class BNA_KC_Scripts_HelmetPostInit
	{
        init = "call BNAKC_fnc_helmetNVGSwitch";
    };
    class BNA_KC_Scripts_FortificationsPostInit
	{
        init = "call BNAKC_fnc_FortificationsPostInit";
    };
    class BNA_KC_Scripts_SpecialGrenades
    {
        init = "['ace_firedPlayer', BNAKC_fnc_SpecialGrenades] call CBA_fnc_addEventHandler;";
    }
};

#include "FortifyPresets.hpp"