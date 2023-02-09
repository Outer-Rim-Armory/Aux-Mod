class CfgPatches
{
	class BNA_KC_Scripts
	{
		author = "Monkey";
		requiredVersion = 1;
		requiredAddons[]={};
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
		class Misc
		{
			file = "BNA_KC_Scripts\Data\Functions\Misc";
			class LoadoutBox{};
			class PlayRestaurauntAmbience{};
		};
	};
};

class Extended_PostInit_EventHandlers
{
    class BNA_KC_Scripts_HelmetPostInit
	{
        init = "call BNAKC_fnc_helmetNVGSwitch";
    };
};