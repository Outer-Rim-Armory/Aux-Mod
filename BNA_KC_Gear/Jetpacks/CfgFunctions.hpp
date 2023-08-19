class CfgFunctions
{
    class BNAKC_Jetpacks
    {
        class Main
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Main";
            class jetpack {};
            class frameHandler {};
            class effectHandler {};
            class soundHandler {};
            class fuelHandler {};
            class slowFall {};
        };

        class JetDialog
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\JetDialog";
            class jetDialogOnLoad {};
            class jetDialogUpdate {};
            class jetpackPutOnTakeOff {};
        };

        class Utils
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Utils";
            class hasJetpack {};
            class canUseJetpack {}; 
            class getJetpackFuel {};
            class playErrorSound {};
        };

        class Fuel
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Refuel";
            class setJetpackFuel {};
            class addRefuelActions {};

            class refuelFromBody {};
            class canRefuelFromBody {};
            class refuelFromBodyModifier {};
        };

        class Settings
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Settings";
            class jetKeybinds {};
            class jetSettings {};
        };
    };
};


class Extended_PreInit_EventHandlers
{
    class BNA_KC_Jetpacks_Settings
    {
        init = "call BNAKC_Jetpacks_fnc_jetKeybinds; call BNAKC_Jetpacks_fnc_jetSettings;";
    };
};


class Extended_PostInit_EventHandlers
{
    class BNA_KC_Jetpacks_Effects_PostInit
    {
        init = "['BNA_KC_Jet_JetpackFired', BNAKC_Jetpacks_fnc_effectHandler] call CBA_fnc_addEventHandler;";
    };
    class BNA_KC_Jetpacks_FuelChanged_PostInit
    {
        init = "['BNA_KC_Jet_FuelChanged', BNAKC_Jetpacks_fnc_jetDialogUpdate] call CBA_fnc_addEventHandler;";
    };
    class BNA_KC_Jetpacks_PutOnTakeOff_PostInit
    {
        init = "['loadout', BNAKC_Jetpacks_fnc_jetpackPutOnTakeOff, true] call CBA_fnc_AddPlayerEventHandler;";
    };
    class BNA_KC_Jetpacks_RefuelActions_PostInit
    {
        init = "call BNAKC_Jetpacks_fnc_addRefuelActions;";
    };
};