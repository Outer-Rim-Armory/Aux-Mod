class CfgWeapons
{
    class ls_greenforUniform_base;
    class CLASS(INDEP_Uniform_Base): ls_greenforUniform_base
    {
        class ItemInfo;
    };
    class CLASS(Faction_Uniform): CLASS(INDEP_Uniform_Base)
    {
        SCOPE_PUBLIC;
    };
};