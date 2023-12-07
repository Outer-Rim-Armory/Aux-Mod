class CfgFunctions
{
    class BNAKC
    {
        class Loadouts
        {
            file = "BNA_KC_Props\Gonks\Data\Functions";
            class uniformBoxInit {};
            class loadoutBoxInit {};
            class weaponBoxInit {};
            class GrabLoadout {};
            class GrabUniform {};
            class grabWeapon {};
            class shouldShowWeapon {};
            class openAttachmentArsenal {};
            class setMos {};

            class getAllCustoms {};
            class openCustomsArsenal {};
        };
    };
};


class Extended_Init_EventHandlers
{
    class BNA_KC_Gonk_Loadouts
    {
        class BNA_KC_LoadoutActions
        {
            clientInit = "(_this select 0) call BNAKC_fnc_loadoutBoxInit";
        };
        class BNA_KC_WeaponActions
        {
            clientInit = "(_this select 0) call BNAKC_fnc_weaponBoxInit";
        };
    };
    class BNA_KC_Gonk_Uniforms
    {
        class BNA_KC_UniformActions
        {
            clientInit = "(_this select 0) call BNAKC_fnc_uniformBoxInit";
        };
    };
};