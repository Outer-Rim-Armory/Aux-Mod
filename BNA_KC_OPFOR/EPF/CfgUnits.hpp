class BNA_KC_TU_Unit_Rifleman;
class BNA_KC_EPF_Unit_Rifleman: BNA_KC_TU_Unit_Rifleman
{
    faction = "BNA_KC_OPFOR_EPF";
    uniformClass = "BNA_KC_EPF_Uniform";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_green_co.paa"};
    editorPreview = "\BNA_KC_OPFOR\EPF\Data\Previews\Rifleman.jpg";

    linkedItems[] = {"BNA_KC_EPF_Helmet", "BNA_KC_EPF_Vest", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet", "BNA_KC_EPF_Vest", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_EPF_Backpack_Predef_Rifleman";
};

class BNA_KC_EPF_Unit_Rifleman_Shield: BNA_KC_EPF_Unit_Rifleman
{
    displayName = "Rifleman (Shield)";
    editorPreview = "\BNA_KC_OPFOR\EPF\Data\Previews\Rifleman_Shield.jpg";

    weapons[] = {"BNA_KC_E5_Shielded", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5_Shielded", "", "Throw", "Put"};
};

class BNA_KC_EPF_Unit_AT: BNA_KC_EPF_Unit_Rifleman
{
    displayName = "Rifleman (AT)";
    editorPreview = "\BNA_KC_OPFOR\EPF\Data\Previews\Rifleman_AT.jpg";
    icon = "iconManAT";

    weapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AT", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AT", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AT"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AT"};

    linkedItems[] = {"BNA_KC_EPF_Helmet_Visor_Goggles", "BNA_KC_EPF_Vest_AssaultMedium", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Visor_Goggles", "BNA_KC_EPF_Vest_AssaultMedium", LINKED_ITEMS_RADIO};
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
    editorPreview = "\BNA_KC_OPFOR\EPF\Data\Previews\AssaultHeavy.jpg";
    icon = "iconManMG";

    weapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};
    respawnWeapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};

    magazines[] = {"Aux12thFleet_Mag_E5C"};
    respawnMagazines[] = {"Aux12thFleet_Mag_E5C"};

    linkedItems[] = {"BNA_KC_EPF_Helmet_Assault", "BNA_KC_EPF_Vest_AssaultHeavy", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Assault", "BNA_KC_EPF_Vest_AssaultHeavy", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_EPF_Backpack_Assault_Predef_Heavy";
};

class BNA_KC_EPF_Unit_AssaultMedium: BNA_KC_EPF_Unit_AssaultHeavy
{
    displayName = "Medium Assault";
    editorPreview = "\BNA_KC_OPFOR\EPF\Data\Previews\AssaultMedium.jpg";
    linkedItems[] = {"BNA_KC_EPF_Helmet_Assault", "BNA_KC_EPF_Vest_AssaultMedium", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Assault", "BNA_KC_EPF_Vest_AssaultMedium", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_EPF_Backpack_Assault_Predef_Medium";
};

class BNA_KC_EPF_Unit_SL: BNA_KC_EPF_Unit_Rifleman
{
    displayName = "Squad Leader";
    editorPreview = "\BNA_KC_OPFOR\EPF\Data\Previews\SL.jpg";
    icon = "iconManLeader";

    linkedItems[] = {"BNA_KC_EPF_Helmet_Heavy", "BNA_KC_EPF_Vest_Medium", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Heavy", "BNA_KC_EPF_Vest_Medium", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_EPF_Backpack_RTO_Predef_SL";
};

class BNA_KC_TU_Unit_Melee;
class BNA_KC_EPF_Unit_Melee: BNA_KC_TU_Unit_Melee
{
    faction = "BNA_KC_OPFOR_EPF";
    uniformClass = "BNA_KC_EPF_Uniform";
    hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_green_co.paa"};
    editorPreview = "\BNA_KC_OPFOR\EPF\Data\Previews\Melee.jpg";

    linkedItems[] = {"BNA_KC_EPF_Helmet_Visor", "BNA_KC_EPF_Vest", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Visor", "BNA_KC_EPF_Vest", LINKED_ITEMS_RADIO};
    backpack = "BNA_KC_EPF_Backpack_Heavy";
};

class BNA_KC_EPF_Unit_Presidente: BNA_KC_EPF_Unit_Rifleman
{
    // Editor Properties
    editorSubcategory = "BNA_KC_SubCat_Special";

    displayName = "El Presidente"
    uniformClass = "BNA_KC_EPF_Uniform_Presidente";

    model = "\a3\Characters_F_AoW\Uniforms\ParadeUniform_01_F";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "ribbon", "nametag"};
    hiddenSelectionsMaterials[] = {"", "", "\a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_Decorated_01_US.rvmat"};
    hiddenSelectionsTextures[] =
    {
        "\a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_01_US_CO.paa",
        "\a3\Characters_F_AoW\Uniforms\Data\ParadeUniform_01_US_CO.paa",
        "\a3\characters_f_aow\uniforms\data\ParadeUniform_Decorated_01_US_CO.paa",
        "\a3\characters_f_aow\uniforms\data\Ribbon_01_US_CO.paa"
    };

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
    linkedItems[] = {"BNA_KC_EPF_Helmet_Presidente", "OPTRE_Glasses_Cigar", LINKED_ITEMS_RADIO};
    respawnLinkedItems[] = {"BNA_KC_EPF_Helmet_Presidente", "OPTRE_Glasses_Cigar", LINKED_ITEMS_RADIO};
    backpack = "";
};