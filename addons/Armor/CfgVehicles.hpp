class CfgVehicles
{
    class lsd_gar_trooper_phase1;
    class BNA_KC_Unit_Base: lsd_gar_trooper_phase1
    {
        SCOPE_PRIVATE;
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        faction = "BNA_KC_Faction";

        displayName = "INF Trooper (Base)";
        uniformClass = "BNA_KC_Uniform_Base";

        // Inventory
        weapons[] =
        {
            "BNA_KC_DC15S",
            "BNA_KC_DC17",
            "SWLB_clone_binocular",
            "Throw",               // Allows the unit to throw grenades
            "Put"                  // Allows the unit to place explosives
        };
        respawnWeapons[] =
        {
            "BNA_KC_DC15S",
            "BNA_KC_DC17",
            "SWLB_clone_binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            // ITEM_11("Aux12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            // ITEM_2("Aux12thFleet_Mag_DC17"),
            // Stun rounds would go here
            // Grenades
            // ITEM_2("ls_mag_classC_thermalDet"),
            // ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            // ITEM_3("3AS_SmokeWhite"),
            // ITEM_3("3AS_SmokeBlue"),
            // ITEM_3("3AS_SmokeGreen")
        };
        respawnMagazines[] =
        {
            // Ammo
            // ITEM_11("Aux12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            // ITEM_2("Aux12thFleet_Mag_DC17"),
            // Stun rounds would go here
            // Grenades
            // ITEM_2("ls_mag_classC_thermalDet"),
            // ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            // ITEM_3("3AS_SmokeWhite"),
            // ITEM_3("3AS_SmokeBlue"),
            // ITEM_3("3AS_SmokeGreen")
        };
        items[] =
        {
            // Medical
            // ITEM_10("ACE_elasticBandage"),
            // ITEM_4("ACE_tourniquet"),
            // Other
            // ITEM_3("ACE_CableTie"),
            "ACE_EntrenchingTool",
            "ItemcTabHCam",
            "ACE_IR_Strobe_Item",
            "ACE_Flashlight_XL50",
            "ACE_MapTools"
        };
        respawnItems[] =
        {
            // Medical
            // ITEM_10("ACE_elasticBandage"),
            // ITEM_4("ACE_tourniquet"),
            // Other
            // ITEM_3("ACE_CableTie"),
            "ACE_EntrenchingTool",
            "ItemcTabHCam",
            "ACE_IR_Strobe_Item",
            "ACE_Flashlight_XL50",
            "ACE_MapTools"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "";
    };

    class BNA_KC_Unit_Phase1_Base: BNA_KC_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Properties
        editorSubcategory = "BNA_KC_INF_P1";
        editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase1_Base);

        displayName = "INF P1 Trooper (Base)";

        uniformClass = "BNA_KC_Uniform_Base";
    };

    class BNA_KC_Unit_Phase2_Base: BNA_KC_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Properties
        editorSubcategory = "BNA_KC_INF_P2";
        editorPreview = EDITOR_PREVIEW(BNA_KC_Unit_Phase2_Base);

        // Uniform textures would be applied here ; default textures listed
        uniformClass = "BNA_KC_Uniform_Base";
        hiddenSelectionsTextures[] =
        {
            "\ls_armor_bluefor\uniform\gar\phase2\data\camo1_co.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\camo2_co.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
    };

    #include "configs/Units_P1.hpp"
    #include "configs/Units_P2.hpp"
};