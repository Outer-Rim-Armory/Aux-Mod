#include "CfgPatches.hpp"

class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_gar_phase2_helmet;
    class BNA_KC_Helmet_Base: ls_gar_phase2_helmet
    {
        class ItemInfo;
    };
    class BNA_KC_Helmet_ARC: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF ARC Helm";

        model = "lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
        hiddenSelections[] = { "camo1", "visor", "illum" };
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_ARC.paa",
            "lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
        picture = "\lsd_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor"};
            uniformModel = "lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
        };
    };
    class BNA_KC_Helmet_ARC_v2: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF ARC Helm (v2)";
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_ARC_v2.paa",
            "lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_ARC_Night: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF ARC Helm (Night)";
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_ARC_Night.paa",
            "lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_ARF: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF ARF 01 Helm (Enlisted)";

        model = "ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
        hiddenSelections[] = { "camo1", "camo2", "visor" };
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_ARF.paa", // Main Helmet
            "", // Flaps
            "ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa" // Visor
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_arf_p1_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "camo2", "visor" };
            uniformModel = "ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
        };

        subItems[] = { "BNA_KC_NVG_Chip" };
    };

    class BNA_KC_Helmet_ARF_v2: BNA_KC_Helmet_ARF
    {
        displayName = "[KC] SF ARF 01 Helm (Enlisted, v2)";
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_ARF_v2.paa",
            "",
            "ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
        };
    };

    class BNA_KC_Helmet_BARC: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF BARC Helm";

        model = "ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
        hiddenSelections[] = { "camo1", "visor" };
        hiddenSelectionsTextures[] = 
        {
            "BNA_KC_Gear\SpecialForces\Data\Helmets\BNA_KC_Helmet_BARC.paa",
            "ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_barc_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "visor" };
            uniformModel = "ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
        };
    };


    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_gar_phase2_uniform;
    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class BNA_KC_Uniform_ARC: BNA_KC_Uniform_Base
    {
        displayName = "[KC] SF ARC Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_ARC";
        };
    };
    class BNA_KC_Uniform_ARC_Night: BNA_KC_Uniform_Base
    {
        displayName = "[KC] SF ARC Uniform (Night)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_ARC_Night";
        };
    };

    class BNA_KC_Uniform_ARF: BNA_KC_Uniform_Base
    {
        displayName = "[KC] SF ARF Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_ARF";
        };
    };


    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class SWLB_clone_basic_armor;
    class BNA_KC_Vest_Basic: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class BNA_KC_Vest_ARC: BNA_KC_Vest_Basic
    {
        displayName = "[KC] SF ARC Vest";

        model = "SWLB_clones\SWLB_clone_arc_armor.p3d";
        hiddenSelections[] = { "camo1", "camo2" };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\SpecialForces\Data\Vests\BNA_KC_Vest_ARC_Chest.paa",
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Officer.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "camo2" };
            uniformModel = "SWLB_clones\SWLB_clone_arc_armor.p3d";
            containerClass = "Supply200";

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
                    hitpointName = "HitChest";
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
    class BNA_KC_Vest_ARC_Light: BNA_KC_Vest_ARC
    {
        displayName = "[KC] SF ARC Light Vest";
        hiddenSelectionsTextures[] =
        {
            "",
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Officer.paa"
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_Unit_Phase2_Base;
    class BNA_KC_Unit_ARC: BNA_KC_Unit_Phase2_Base
    {
        displayName = "[KC] SF ARC Trooper";
        editorSubcategory = "BNA_KC_SF";

        uniformClass = "BNA_KC_Uniform_ARC";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\SpecialForces\Data\Uniforms\BNA_KC_Uniform_ARC_Upper.paa",
            "BNA_KC_Gear\SpecialForces\Data\Uniforms\BNA_KC_Uniform_ARC_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_ARC", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_ARC", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        backpack = "BNA_KC_Backpack_ARC";
    };

    class BNA_KC_Unit_ARC_Night: BNA_KC_Unit_ARC
    {
        displayName = "[KC] SF ARC Trooper (Night Camo)";

        uniformClass = "BNA_KC_Uniform_ARC_Night";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\SpecialForces\Data\Uniforms\BNA_KC_Uniform_ARC_Night_Upper.paa",
            "BNA_KC_Gear\SpecialForces\Data\Uniforms\BNA_KC_Uniform_ARC_Night_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_ARC_Night", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_ARC_Night", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };

    class BNA_KC_Unit_ARF: BNA_KC_Unit_Phase2_Base
    {
        displayName = "[KC] SF ARF Trooper";
        editorSubcategory = "BNA_KC_SF";

        uniformClass = "BNA_KC_Uniform_ARF";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\SpecialForces\Data\Uniforms\BNA_KC_Uniform_ARF_Upper.paa",
            "BNA_KC_Gear\SpecialForces\Data\Uniforms\BNA_KC_Uniform_ARF_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_ARF", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_ARF", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        backpack = "BNA_KC_Backpack";
    };

    class BNA_KC_Unit_BARC: BNA_KC_Unit_Phase2_Base
    {
        displayName = "[KC] SF BARC Trooper";
        editorSubcategory = "BNA_KC_SF";

        uniformClass = "BNA_KC_Uniform_CT";

        linkedItems[] =
        {
            "BNA_KC_Helmet_BARC", "SWLB_clone_recon_armor", "BNA_KC_NVG_Visor", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_BARC", "SWLB_clone_recon_armor", "BNA_KC_NVG_Visor", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        backpack = "BNA_KC_Backpack";
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class BNA_KC_Backpack_Radio;
    class BNA_KC_Backpack_ARC: BNA_KC_Backpack_Radio
    {
        displayName = "[KC] ARC Trooper Backpack";

        model = "SWLB_equipment\backpacks\SWLB_clone_arc_backpack.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] =
        {
            "SWLB_equipment\backpacks\data\SWLB_clone_arc_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_arc_backpack_ca.paa";
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
};