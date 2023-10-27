class BNA_KC_TU_Unit_Rifleman: BNA_KC_TU_Unit_Base
{
    // Scope
    scope = 2;
    scopeCurator = 2;

    displayName = "Rifleman";
    editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Rifleman.jpg";

    weapons[] = {"BNA_KC_E5", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5", "", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5"};
    items[] =
    {
        // Other
        ITEM_10("ACE_elasticBandage"),
        ITEM_4("ACE_tourniquet"),
        "FirstAidKit"
    };
    respawnItems[] =
    {
        // Other
        ITEM_10("ACE_elasticBandage"),
        ITEM_4("ACE_tourniquet"),
        "FirstAidKit"
    };

    linkedItems[] = {"SC_Helmet_EN_Desert", "SC_Vest_WD_Basic_Desert", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"SC_Helmet_EN_Desert", "SC_Vest_WD_Basic_Desert", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_TU_Backpack_Predef_Rifleman";
};

class BNA_KC_TU_Unit_Rifleman_Shield: BNA_KC_TU_Unit_Rifleman
{
    displayName = "Rifleman (Shield)";
    // editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Rifleman.jpg";

    weapons[] = {"BNA_KC_E5_Shielded", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5_Shielded", "", "Throw", "Put"};
};

class BNA_KC_TU_Unit_AT: BNA_KC_TU_Unit_Rifleman
{
    displayName = "Rifleman (AT)";
    editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Rifleman_AT.jpg";
    icon = "iconManAT";

    weapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AT", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AT", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AT"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AT"};

    linkedItems[] = {"SC_Helmet_WP_EUD_Desert_V", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"SC_Helmet_WP_EUD_Desert_V", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_TU_Backpack_Heavy_Predef_AT";
};

class BNA_KC_TU_Unit_AA: BNA_KC_TU_Unit_AT
{
    displayName = "Rifleman (AA)";

    weapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AA", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AA", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AA"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AA"};
    backpack = "BNA_KC_TU_Backpack_Heavy_Predef_AA";
};

class BNA_KC_TU_Unit_AssaultHeavy: BNA_KC_TU_Unit_Rifleman
{
    displayName = "Heavy Assault";
    editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\AssaultHeavy.jpg";
    icon = "iconManMG";

    weapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5C"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5C"};

    linkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Heavy_Desert", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Heavy_Desert", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_TU_Backpack_Assault_Predef_Heavy";
};

class BNA_KC_TU_Unit_AssaultMedium: BNA_KC_TU_Unit_AssaultHeavy
{
    displayName = "Medium Assault";
    editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\AssaultMedium.jpg";
    linkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_TU_Backpack_Assault_Predef_Medium";
};

class BNA_KC_TU_Unit_SL: BNA_KC_TU_Unit_Rifleman
{
    displayName = "Squad Leader";
    editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\SL.jpg";
    icon = "iconManLeader";

    linkedItems[] = {"SC_Helmet_WD_Desert_V", "SC_Vest_SMR_Desert", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"SC_Helmet_WD_Desert_V", "SC_Vest_SMR_Desert", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_TU_Backpack_RTO_Predef_SL";
};

class BNA_KC_TU_Unit_Melee: BNA_KC_TU_Unit_Base
{
    // Scope
    scope = 2;
    scopeCurator = 2;

    displayName = "Swordsman (Rush)";
    editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Melee.jpg";

    weapons[] = {"", "WBK_SciFi_Sword_2", "Throw", "Put"};
    respawnWeapons[] = {"", "WBK_SciFi_Sword_2", "Throw", "Put"};
    magazines[] = {"WBK_Cybercrystal"};
    respawnMagazines[] = {"WBK_Cybercrystal"};

    linkedItems[] = {"SC_Helmet_WP_Desert", "SC_Vest_WP_Light_Desert", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"SC_Helmet_WP_Desert", "SC_Vest_WP_Light_Desert", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_TU_Backpack_Heavy";
};