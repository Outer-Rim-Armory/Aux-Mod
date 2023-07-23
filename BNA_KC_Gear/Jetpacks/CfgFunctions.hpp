class CfgFunctions
{
    class BNAKC
    {
        class Jetpacks
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions";
            class JetKeybinds {};
            class JetSettings {};
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