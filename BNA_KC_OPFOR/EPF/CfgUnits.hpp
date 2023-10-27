class BNA_KC_TU_Unit_Rifleman;
class BNA_KC_EPF_Unit_Rifleman: BNA_KC_TU_Unit_Rifleman
{
    faction = "BNA_KC_OPFOR_EPF";
    uniformClass = "BNA_KC_EPF_Uniform";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_green_co.paa"};
    // editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Rifleman.jpg";

    linkedItems[] = {"BNA_KC_EPF_Helmet", "BNA_KC_EPF_Vest", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet", "BNA_KC_EPF_Vest", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_EPF_Backpack_Predef_Rifleman";
};

class BNA_KC_EPF_Unit_Rifleman_Shield: BNA_KC_EPF_Unit_Rifleman
{
    displayName = "Rifleman (Shield)";
    // editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Rifleman.jpg";

    weapons[] = {"BNA_KC_E5_Shielded", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5_Shielded", "", "Throw", "Put"};
};

class BNA_KC_EPF_Unit_AT: BNA_KC_EPF_Unit_Rifleman
{
    displayName = "Rifleman (AT)";
    // editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Rifleman_AT.jpg";
    icon = "iconManAT";

    weapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AT", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AT", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AT"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AT"};

    linkedItems[] = {"BNA_KC_EPF_Helmet_Visor_Goggles", "BNA_KC_EPF_Vest_AssaultMedium", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Visor_Goggles", "BNA_KC_EPF_Vest_AssaultMedium", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_EPF_Backpack_Heavy_Predef_AT";
};

class BNA_KC_EPF_Unit_AA: BNA_KC_EPF_Unit_AT
{
    displayName = "Rifleman (AA)";

    weapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AA", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AA", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AA"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AA"};
    backpack = "BNA_KC_EPF_Backpack_Heavy_Predef_AA";
};

class BNA_KC_EPF_Unit_AssaultHeavy: BNA_KC_EPF_Unit_Rifleman
{
    displayName = "Heavy Assault";
    // editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\AssaultHeavy.jpg";
    icon = "iconManMG";

    weapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5C"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5C"};

    linkedItems[] = {"BNA_KC_EPF_Helmet_Assault", "BNA_KC_EPF_Vest_AssaultHeavy", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Assault", "BNA_KC_EPF_Vest_AssaultHeavy", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_EPF_Backpack_Assault_Predef_Heavy";
};

class BNA_KC_EPF_Unit_AssaultMedium: BNA_KC_EPF_Unit_AssaultHeavy
{
    displayName = "Medium Assault";
    // editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\AssaultMedium.jpg";
    linkedItems[] = {"BNA_KC_EPF_Helmet_Assault", "BNA_KC_EPF_Vest_AssaultMedium", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Assault", "BNA_KC_EPF_Vest_AssaultMedium", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_EPF_Backpack_Assault_Predef_Medium";
};

class BNA_KC_EPF_Unit_SL: BNA_KC_EPF_Unit_Rifleman
{
    displayName = "Squad Leader";
    // editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\SL.jpg";
    icon = "iconManLeader";

    linkedItems[] = {"BNA_KC_EPF_Helmet_Heavy", "BNA_KC_EPF_Vest_Medium", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Heavy", "BNA_KC_EPF_Vest_Medium", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_EPF_Backpack_RTO_Predef_SL";
};

class BNA_KC_TU_Unit_Melee;
class BNA_KC_EPF_Unit_Melee: BNA_KC_TU_Unit_Melee
{
    faction = "BNA_KC_OPFOR_EPF";
    uniformClass = "BNA_KC_EPF_Uniform";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_green_co.paa"};
    // editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Melee.jpg";

    linkedItems[] = {"BNA_KC_EPF_Helmet_Visor", "BNA_KC_EPF_Vest", BASE_LINKED_ITEMS};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Visor", "BNA_KC_EPF_Vest", BASE_LINKED_ITEMS};
    backpack = "BNA_KC_EPF_Backpack_Heavy";
};