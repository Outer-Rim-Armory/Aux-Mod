class CLASS(Unit_Jedi_Knight): CLASS(Unit_Base) {
    SCOPE_HIDDEN;
    displayName = "Jedi Knight";
    editorSubcategory = QEDSUBCAT(Special);
    icon = "iconManOfficer";

    uniformClass = QCLASS(Uniform_Jedi_Knight);
    model = "\ls\core\addons\characters_clone\uniforms\jediCommander\ls_uniform_jediCommander.p3d";
    hiddenSelections[] = {"armor_camo", "robe_camo", "belt_camo", "under_camo"};
    hiddenSelectionsTextures[] = {
        "\ls\core\addons\characters_clone\uniforms\jediCommander\data\armor_co.paa",
        "\ls\core\addons\characters_clone\uniforms\jediCommander\data\robes_co.paa",
        "\ls\core\addons\characters_clone\uniforms\jediCommander\data\belt_co.paa",
        "\ls\core\addons\characters_clone\uniforms\jediCommander\data\undersuit_co.paa"
    };

    // Inventory
    weapons[] = {
        "",
        "",
        "SWLB_clone_binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
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

    linkedItems[] = {QCLASS(Vest_Jedi), "SWLB_comlink", LINKED_ITEMS};
    respawnLinkedItems[] = {QCLASS(Vest_Jedi), "SWLB_comlink", LINKED_ITEMS};
    backpack = QCLASS(Backpack_Radio_Invis);
};

class CLASS(Unit_Jedi_Commander): CLASS(Unit_Jedi_Knight) {
    SCOPE_PUBLIC;
    displayName = "Jedi Commander";
    editorPreview = EDITOR_PREVIEW(Unit_Jedi_Commander);

    uniformClass = QCLASS(Uniform_Jedi_Commander);

    weapons[] = {
        "",
        "",
        "SWLB_clone_commander_binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "",
        "",
        "SWLB_clone_commander_binocular",
        "Throw",
        "Put"
    };
    magazines[] = {"Force_tir_1", "Force_tir_2", "Force_tir_3"};
    respawnMagazines[] = {"Force_tir_1", "Force_tir_2", "Force_tir_3"};
};
