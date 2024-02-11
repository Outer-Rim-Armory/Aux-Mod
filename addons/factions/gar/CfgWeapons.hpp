class CfgWeapons
{
    class CLASS(Helmet_Phase1_Base);
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

    class CLASS(Helmet_Phase2_Base);
    class CLASS(Helmet_Phase2_Fil): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[KC] INF P2 Helm ('Fil')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\helmets\phase2\Fil_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_FilSquad): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[KC] INF P2 Helm ('Fil's Squad')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\helmets\phase2\FilSquad_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_HowzerBlue): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[KC] INF P2 Helm ('Howzer') [Blue]";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\helmets\phase2\HowzerBlue_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_HowzerBrown): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[KC] INF P2 Helm ('Howzer') [Brown]";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\helmets\phase2\HowzerBrown_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_91st_Ponds): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[91st] INF P2 Helm ('Ponds')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\helmets\phase2\Ponds_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

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

    class CLASS(Helmet_Phase2_CG): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[CG] INF P2 Helm";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\helmets\phase2\CG_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class CLASS(Helmet_Phase2_CG_Stone): CLASS(Helmet_Phase2_CG)
    {
        displayName = "[CG] INF P2 Helm ('Stone')";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\helmets\phase2\Stone_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class CLASS(Helmet_Phase2_187th): CLASS(Helmet_Phase2_Base)
    {
        displayName = "[187th] INF P2 Helm";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(SUBCOMPONENT\data\helmets\phase2\187th_camo1_co.paa),
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };

        EGVAR(custom_armor,isCustom) = TRUE;
    };

    class ls_gar_phase2_uniform;
    class CLASS(Uniform_Base): ls_gar_phase2_uniform
    {
        class ItemInfo;
    };
    class CLASS(Uniform_Fil): CLASS(Uniform_Base)
    {
        displayName = "[KC] INF Armor ('Fil')";
        EGVAR(custom_armor,isCustom) = TRUE;

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Fil);
        };
    };

    class CLASS(Uniform_FilSquad): CLASS(Uniform_Base)
    {
        displayName = "[KC] INF Armor ('Fil's Squad')";
        EGVAR(custom_armor,isCustom) = TRUE;

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_FilSquad);
        };
    };

    class CLASS(Uniform_HowzerBlue): CLASS(Uniform_Base)
    {
        displayName = "[KC] INF Armor ('Howzer') [Blue]";
        EGVAR(custom_armor,isCustom) = TRUE;

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Phase2_HowzerBlue);
        };
    };

    class CLASS(Uniform_HowzerBrown): CLASS(Uniform_Base)
    {
        displayName = "[KC] INF Armor ('Howzer') [Brown]";
        EGVAR(custom_armor,isCustom) = TRUE;

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Phase2_HowzerBrown);
        };
    };

    class CLASS(Uniform_91st_Ponds): CLASS(Uniform_Base)
    {
        displayName = "[91st] INF Armor ('Ponds')";
        EGVAR(custom_armor,isCustom) = TRUE;

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_91st_Ponds);
        };
    };

    class CLASS(Uniform_CG_Stone): CLASS(Uniform_Base)
    {
        displayName = "[CG] INF Armor ('Stone')";
        EGVAR(custom_armor,isCustom) = TRUE;

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_CG_Stone);
        };
    };

    class CLASS(Uniform_187th): CLASS(Uniform_Base)
    {
        displayName = "[187th] INF Armor";
        EGVAR(custom_armor,isCustom) = TRUE;

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_187th_Trooper);
        };
    };
};