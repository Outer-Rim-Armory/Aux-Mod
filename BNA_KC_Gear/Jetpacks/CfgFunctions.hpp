class CfgFunctions
{
    class BNAKC
    {
        class Jetpacks
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions";
            class JetKeybinds {};
            class JetSettings {};

            class Jetpack {};
            class SlowFall {};
            class JetpackFrameHandler {};
            class JetpackEffectHandler {};
            class JetpackSoundHandler {};
            class HasJetpack {};
            class CanUseJetpack {};
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
};