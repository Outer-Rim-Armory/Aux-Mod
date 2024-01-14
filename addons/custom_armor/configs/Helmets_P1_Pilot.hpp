class CLASS(Helmet_Phase1_Pilot_Base);
class CLASS(Helmet_Phase1_Pilot_Bailout): CLASS(Helmet_Phase1_Pilot_Base)
{
    displayName = "[KC] AVI P1 Helm ('Bailout')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1Pilot\Bailout_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_Pilot_Blue): CLASS(Helmet_Phase1_Pilot_Base)
{
    displayName = "[KC] AVI P1 Helm ('Blue')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1Pilot\Blue_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };

    subItems[] = {};

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Pilot_Blue);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_Pilot_BlueBacta);
};
class CLASS(Helmet_Phase1_Pilot_BlueBacta): CLASS(Helmet_Phase1_Pilot_Blue)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1Pilot\Blue_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
        QPATHTOF(data\visors\Bacta_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Pilot_Mischief): CLASS(Helmet_Phase1_Pilot_Base)
{
    displayName = "[KC] AVI P1 Helm ('Mischief')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1Pilot\Mischief_camo1_co.paa),
        QPATHTOF(data\helmets\phase1Pilot\Mischief_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};