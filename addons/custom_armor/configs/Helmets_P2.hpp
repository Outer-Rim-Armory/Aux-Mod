class CLASS(Helmet_Phase2_Base);
class CLASS(Helmet_Phase2_Axel): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Axel')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Axel_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Bob): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Bob')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Bob_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Bob);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_BobKyber);
};
class CLASS(Helmet_Phase2_BobKyber): CLASS(Helmet_Phase2_Bob)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Bob_camo1_co.paa),
        QPATHTOF(data\visors\Kyber_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase2_Burnt): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Burnt')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Burnt_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Burnt);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_BurntBacta);
};
class CLASS(Helmet_Phase2_BurntBacta): CLASS(Helmet_Phase2_Burnt)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Burnt_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa),
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase2_Dexus): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Dexus')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Dexus_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,toggleOff) = QCLASS(Helmet_Phase2_Dexus);
    EGVAR(armor,toggleOn) = QCLASS(Helmet_Phase2_DexusBacta);
};
class CLASS(Helmet_Phase2_DexusBacta): CLASS(Helmet_Phase2_Dexus)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Dexus_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase2_Evo): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Evo')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Evo_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Grey): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Grey')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Grey_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Harry): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Harry')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Harry_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Hazard): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Hazard')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Hazard_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Jackal): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Jackal')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Jackal_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Jaws): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Jaws')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Jaws_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Jester): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Jester')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Jester_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Joe): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Joe')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Joe_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Joe);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_JoeCrimson);
};
class CLASS(Helmet_Phase2_JoeCrimson): CLASS(Helmet_Phase2_Joe)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Joe_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase2_Keeli): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Keeli')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson);
};
class CLASS(Helmet_Phase2_KeeliCrimson): CLASS(Helmet_Phase2_Keeli)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase2_Keeli_CamoBrown): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Keeli') - Brown Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\brown\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_CamoBrown);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_CamoBrown);
};
class CLASS(Helmet_Phase2_KeeliCrimson_CamoBrown): CLASS(Helmet_Phase2_Keeli_CamoBrown)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\brown\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};
class CLASS(Helmet_Phase2_Keeli_CamoGrey): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Keeli') - Grey Camo";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\grey\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Keeli_CamoGrey);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_KeeliCrimson_CamoGrey);
};
class CLASS(Helmet_Phase2_KeeliCrimson_CamoGrey): CLASS(Helmet_Phase2_Keeli_CamoGrey)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\camo\grey\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase2_Leon): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Leon')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Leon_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Lou): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Lou')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Lou_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase2_Lou);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase2_LouPlasma);
};
class CLASS(Helmet_Phase2_LouPlasma): CLASS(Helmet_Phase2_Lou)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Lou_camo1_co.paa),
        QPATHTOF(data\visors\Plasma_camo2_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase2_Ox): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Ox')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Ox_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Patriot): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Patriot')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Patriot_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Rev): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Rev')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Rev_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Rodger): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Rodger')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Rodger_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};
class CLASS(Helmet_Phase2_Sage): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Sage')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Sage_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Scvrpio): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Scvrpio')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Scvrpio_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Sogi): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Sogi')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Sogi_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};


class CLASS(Helmet_Phase2_Splashdown): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Splashdown')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Splashdown_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Star): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Star')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Star_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Swoop): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Swoop')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Swoop_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Sytha): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Sytha')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Sytha_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Tugz): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Tugz')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Tugz_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Vortex): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Vortex')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Vortex_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase2_Woods): CLASS(Helmet_Phase2_Base)
{
    displayName = "[KC] INF P2 Helm ('Woods')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase2\Woods_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };

    GVAR(isCustom) = TRUE;
};