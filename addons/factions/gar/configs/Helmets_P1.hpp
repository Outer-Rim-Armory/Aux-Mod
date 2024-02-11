class CLASS(Helmet_Phase1_Base);
class CLASS(Helmet_Phase1_CG): CLASS(Helmet_Phase1_Base)
{
    displayName = "[CG] INF P1 Helm";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase1\CG_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_HowzerBlue): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Howzer') [Blue]";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase1\HowzerBlue_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_HowzerBrown): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Howzer') [Brown]";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase1\HowzerBrown_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    EGVAR(custom_armor,isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_91st_Ponds): CLASS(Helmet_Phase1_Base)
{
    displayName = "[91st] INF P1 Helm ('Ponds')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(SUBCOMPONENT\data\helmets\phase1\Ponds_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};