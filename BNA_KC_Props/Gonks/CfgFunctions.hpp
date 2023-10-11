class CfgFunctions
{
    class BNAKC
    {
        class Loadouts
        {
            file = "BNA_KC_Props\Gonks\Data\Functions";
            class uniformBoxInit {};
            class weaponBoxInit {};
            class GrabLoadout {};
            class GrabUniform {};
            class grabWeapon {};
            class shouldShowWeapon {};
            class openAttachmentArsenal {};
            class setMos {};
        };
    };
};


class Extended_Init_EventHandlers
{
    class BNA_KC_Gonk_Loadouts
    {
        class BNA_KC_WeaponActions
        {
            init = "(_this select 0) call BNAKC_fnc_weaponBoxInit";
        };
    };
};