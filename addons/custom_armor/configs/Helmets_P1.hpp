class CLASS(Helmet_Phase1_Base);
class CLASS(Helmet_Phase1_Axel): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Axel')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Axel_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_Burnt): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Burnt')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Burnt_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Burnt);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_BurntBacta);
};

class CLASS(Helmet_Phase1_BurntBacta): CLASS(Helmet_Phase1_Burnt)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Burnt_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Catholic): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Catholic')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Catholic_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Catholic);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_CatholicKyber);
};

class CLASS(Helmet_Phase1_CatholicKyber): CLASS(Helmet_Phase1_Catholic)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Burnt_camo1_co.paa),
        QPATHTOF(data\visors\Kyber_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Cutthroat): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Cutthroat')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Cutthroat_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_Defter): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Defter')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Defter_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Defter);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_DefterBacta);
};

class CLASS(Helmet_Phase1_DefterBacta): CLASS(Helmet_Phase1_Defter)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Defter_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Dexus): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Dexus')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Dexus_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Dexus);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_DexusBacta);
};

class CLASS(Helmet_Phase1_DexusBacta): CLASS(Helmet_Phase1_Dexus)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Dexus_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Drake): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Drake')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Drake_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Drake);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_DrakeBacta);
};

class CLASS(Helmet_Phase1_DrakeBacta): CLASS(Helmet_Phase1_Drake)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Drake_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Grey): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Grey')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Grey_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_Hazard): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Hazard')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Hazard_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_Jaws): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Jaws')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Jaws_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_Jester): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Jester')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Jester_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
};

class CLASS(Helmet_Phase1_Joe): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Joe')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Joe_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Joe);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_JoeCrimson);
};

class CLASS(Helmet_Phase1_JoeCrimson): CLASS(Helmet_Phase1_Joe)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Joe_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Keeli): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Keeli')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Keeli_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Keeli);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_KeeliCrimson);
};

class CLASS(Helmet_Phase1_KeeliCrimson): CLASS(Helmet_Phase1_Keeli)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Keeli_camo1_co.paa),
        QPATHTOF(data\visors\Bacta_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Lou): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Lou')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Lou_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Lou);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_LouPlasma);
};

class CLASS(Helmet_Phase1_LouPlasma): CLASS(Helmet_Phase1_Lou)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Lou_camo1_co.paa),
        QPATHTOF(data\visors\Plasma_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Ox): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Ox')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Ox_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Patriot): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Patriot')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Patriot_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Rev): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Rev')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Rev_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Rodger): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Rodger')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Rodger_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Sin): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Sin')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Sin_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Splashdown): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Splashdown')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Splashdown_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Swoop): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Swoop')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Swoop_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};

class CLASS(Helmet_Phase1_Tyrant): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Tyrant')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Tyrant_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };

    GVAR(isCustom) = TRUE;
    EGVAR(armor,nvCanToggle) = TRUE;
    EGVAR(armor,nvHelmetOff) = QCLASS(Helmet_Phase1_Tyrant);
    EGVAR(armor,nvHelmetOn) = QCLASS(Helmet_Phase1_TyrantCrimson);
};
class CLASS(Helmet_Phase1_TyrantCrimson): CLASS(Helmet_Phase1_Tyrant)
{
    SCOPE_HIDDEN;
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Tyrant_camo1_co.paa),
        QPATHTOF(data\visors\Crimson_camo2_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
        "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
    };
};

class CLASS(Helmet_Phase1_Woods): CLASS(Helmet_Phase1_Base)
{
    displayName = "[KC] INF P1 Helm ('Woods')";
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\helmets\phase1\Woods_camo1_co.paa),
        "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
        "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
    };
};