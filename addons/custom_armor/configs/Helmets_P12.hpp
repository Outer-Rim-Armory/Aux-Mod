class CLASS(Helmet_Phase12_Base);
class CLASS(Helmet_Phase12_Joe): CLASS(Helmet_Phase12_Base)
{
    displayName = "[KC] INF P1-2 Helm ('Joe')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase12\Joe_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\rex\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};