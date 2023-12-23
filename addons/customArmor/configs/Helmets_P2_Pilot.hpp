class CLASS(Helmet_Phase2_Pilot_Base);
class CLASS(Helmet_Phase2_Pilot_Bailout): CLASS(Helmet_Phase2_Pilot_Base)
{
    displayName = "[KC] AVI P2 Helm ('Bailout')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\Bailout_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Pilot_Blue): CLASS(Helmet_Phase2_Pilot_Base)
{
    displayName = "[KC] AVI P2 Helm ('Blue')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\Blue_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Pilot_BlueBacta): CLASS(Helmet_Phase2_Pilot_Blue)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\Blue_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase2_Pilot_Mischief): CLASS(Helmet_Phase2_Pilot_Base)
{
    displayName = "[KC] AVI P2 Helm ('Mischief')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2Pilot\Mischief_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};