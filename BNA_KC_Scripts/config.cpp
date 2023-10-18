#include "CfgVehicles.hpp"
#include "FortifyPresets.hpp"


class CfgPatches
{
	class BNA_KC_Scripts
	{
		author = "Monkey";
		requiredVersion = 1;
		requiredAddons[] =
        {
            "cba_settings",
                // Addon Options
            "ace_fortify",
                // Fortify system
            "lsb_fob_hblock",
                // Hesco Blocks
            "lsb_sounds"
                // Shield Hit sounds
        };
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class BNAKC
	{
        class Developer
        {
            file = "BNA_KC_Scripts\Data\Functions\Developer";
            class devLog {};
            class exportPreviews {};
        };

		class Helmets
		{
			file = "BNA_KC_Scripts\Data\Functions\Helmets";
			class helmetNVGSwitch {};
		};

		class Misc
		{
			file = "BNA_KC_Scripts\Data\Functions\Misc";
			class FixInfiniteLoading {};
			class getConfigProperty {};
            class inCustomCamera {};
		};

		class Fortify
		{
			file = "BNA_KC_Scripts\Data\Functions\Fortify";
			class fortifyObjectPlaced {};
            class registerPreset {};
		};

        class Map
        {
            file = "BNA_KC_Scripts\Data\Functions\Map";
			class markSelf {};
            class markSelfChildren {};
            class markSelfModifier {};
            class rgbToHex {};
        };

        class EMP
        {
            file = "BNA_KC_Scripts\Data\Functions\EMP";
            class killDroids {};
            class disableDekaShields {};
            class tempDisableVehicles {};
            class playDroidPopperSound {};

            class canUseEMP {};
            class activateEMP {};
        };

        class Weapons
        {
            file = "BNA_KC_Scripts\Data\Functions\Weapons";
            class specialGrenadesEH {};
        };

        class Vehicles
        {
            file = "BNA_KC_Scripts\Data\Functions\Vehicles";
            class canSwitchSkins {};
            class skinSwitcherChildren {};
            class setIntercomChannel {};
            class canSpecialLoad {};
            class specialLoad {};
        };

        class Shields
        {
            file = "BNA_KC_Scripts\Data\Functions\Shield";
            class activateShield {};
            class deactivateShield {};
            class addShieldHandler {};
            class shieldActionModifier {};
            class rechargeShield {};
            class canFullRecharge {};
            class shieldFullChargeAction {};

            class shieldToggleHandler {};
            class shieldHealthChangedHandler {};

            class getShieldHealth {};
            class getShieldHealthColor {};
        };

        class Medical
        {
            file = "BNA_KC_Scripts\Data\Functions\Medical";
            class slowHeal {};
            class areaSlowHeal {};
            class sortUnitsByInjuries {};
            class isFullyHealed {};
        };

        class Settings
        {
            file = "BNA_KC_Scripts\Data\Functions\Settings";
            class loadAllSettings {};
            class miscOptions {};
            class miscKeybinds {};
            class weapOptions {};
        };
	};

    class ls_vehicle
    {
        class scripts
        {
            class ImpulseKey
            {
                file = "BNA_KC_Scripts\Data\Functions\Vehicles\fn_impulseKey.sqf";
            };
            class RepulseKey
            {
                file = "BNA_KC_Scripts\Data\Functions\Vehicles\fn_repulseKey.sqf";
            };
        };
    };
};

class Extended_PreInit_EventHandlers
{
    class BNA_KC_Settings_loadAllSettings
    {
        init = "call BNAKC_fnc_loadAllSettings;";
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
    class BNA_KC_Scripts_FixInfiniteLoading
    {
        init = "if (BNA_KC_Misc_FixInfiniteLoading) then { call BNAKC_fnc_FixInfiniteLoading; };";
    };
    class BNA_KC_Weap_specialGrenadesEH
    {
        init = "['ace_firedPlayer'] call BNAKC_fnc_specialGrenadesEH;";
    };
    class BNA_KC_Shield_ToggleHandler
    {
        init = "call BNAKC_fnc_shieldToggleHandler;";
    };
    class BNA_KC_Shield_HealthChangedHandler
    {
        init = "call BNAKC_fnc_shieldHealthChangedHandler;";
    };
};

class Extended_GetIn_EventHandlers
{
    class All
    {
        class BNA_KC_SetIntercomChannel
        {
            getIn = "_this call BNAKC_fnc_setIntercomChannel";
        };
    };
};