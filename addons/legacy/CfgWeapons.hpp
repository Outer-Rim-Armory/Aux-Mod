class CfgWeapons
{
    class CLASS(Helmet_ARF_CT);
    class CLASS(Helmet_ARF): CLASS(Helmet_ARF_CT)
    {
        SCOPE_HIDDEN;
    };

    class CLASS(Helmet_ARC_CT);
    class CLASS(Helmet_ARC): CLASS(Helmet_ARC_CT)
    {
        SCOPE_HIDDEN;
    };

    class CLASS(Uniform_ARF_CT);
    class CLASS(Uniform_ARF): CLASS(Uniform_ARF_CT)
    {
        SCOPE_HIDDEN;
    };

    class CLASS(Uniform_ARC_CT);
    class CLASS(Uniform_ARC): CLASS(Uniform_ARC_CT)
    {
        SCOPE_HIDDEN;
    };

    class CLASS(Vest_Commander_Keeli);
    class CLASS(Vest_Officer_Keeli): CLASS(Vest_Commander_Keeli)
    {
        SCOPE_HIDDEN;
    };
};