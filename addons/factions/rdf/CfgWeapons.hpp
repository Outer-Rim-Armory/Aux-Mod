class CfgWeapons
{
    class ls_blueforUniform_base;
    class CLASS(BLUFOR_Uniform_Base): ls_blueforUniform_base
    {
        class ItemInfo;
    };
    class CLASS(RDF_Uniform): CLASS(BLUFOR_Uniform_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[RDF] Uniform";

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(RDF_Unit_Base);
        };
    };
};