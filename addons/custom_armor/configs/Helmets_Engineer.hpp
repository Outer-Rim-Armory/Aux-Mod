class CLASS(Helmet_Engineer_Base);
class CLASS(Helmet_Engineer_Bob): CLASS(Helmet_Engineer_Base)
{
    displayName = "[KC] ENG Helm ('Bob')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\engineer\Bob_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Engineer_Bob);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Engineer_BobKyber);
};
class CLASS(Helmet_Engineer_BobKyber): CLASS(Helmet_Engineer_Bob)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\engineer\Bob_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        QPATHTOF(data\visors\Kyber_Engineer_camo2_co.paa) // Normal texture appears sideways
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Engineer_Splashdown): CLASS(Helmet_Engineer_Base)
{
    displayName = "[KC] ENG Helm ('Splashdown')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\engineer\Splashdown_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};