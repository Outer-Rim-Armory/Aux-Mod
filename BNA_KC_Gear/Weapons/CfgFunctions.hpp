class CfgFunctions
{
    class BNAKC
    {
        class Weapons
        {
            file = "BNA_KC_Gear\Weapons\Data\Functions";
            class specialAmmo {};
        };

        class DroidPopper
        {
            file = "BNA_KC_Gear\Weapons\Data\Functions\DroidPopper";
            class playDroidPopperSound {};
            class killDroids {};
            class tempDisableVehicles {};
            class disableDekaShields {};
        };

        class Settings
        {
            class weapOptions
            {
                file = "BNA_KC_Gear\Weapons\Data\Functions\fn_weapOptions.sqf";
            };
        };
    };
};


class Extended_PreInit_EventHandlers
{
    class BNA_KC_Weap_OptionsPreInit
    {
        init = "call BNAKC_fnc_weapOptions;";
    };
};

class Extended_PostInit_EventHandlers
{
    class BNA_KC_Weap_SpecialAmmo
    {
        init = "['ace_firedPlayer'] call BNAKC_fnc_specialAmmo;";
    };
};