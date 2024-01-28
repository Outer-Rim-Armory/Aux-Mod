class CfgWeapons
{
    class CLASS(Helmet_ARF_CT);
    class CLASS(Helmet_ARF): CLASS(Helmet_ARF_CT)
    {
        SCOPE_HIDDEN
    };

    class CLASS(Uniform_ARF_CT);
    class CLASS(Uniform_ARF): CLASS(Uniform_ARF_CT)
    {
        SCOPE_HIDDEN;
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_ARF_CT);
        };
    };
};