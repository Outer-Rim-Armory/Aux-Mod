#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_gar_phase2_uniform;
    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class BNA_KC_Uniform_Jedi_Commander: BNA_KC_Uniform_Base
    {
        displayName = "[KC] Jedi Commander Armor";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Jedi_Commander";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class BNA_KC_Vest_Basic;
    class BNA_KC_Vest_Jedi: BNA_KC_Vest_Basic
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Jedi Vest";
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class lsd_gar_jediCommander_base;
    class BNA_KC_Unit_Phase2_Base;
    class BNA_KC_Unit_Jedi_Commander: BNA_KC_Unit_Phase2_Base
    {
        displayName = "[KC] Jedi Commander";
        editorSubcategory = "BNA_KC_SubCat_Jedi";
        editorPreview = "";

        uniformClass = "BNA_KC_Uniform_Jedi_Commander";
        model = "lsd_armor_bluefor\uniform\gar\jediCommander\lsd_gar_jediCommander_uniform.p3d";
        hiddenSelections[] = { "armor_camo", "robe_camo", "belt_camo", "under_camo" };
        hiddenSelectionsTextures[] =
        {
            "lsd_armor_bluefor\uniform\gar\jediCommander\data\armor_co.paa",
            "lsd_armor_bluefor\uniform\gar\jediCommander\data\robes_co.paa",
            "lsd_armor_bluefor\uniform\gar\jediCommander\data\belt_co.paa",
            "lsd_armor_bluefor\uniform\gar\jediCommander\data\undersuit_co.paa"
        };

        // Inventory
        weapons[] =
        {
            "",
            "LFP_Lightsaber_Skywalker_b",
            "SWLB_clone_commander_binocular",
            "Throw",               // Allows the unit to throw grenades
            "Put"                  // Allows the unit to place explosives
        };
        respawnWeapons[] =
        {
            "",
            "LFP_Lightsaber_Skywalker_b",
            "SWLB_clone_commander_binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            "Force_tir_1",
            "Force_tir_2",
            "Force_tir_3",
        };
        respawnMagazines[] =
        {
            "Force_tir_1",
            "Force_tir_2",
            "Force_tir_3",
        };
        items[] = {};
        respawnItems[] = {};

        linkedItems[] =
        {
            "BNA_KC_Vest_Jedi", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Vest_Jedi", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        backpack = "BNA_KC_Backpack_Radio_Invisible";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Jedi
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Jedi Order";
    };
};