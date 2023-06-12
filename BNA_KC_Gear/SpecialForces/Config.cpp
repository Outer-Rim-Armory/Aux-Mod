#include "CfgPatches.hpp"

class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class lsd_gar_arc_helmet;
    class ls_gar_phase1Arf_helmet;
    class ls_gar_barc_helmet;

    class BNA_KC_Helmet_ARC_Base: lsd_gar_arc_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF ARC Helm";
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_ARC.paa",
            "lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_ARF_Base: ls_gar_phase1Arf_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF ARF Helm";
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_ARF.paa",
            "",
            "ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
        };
    };

    class BNA_KC_Helmet_BARC_Base: ls_gar_barc_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF BARC Helm";
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_BARC.paa",
            "ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class SWLB_clone_arc_armor: SWLB_clone_basic_armor
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo;
        }
    };

    class BNA_KC_Vest_ARC: SWLB_clone_arc_armor
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF ARC Vest";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\SpecialForces\Data\Vests\BNA_KC_Vest_ARC_Chest.paa",
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Officer.paa"
        };

        class ItemInfo: ItemInfo
        {
            vestType = "Rebreather";
            class HitpointsProtectionInfo
            {
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.20000001;
                };
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.10000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passThrough = 0.10000001;
                };
            };
        };
    };
};


class CfgVehicles
{
    #include "Helmets_Placeable.hpp"
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_Unit_Phase1_Base;

    class BNA_KC_Unit_ARC: BNA_KC_Unit_Phase1_Base
    {
        editorSubcategory = "BNA_KC_SF";
        // editorPreview = "BNA_KC_Gear\SpecialForces\Data\UI\BNA_KC_Preview_ARC";

        displayName = "[KC] SF ARC Trooper";

        uniformClass = "BNA_KC_Uniform_CT";

        // Unit Properties
        // canDeactivateMines = true;  // Explosives Specialist
        // attendant = 1;              // Medic

        // Loadout
        linkedItems[] =
        {
            "BNA_KC_Helmet_ARC_Base", "BNA_KC_NVG_Rangefinder", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud", "BNA_KC_Vest_Arc"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_ARC_Base", "BNA_KC_NVG_Rangefinder", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud", "BNA_KC_Vest_Arc"
        };
        backpack = "BNA_KC_Backpack_ARC";
    };

    class BNA_KC_Unit_ARF: BNA_KC_Unit_Phase1_Base
    {
        editorSubcategory = "BNA_KC_SF";
        // editorPreview = "BNA_KC_Gear\SpecialForces\Data\UI\BNA_KC_Preview_ARF";

        displayName = "[KC] SF ARF Trooper";

        uniformClass = "BNA_KC_Uniform_CT";

        // Unit Properties
        // canDeactivateMines = true;  // Explosives Specialist
        // attendant = 1;              // Medic

        // Loadout
        linkedItems[] =
        {
            "BNA_KC_Helmet_ARF_Base", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud", "SWLB_clone_basic_armor"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_ARF_Base", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud", "SWLB_clone_basic_armor"
        };
        backpack = "BNA_KC_Backpack";
    };

    class BNA_KC_Unit_BARC: BNA_KC_Unit_Phase1_Base
    {
        editorSubcategory = "BNA_KC_SF";
        // editorPreview = "BNA_KC_Gear\SpecialForces\Data\UI\BNA_KC_Preview_BARC";

        displayName = "[KC] SF BARC Trooper";

        uniformClass = "BNA_KC_Uniform_CT";

        // Loadout
        linkedItems[] =
        {
            "BNA_KC_Helmet_BARC_Base", "BNA_KC_NVG_Visor", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud", "SWLB_clone_recon_armor"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_BARC_Base", "BNA_KC_NVG_Visor", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr", "lsd_gar_p2Interior_hud", "SWLB_clone_recon_armor"
        };
        backpack = "BNA_KC_Backpack";
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class SWLB_clone_arc_backpack;

    class BNA_KC_Backpack_ARC: SWLB_clone_arc_backpack
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] ARC Trooper Backpack";
        maximumLoad = 400;
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SF
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        
        scope = 2;
        scopeCurator = 2;

        displayName = "Special Forces";
    };

    class BNA_KC_Objects_Helmets_SF
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Placeable Helmets - Special Forces";
    };
};