class CfgWeapons
{
    class ls_redforUniform_base;
    class CLASS(OPFOR_Uniform_Base): ls_redforUniform_base
    {
        class ItemInfo;
    };
    class CLASS(CIS_Uniform_Base): CLASS(OPFOR_Uniform_Base)
    {
        EGVAR(medical,canBleed) = FALSE;
        class ItemInfo: ItemInfo
        {

        };
    };
    class CLASS(CIS_Uniform_DroidBase): CLASS(CIS_Uniform_Base)
    {
        JLTS_isDroid = TRUE;
        JLTS_hasEMPProtection = FALSE;
        JLTS_deathSounds = "DeathDroid";

        model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
        picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";

        class ItemInfo: ItemInfo
        {
            mass = 40;
            uniformClass = QCLASS(CIS_Unit_DroidBase);
            containerClass = "Supply150";
        };
    };

    class CLASS(CIS_Uniform_Droid_BX): CLASS(CIS_Uniform_DroidBase)
    {
        SCOPE_PUBLIC;

        displayName = "[CIS] BX Commando Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(CIS_Unit_Droid_BX);
        };
    };
};