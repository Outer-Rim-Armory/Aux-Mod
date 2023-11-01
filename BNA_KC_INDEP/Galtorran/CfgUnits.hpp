class BNA_KC_Galtorran_Unit_Rifleman: BNA_KC_Galtorran_Unit_Base
{
    // Scope
    scope = 2;
    scopeCurator = 2;

    displayName = "Rifleman";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T1\Rifleman.png";

    weapons[] = {"BNA_KC_LW38_Green_Scoped", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_LW38_Green_Scoped", "", "Throw", "Put"};

    magazines[] = {"BNA_KC_Mag_LW38_Green"};
    respawnMagazines[] = {"BNA_KC_Mag_LW38_Green"};

    linkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Backpack_Predef_Rifleman";
};
class BNA_KC_Galtorran_Unit_Rifleman_T2: BNA_KC_Galtorran_Unit_Rifleman
{
    displayName = "Veteran Rifleman";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T2\Rifleman.png";
    linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Veteran_Backpack_Predef_Rifleman";
};
class BNA_KC_Galtorran_Unit_Rifleman_T3: BNA_KC_Galtorran_Unit_Rifleman_T2
{
    displayName = "Elite Rifleman";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T3\Rifleman.png";
    linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Elite_Backpack_Predef_Rifleman";
};

class BNA_KC_Galtorran_Unit_AT: BNA_KC_Galtorran_Unit_Rifleman
{
    displayName = "Rifleman (AT)";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T1\Rifleman_AT.png";
    icon = "iconManAT";

    weapons[] = {"BNA_KC_LW38_Green_Scoped", "", "SC_MPML", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_LW38_Green_Scoped", "", "SC_MPML", "Throw", "Put"};

    magazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AT"};
    respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AT"};

    backpack = "BNA_KC_Galtorran_Backpack_Heavy_Predef_AT";
};
class BNA_KC_Galtorran_Unit_AT_T2: BNA_KC_Galtorran_Unit_AT
{
    displayName = "Veteran Rifleman (AT)";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T2\Rifleman_AT.png";

    weapons[] = {"BNA_KC_LW38_Green_Scoped", "", "3AS_PLX1_F", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_LW38_Green_Scoped", "", "3AS_PLX1_F", "Throw", "Put"};

    magazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK43_AT"};
    respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK43_AT"};

    linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Veteran_Backpack_Heavy_Predef_AT";
};
class BNA_KC_Galtorran_Unit_AT_T3: BNA_KC_Galtorran_Unit_AT_T2
{
    displayName = "Elite Rifleman (AT)";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T3\Rifleman_AT.png";
    linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Elite_Backpack_Heavy_Predef_AT";
};

class BNA_KC_Galtorran_Unit_AA: BNA_KC_Galtorran_Unit_AT
{
    displayName = "Rifleman (AA)";

    magazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AA"};
    respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AA"};

    backpack = "BNA_KC_Galtorran_Backpack_Heavy_Predef_AA";
};
class BNA_KC_Galtorran_Unit_AA_T2: BNA_KC_Galtorran_Unit_AT_T2
{
    displayName = "Veteran Rifleman (AA)";

    magazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK39_AA"};
    respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK39_AA"};

    backpack = "BNA_KC_Galtorran_Veteran_Backpack_Heavy_Predef_AA";
};
class BNA_KC_Galtorran_Unit_AA_T3: BNA_KC_Galtorran_Unit_AT_T3
{
    displayName = "Elite Rifleman (AA)";

    magazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK39_AA"};
    respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK39_AA"};

    backpack = "BNA_KC_Galtorran_Elite_Backpack_Heavy_Predef_AA";
};

class BNA_KC_Galtorran_Unit_Marksman: BNA_KC_Galtorran_Unit_Rifleman
{
    displayName = "Marksman";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T1\Marksman.png";
    icon = "LSiconMarksman";

    weapons[] = {"BNA_KC_HI12", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_HI12", "", "Throw", "Put"};

    magazines[] = {"BNA_KC_Mag_HI12"};
    respawnMagazines[] = {"BNA_KC_Mag_HI12"};

    linkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Backpack_Predef_Marksman";
};
class BNA_KC_Galtorran_Unit_Marksman_T2: BNA_KC_Galtorran_Unit_Marksman
{
    displayName = "Veteran Marksman";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T2\Marksman.png";
    linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_MVI_UL_CNM", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Veteran_Backpack_Predef_Marksman";
};
class BNA_KC_Galtorran_Unit_Marksman_T3: BNA_KC_Galtorran_Unit_Marksman_T2
{
    displayName = "Elite Marksman";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T3\Marksman.png";
    linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Elite_Backpack_Predef_Marksman";
};

class BNA_KC_Galtorran_Unit_SL: BNA_KC_Galtorran_Unit_Rifleman
{
    displayName = "Squad Leader";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T1\SL.png";
    icon = "iconManLeader";

    linkedItems[] = {"BNA_KC_Galtorran_Helmet_SL", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_SL", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Backpack_RTO_Predef_SL";
};
class BNA_KC_Galtorran_Unit_SL_T2: BNA_KC_Galtorran_Unit_SL
{
    displayName = "Veteran Squad Leader";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T2\SL.png";
    linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Veteran_Backpack_RTO_Predef_SL";
};
class BNA_KC_Galtorran_Unit_SL_T3: BNA_KC_Galtorran_Unit_SL_T2
{
    displayName = "Elite Squad Leader";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
    editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Prevews\T3\SL.png";
    linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_Galtorran_Elite_Backpack_RTO_Predef_SL";
};

// Special Units
class BNA_KC_Galtorran_Unit_Vex: BNA_KC_Galtorran_Unit_Base
{
    // Scope
    scope = 2;
    scopeCurator = 2;

    displayName = "General Vex";
    editorSubcategory = "BNA_KC_SubCat_Galtorran_Special";

    uniformClass = "BNA_KC_Galtorran_Uniform_Vex";
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