class CLASS(Helmet_BARC_Base);
class CLASS(Helmet_BARC_Rat): CLASS(Helmet_BARC_Base)
{
    displayName = "[KC] SF BARC Helm ('Rat')";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Customs\Data\Textures\Helmets\SpecialForces\BARC\Helmet_BARC_Rat.paa",
        "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    GVAR(canHelmetToggle) = TRUE;
    GVAR(helmetOff) = QCLASS(Helmet_BARC_Rat);
    GVAR(helmetOn) = QCLASS(Helmet_BARC_RatCrimson);
};
class CLASS(Helmet_BARC_RatCrimson): CLASS(Helmet_BARC_Rat)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\barc\Rat_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
