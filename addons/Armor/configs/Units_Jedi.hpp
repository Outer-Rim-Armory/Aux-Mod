class BNA_KC_Unit_Jedi_Knight: BNA_KC_Unit_Base
{
    SCOPE_HIDDEN;
    displayName = "Jedi Knight";
    editorSubcategory = "BNA_KC_EdSubCat_Special";

    uniformClass = "BNA_KC_Uniform_Jedi_Knight";
    model = "\lsd_armor_bluefor\uniform\gar\jediCommander\lsd_gar_jediCommander_uniform.p3d";
    hiddenSelections[] = {"armor_camo", "robe_camo", "belt_camo", "under_camo"};
    hiddenSelectionsTextures[] =
    {
        "\lsd_armor_bluefor\uniform\gar\jediCommander\data\armor_co.paa",
        "\lsd_armor_bluefor\uniform\gar\jediCommander\data\robes_co.paa",
        "\lsd_armor_bluefor\uniform\gar\jediCommander\data\belt_co.paa",
        "\lsd_armor_bluefor\uniform\gar\jediCommander\data\undersuit_co.paa"
    };

    // Inventory
    weapons[] =
    {
        "",
        "",
        "SWLB_clone_binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] =
    {
        "",
        "",
        "SWLB_clone_binocular",
        "Throw",
        "Put"
    };
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};

    linkedItems[] = {"BNA_KC_Vest_Jedi", "SWLB_comlink", LINKED_ITEMS};
    respawnLinkedItems[] = {"BNA_KC_Vest_Jedi", "SWLB_comlink", LINKED_ITEMS};
    backpack = "BNA_KC_Backpack_Radio_Invisible";
};

class BNA_KC_Unit_Jedi_Commander: BNA_KC_Unit_Jedi_Knight
{
    SCOPE_PUBLIC;
    displayName = "Jedi Commander";
    editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Jedi_Commander);

    uniformClass = "BNA_KC_Uniform_Jedi_Commander";

    weapons[] =
    {
        "",
        "",
        "SWLB_clone_commander_binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] =
    {
        "",
        "",
        "SWLB_clone_commander_binocular",
        "Throw",
        "Put"
    };
    magazines[] = {"Force_tir_1", "Force_tir_2", "Force_tir_3"};
    respawnMagazines[] = {"Force_tir_1", "Force_tir_2", "Force_tir_3"};
};