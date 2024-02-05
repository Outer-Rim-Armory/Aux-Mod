class CLASS(Helmet_Phase2_Tanker_Base);
class CLASS(Helmet_Phase2_Tanker_Catholic): CLASS(Helmet_Phase2_Tanker_Base)
{
    displayName = "[KC] ARMR P2 Helm ('Catholic')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2SpecOP\Catholic_camo1_co.paa),
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };

    subItems[] = {};

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Tanker_Catholic);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_Tanker_CatholicKyber);
};

class CLASS(Helmet_Phase2_Tanker_CatholicKyber): CLASS(Helmet_Phase2_Tanker_Catholic)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2SpecOP\Catholic_camo1_co.paa),
        QPATHTOF(data\visors\Kyber_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase2_Tanker_Grey): CLASS(Helmet_Phase2_Tanker_Base)
{
    displayName = "[KC] ARMR P2 Helm ('Grey')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2SpecOP\Grey_camo1_co.paa),
        "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};