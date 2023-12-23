class CLASS(Helmet_ARC_Base);
class CLASS(Helmet_ARC_Drake): CLASS(Helmet_ARC_Base)
{
    displayName = "[KC] SF ARC P1.5 Helm ('Drake')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arc\Drake_camo1_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_ARC_Drake);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_ARC_DrakeBacta);
};
class CLASS(Helmet_ARC_DrakeBacta): CLASS(Helmet_ARC_Drake)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arc\Drake_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_ARC_Hagrid): CLASS(Helmet_ARC_Base)
{
    displayName = "[KC] SF ARC P1.5 Helm ('Hagrid')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arc\Hagrid_camo1_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_ARC_Hagrid);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_ARC_HagridPlasma);
};
class CLASS(Helmet_ARC_HagridPlasma): CLASS(Helmet_ARC_Hagrid)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arc\Hagrid_camo1_co.paa),
        QPATHTOF(data\visors\Plasma_camo2_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_ARC_Tyrant): CLASS(Helmet_ARC_Base)
{
    displayName = "[KC] SF ARC P1.5 Helm ('Tyrant')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arc\Tyrant_camo1_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa",
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_ARC_Tyrant);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_ARC_TyrantCrimson);
};
class CLASS(Helmet_ARC_TyrantCrimson): CLASS(Helmet_ARC_Tyrant)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\arc\Tyrant_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
        "\lsd_armor_bluefor\helmet\gar\arc\data\helmet_co.paa",
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};