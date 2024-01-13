class CfgVehicles
{
    class CLASS(INDEP_Unit_Base);
    class CLASS(GM_Unit_Base): CLASS(INDEP_Unit_Base)
    {
        SCOPE_HIDDEN;
        faction = QCLASS(Faction_GM);
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T1);

        items[] =
        {
            // Medical
            ITEM_20("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };
        respawnItems[] =
        {
            // Medical
            ITEM_20("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        uniformClass = QCLASS(GM_Uniform);
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\ls_armor_greenfor\uniform\mandalorian\undersuit\data\uniform_undersuit_co.paa"};
    };

    class CLASS(GM_Unit_Rifleman): CLASS(GM_Unit_Base)
    {
        SCOPE_PUBLIC;

        displayName = "Rifleman";
        editorPreview = EDITOR_PREVIEW(GM_Unit_Rifleman);

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_LW38_Green)};
        respawnMagazines[] = {QCLASS(Mag_LW38_Green)};

        linkedItems[] = {QCLASS(GM_Helmet), QCLASS(GM_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet), QCLASS(GM_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Backpack_Predef_Rifleman);
    };
    class CLASS(GM_Unit_Rifleman_T2): CLASS(GM_Unit_Rifleman)
    {
        displayName = "Veteran Rifleman";
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T2);
        editorPreview = EDITOR_PREVIEW(GM_Unit_Rifleman_T2);
        linkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Veteran_Backpack_Predef_Rifleman);
    };
    class CLASS(GM_Unit_Rifleman_T3): CLASS(GM_Unit_Rifleman_T2)
    {
        displayName = "Elite Rifleman";
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T3);
        editorPreview = EDITOR_PREVIEW(GM_Unit_Rifleman_T3);
        linkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Elite_Backpack_Predef_Rifleman);
    };

    class CLASS(GM_Unit_AT): CLASS(GM_Unit_Rifleman)
    {
        displayName = "Rifleman (AT)";
        editorPreview = EDITOR_PREVIEW(GM_Unit_AT);
        icon = "iconManAT";

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "SC_MPML", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "SC_MPML", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_LW38_Green), "SC_MPML_M_AT"};
        respawnMagazines[] = {QCLASS(Mag_LW38_Green), "SC_MPML_M_AT"};

        backpack = QCLASS(GM_Backpack_Heavy_Predef_AT);
    };
    class CLASS(GM_Unit_AT_T2): CLASS(GM_Unit_AT)
    {
        displayName = "Veteran Rifleman (AT)";
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T2);
        editorPreview = EDITOR_PREVIEW(GM_Unit_AT_T2);

        weapons[] = {QCLASS(LW38_Green_Scoped), "", "3AS_PLX1_F", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(LW38_Green_Scoped), "", "3AS_PLX1_F", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_LW38_Green), "3AS_JLTS_MK43_AT"};
        respawnMagazines[] = {QCLASS(Mag_LW38_Green), "3AS_JLTS_MK43_AT"};

        linkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Veteran_Backpack_Heavy_Predef_AT);
    };
    class CLASS(GM_Unit_AT_T3): CLASS(GM_Unit_AT_T2)
    {
        displayName = "Elite Rifleman (AT)";
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T3);
        editorPreview = EDITOR_PREVIEW(GM_Unit_AT_T3);
        linkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Elite_Backpack_Heavy_Predef_AT);
    };

    class CLASS(GM_Unit_AA): CLASS(GM_Unit_AT)
    {
        displayName = "Rifleman (AA)";

        magazines[] = {QCLASS(Mag_LW38_Green), "SC_MPML_M_AA"};
        respawnMagazines[] = {QCLASS(Mag_LW38_Green), "SC_MPML_M_AA"};

        backpack = QCLASS(GM_Backpack_Heavy_Predef_AA);
    };
    class CLASS(GM_Unit_AA_T2): CLASS(GM_Unit_AT_T2)
    {
        displayName = "Veteran Rifleman (AA)";

        magazines[] = {QCLASS(Mag_LW38_Green), "3AS_JLTS_MK39_AA"};
        respawnMagazines[] = {QCLASS(Mag_LW38_Green), "3AS_JLTS_MK39_AA"};

        backpack = QCLASS(GM_Veteran_Backpack_Heavy_Predef_AA);
    };
    class CLASS(GM_Unit_AA_T3): CLASS(GM_Unit_AT_T3)
    {
        displayName = "Elite Rifleman (AA)";

        magazines[] = {QCLASS(Mag_LW38_Green), "3AS_JLTS_MK39_AA"};
        respawnMagazines[] = {QCLASS(Mag_LW38_Green), "3AS_JLTS_MK39_AA"};

        backpack = QCLASS(GM_Elite_Backpack_Heavy_Predef_AA);
    };

    class CLASS(GM_Unit_Marksman): CLASS(GM_Unit_Rifleman)
    {
        displayName = "Marksman";
        editorPreview = EDITOR_PREVIEW(GM_Unit_Marksman);
        icon = "LSiconMarksman";

        weapons[] = {QCLASS(HI12), "", "Throw", "Put"};
        respawnWeapons[] = {QCLASS(HI12), "", "Throw", "Put"};

        magazines[] = {QCLASS(Mag_HI12)};
        respawnMagazines[] = {QCLASS(Mag_HI12)};

        linkedItems[] = {QCLASS(GM_Helmet), QCLASS(GM_Vest), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet), QCLASS(GM_Vest), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Backpack_Predef_Marksman);
    };
    class CLASS(GM_Unit_Marksman_T2): CLASS(GM_Unit_Marksman)
    {
        displayName = "Veteran Marksman";
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T2);
        editorPreview = EDITOR_PREVIEW(GM_Unit_Marksman_T2);
        linkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Veteran_Backpack_Predef_Marksman);
    };
    class CLASS(GM_Unit_Marksman_T3): CLASS(GM_Unit_Marksman_T2)
    {
        displayName = "Elite Marksman";
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T3);
        editorPreview = EDITOR_PREVIEW(GM_Unit_Marksman_T3);
        linkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Elite_Backpack_Predef_Marksman);
    };

    class CLASS(GM_Unit_SL): CLASS(GM_Unit_Rifleman)
    {
        displayName = "Squad Leader";
        editorPreview = EDITOR_PREVIEW(GM_Unit_SL);
        icon = "iconManLeader";

        linkedItems[] = {QCLASS(GM_Helmet_SL), QCLASS(_GM_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_SL), QCLASS(GM_Vest), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Backpack_RTO_Predef_SL);
    };
    class CLASS(GM_Unit_SL_T2): CLASS(GM_Unit_SL)
    {
        displayName = "Veteran Squad Leader";
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T2);
        editorPreview = EDITOR_PREVIEW(GM_Unit_SL_T2);
        linkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T2), QCLASS(GM_Vest_Medium), "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Veteran_Backpack_RTO_Predef_SL);
    };
    class CLASS(GM_Unit_SL_T3): CLASS(GM_Unit_SL_T2)
    {
        displayName = "Elite Squad Leader";
        editorSubcategory = QCLASS(SubCat_GM_Infantry_T3);
        editorPreview = EDITOR_PREVIEW(GM_Unit_SL_T3);
        linkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {QCLASS(GM_Helmet_T3), QCLASS(GM_Vest_Heavy), LINKED_ITEMS_RADIO};
        backpack = QCLASS(GM_Elite_Backpack_RTO_Predef_SL);
    };

    class CLASS(GM_Unit_Vex): CLASS(GM_Unit_Base)
    {
        SCOPE_PUBLIC;

        displayName = "General Vex";
        editorSubcategory = QCLASS(EdSubCat_Special);

        uniformClass = QCLASS(GM_Uniform_Vex);
        model = "\armor_unit\Merc_Armor_Tayrus.p3d";
        hiddenSelections[] = {"camo5", "camo6", "camoB", "undersuit"};
        hiddenSelectionsTextures[] =
        {
            "\armor_unit\Tayrus\Merc_Armor_Up_co.paa",
            "\armor_unit\Tayrus\Merc_Armor_HL_co.paa",
            "\armor_unit\Tayrus\Merc_Armur_CLoth_co.paa",
            "\armor_unit\Tayrus\Merc_uniform.paa"
        };

        linkedItems[] = {LINKED_ITEMS_RADIO};
        respawnLinkedItems[] = {LINKED_ITEMS_RADIO};
    };
};