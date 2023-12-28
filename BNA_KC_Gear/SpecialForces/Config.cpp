#include "CfgPatches.hpp"
#include "\BNA_KC_Gear\Macros.hpp"


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

        model = "\lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
        hiddenSelections[] = {"camo1", "visor", "illum"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARC.paa",
            "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
        picture = "\lsd_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor"};
            uniformModel = "\lsd_armor_bluefor\helmet\gar\arc\lsd_gar_arc_helmet";
        };
    };
    class BNA_KC_Helmet_ARC_CamoBrown: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF ARC Helm - Brown Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARC_CamoBrown.paa",
            "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
    };
    class BNA_KC_Helmet_ARC_CamoGrey: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF ARC Helm - Grey Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARC_CamoGrey.paa",
            "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_ARC_v2: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF ARC Helm (v2)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARC_v2.paa",
            "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_ARC_Night: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF ARC Helm (Night)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARC_Night.paa",
            "\lsd_armor_bluefor\helmet\gar\arc\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_ARC_Imperial: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF ARC Helm (Imperial)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARC_Imperial.paa",
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Visors\Visor_ARC_Imperial.paa"
        };
    };

    class BNA_KC_Helmet_Phase1_ARC: BNA_KC_Helmet_ARC
    {
        displayName = "[KC] SF P1 ARC Helm";

        model = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
        hiddenSelections[] = {"camo1", "visor", "illum"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_P1_ARC.paa",
            "\ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor", "illum"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_ARF: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF ARF 01 Helm (Enlisted)";

        model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
        hiddenSelections[] = {"camo1", "camo2", "visor"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARF.paa", // Main Helmet
            "", // Flaps
            "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa" // Visor
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_arf_p1_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
        };

        subItems[] = {"BNA_KC_NVG_Chip"};
    };
    class BNA_KC_Helmet_ARF_CamoBrown: BNA_KC_Helmet_ARF
    {
        displayName = "[KC] SF ARF 01 Helm (Enlisted) - Brown Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARF_CamoBrown.paa",
            "",
            "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
        };
    };
    class BNA_KC_Helmet_ARF_CamoGrey: BNA_KC_Helmet_ARF
    {
        displayName = "[KC] SF ARF 01 Helm (Enlisted) - Grey Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARF_CamoGrey.paa",
            "",
            "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
        };
    };

    class BNA_KC_Helmet_ARF_v2: BNA_KC_Helmet_ARF
    {
        displayName = "[KC] SF ARF 01 Helm (Enlisted, v2)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_ARF_v2.paa",
            "",
            "\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
        };
    };

    class BNA_KC_Helmet_BARC: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] SF BARC Helm";

        model = "\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
        hiddenSelections[] = {"camo1", "visor"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Helmets\Helmet_BARC.paa",
            "\ls_armor_bluefor\helmet\gar\barc\data\visor_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_barc_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
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

        model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Vests\Vest_ARC_Chest.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Officer.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_arc_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
            containerClass = "Supply200";

            class HitpointsProtectionInfo
            {
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passThrough = 0.1;
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
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Officer.paa"
        };
    };

    class BNA_KC_Vest_ARC_v2: BNA_KC_Vest_Basic
    {
        displayName = "[KC] SF ARC Vest (v2)";

        model = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",
            "\SWLB_clones\data\officer_accessories_co.paa",
            "\SWLB_clones\data\light_accessories_co.paa",
            "\SWLB_clones\data\officer_accessories_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
        };
    };

    class BNA_KC_Vest_ARF: BNA_KC_Vest_Basic
    {
        displayName = "[KC] SF ARF Vest";

        model = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\SWLB_clones\data\officer_accessories_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_light_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2", "camo3"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
        };
    };

    class BNA_KC_Vest_ForceRecon: BNA_KC_Vest_Basic
    {
        displayName = "[KC] SF XX Vest (Force Recon)";

        model = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa",
            "\SWLB_clones\data\light_accessories_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
        };
    };

    class BNA_KC_Vest_ForceRecon_NCO: BNA_KC_Vest_ForceRecon
    {
        displayName = "[KC] SF XX Vest (Force Recon NCO)";

        model = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
        hiddenSelections[] = {"camo1", "camo2", "camo3"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",
            "\SWLB_clones\data\officer_accessories_co.paa",
            "\BNA_KC_Gear\Infantry\Data\Vests\Vest_Heavy_Accessories.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_nco_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2", "camo3"};
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
        };
    };

    class BNA_KC_Vest_ForceRecon_Officer: BNA_KC_Vest_ForceRecon
    {
        displayName = "[KC] SF XX Vest (Force Recon Officer)";

        model = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
        hiddenSelectionsTextures[] =
        {
            "\SWLB_clones\data\light_accessories_co.paa",
            "\SWLB_clones\data\officer_accessories_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_CEE\data\SWLB_CEE_Recon_Force_Officer.p3d";
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
        displayName = "ARC Trooper";
        editorSubcategory = "BNA_KC_SF";
        editorPreview = "\BNA_KC_Gear\SpecialForces\Data\Previews\ARC.jpg";

        uniformClass = "BNA_KC_Uniform_ARC";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Uniforms\Uniform_ARC_Upper.paa",
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Uniforms\Uniform_ARC_Lower.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_ARC", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_ARC", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "BNA_KC_Backpack_ARC";
    };

    class BNA_KC_Unit_ARC_Night: BNA_KC_Unit_ARC
    {
        displayName = "ARC Trooper (Night Camo)";
        editorPreview = "\BNA_KC_Gear\SpecialForces\Data\Previews\ARC_Night.jpg";

        uniformClass = "BNA_KC_Uniform_ARC_Night";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Uniforms\Uniform_ARC_Night_Upper.paa",
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Uniforms\Uniform_ARC_Night_Lower.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_ARC_Night", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_ARC_Night", "BNA_KC_Vest_Arc", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
    };

    class BNA_KC_Unit_ARF: BNA_KC_Unit_Phase2_Base
    {
        displayName = "ARF Trooper";
        editorSubcategory = "BNA_KC_SF";
        editorPreview = "\BNA_KC_Gear\SpecialForces\Data\Previews\ARF.jpg";

        uniformClass = "BNA_KC_Uniform_ARF";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Uniforms\Uniform_ARF_Upper.paa",
            "\BNA_KC_Gear\SpecialForces\Data\Textures\Uniforms\Uniform_ARF_Lower.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_ARF", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_ARF", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "BNA_KC_Backpack";
    };

    class BNA_KC_Unit_BARC: BNA_KC_Unit_Phase2_Base
    {
        displayName = "BARC Trooper";
        editorSubcategory = "BNA_KC_SF";
        editorPreview = "\BNA_KC_Gear\SpecialForces\Data\Previews\BARC.jpg";

        uniformClass = "BNA_KC_Uniform_CT";

        linkedItems[] =
        {
            "BNA_KC_Helmet_BARC", "SWLB_clone_recon_armor", "BNA_KC_NVG_Visor", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_BARC", "SWLB_clone_recon_armor", "BNA_KC_NVG_Visor", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
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

        model = "\SWLB_equipment\backpacks\SWLB_clone_arc_backpack.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] =
        {
            "\SWLB_equipment\backpacks\data\SWLB_clone_arc_backpack_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_arc_backpack_ca.paa";
    };
};


class CfgGlasses
{
    class ls_combatGoggles_base;
    class BNA_KC_Goggles_ARF_Flaps: ls_combatGoggles_base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        author = "SweMonkey and DartRuffian";
        displayName = "[KC] ARF Helmet Flaps";

        model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
        hiddenSelections[] = {"camo1", "camo2", "visor"};
        hiddenSelectionsTextures[] =
        {
            "", // Main Helmet
            "\ls_armor_bluefor\helmet\gar\arf\data\camo2_co.paa", // Flaps
            "" // Visor
        };
        picture = "\BNA_KC_Gear\SpecialForces\Data\Textures\UI\ARF_Flaps.paa";

        ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
        ACE_Overlay = "\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
        ACE_OverlayCracked = "\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
        ACE_OverlayDirt = "\A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
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