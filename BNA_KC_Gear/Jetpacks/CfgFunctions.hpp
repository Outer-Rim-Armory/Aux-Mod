class CfgFunctions
{
    class BNAKC
    {
        class Jetpacks
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions";
            class JetKeybinds {};
            class JetSettings {};
            class JetAddRefuelActions {};
            
            class JetDialogOnLoad {};
            class JetDialogUpdate {};

            class Jetpack {};
            class JetpackFrameHandler {};
            class JetpackEffectHandler {};
            class JetpackSoundHandler {};
            class JetpackFuelHandler {};
            class SlowFall {};

            class HasJetpack {};
            class CanUseJetpack {};
            class GetJetpackFuel {};
            class JetpackRefuel {};
            class JetpackPutOnTakeOff {};

            class canRefuelFromBody {};
            class refuelFromBody {};
            class refuelFromBodyModifier {};
        };
    };
};


class Extended_PreInit_EventHandlers
{
    class BNA_KC_Jetpacks_PreInit
    {
        init = "call BNAKC_fnc_JetKeybinds; call BNAKC_fnc_JetSettings;";
    };
};


class Extended_PostInit_EventHandlers
{
    class BNA_KC_Jetpacks_Effects_PostInit
    {
        init = "['BNA_KC_Jet_JetpackFired', BNAKC_fnc_JetpackEffectHandler] call CBA_fnc_addEventHandler;";
    };
    class BNA_KC_Jetpacks_FuelChanged_PostInit
    {
        init = "['BNA_KC_Jet_FuelChanged', BNAKC_fnc_JetDialogUpdate] call CBA_fnc_addEventHandler;";
    };
    class BNA_KC_Jetpacks_PutOnTakeOff_PostInit
    {
        init = "['loadout', BNAKC_fnc_JetpackPutOnTakeOff, true] call CBA_fnc_AddPlayerEventHandler;";
    };
    class BNA_KC_Jetpacks_RefuelActions_PostInit
    {
        init = "call BNAKC_fnc_JetAddRefuelActions;";
    };
};