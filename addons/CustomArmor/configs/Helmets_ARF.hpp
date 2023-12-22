class CLASS(Helmet_ARF_Base);
class CLASS(Helmet_ARF_Patriot): CLASS(Helmet_ARF_Base)
{
    displayName = "[KC] SF ARF Helm ('Patriot')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arf\Patriot_camo1_co.paa),
        "",
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_ARF_Sin): CLASS(Helmet_ARF_Base)
{
    displayName = "[KC] SF ARF Helm ('Sin')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arf\Sin_camo1_co.paa),
        QPATHTOF(data\helmets\arf\Sin_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_ARF_Tugz): CLASS(Helmet_ARF_Base)
{
    displayName = "[KC] SF ARF Helm ('Tugz')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arf\Tugz_camo1_co.paa),
        "",
        "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
    };

    GVAR(isCustom) = TRUE;
};