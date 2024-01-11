class CfgWeapons
{
    class ls_redforUniform_base;
    class CLASS(OPFOR_Uniform_Base): ls_redforUniform_base
    {
        class ItemInfo;
    };
    class CLASS(TU_Uniform): CLASS(OPFOR_Uniform_Base)
    {
        SCOPE_PUBLIC;
    };
};