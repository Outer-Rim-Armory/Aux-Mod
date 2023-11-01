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
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 0;
        scopeArsenal = 0;

        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class ItemInfo;
    };

    class BNA_KC_Helmet_Phase1_Base: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF P1 Helm (Base)";

        model = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
        hiddenSelections[] = {"camo1", "visor", "illum"};
        hiddenSelectionsTextures[] =
        {
            "\ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa",
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

    class BNA_KC_Helmet_Phase2_Base: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF P2 Helm (Base)";

        model = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
        hiddenSelections[] = {"camo1", "visor"};
        hiddenSelectionsTextures[] =
        {
            "\ls_armor_bluefor\helmet\gar\phase2\data\helmet_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Insulated: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Snow Helm (Trooper)";

        model = "\ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Helmets\Insulated\Helmet_Insulated.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa"; // Replace with Insulated picture when made

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo1"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
        };
    };

    #include "P1_Helmets.hpp"
    #include "P2_Helmets.hpp"

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_blueforUniform_base;
    class ls_gar_phase2_uniform: ls_blueforUniform_base
    {
        class ItemInfo;
    };

    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Armor (Base)";
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Phase1_Base";
            uniformType = "Neopren";
        };
    };

    class BNA_KC_Uniform_Insulated: BNA_KC_Uniform_Base
    {
        displayName = "[KC] INF Snow Armor (Trooper)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Insulated_Trooper";
        };
    };

    #include "Uniforms.hpp"

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class BNA_KC_Vest_Basic: SWLB_clone_basic_armor
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Vest 01 (Trooper)";

        class ItemInfo: ItemInfo
        {
            containerClass = "Supply100";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 0;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 12;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 12;
                    passThrough = 0.3;
                };
            };
        };
    };

    #include "Vests.hpp"

    // ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
    class ls_nvg_base;
    class lsd_gar_standard_nvg: ls_nvg_base
    {
        class ItemInfo;
    };
    class BNA_KC_NVG_Chip: lsd_gar_standard_nvg
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone NVG Chip";

        // Night Vision / Thermal Settings
        visionMode[] = {"Normal", "NVG", "TI"};
        thermalMode[] = {0}; // White Hot

        // Remove the model and textures
        model = "\A3\weapons_F\ammo\mag_univ.p3d"; // Physical model
        modelOptics = "\BNA_KC_Gear\Infantry\Data\Models\empty_model.p3d"; // NVG Overlay
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {};
            uniformModel = "\BNA_KC_Gear\Infantry\Data\Models\empty_model.p3d";
            modelOff = "\BNA_KC_Gear\Infantry\Data\Models\empty_model.p3d";
        };
    };

    class BNA_KC_NVG_Visor: BNA_KC_NVG_Chip
    {
        displayName = "[KC] Clone P2 NVG Visor";

        model = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\NVGs\NVG_Visor.paa"
        };
        picture = "\lsd_equipment_bluefor\nvg\gar\_ui\icon_SWLB_clone_nvg_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
            modelOff = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
        };
    };
    class BNA_KC_NVG_Visor_v2: BNA_KC_NVG_Visor
    {
        displayName = "[KC] Clone P2 NVG Visor (v2)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\NVGs\NVG_Visor_v2.paa"
        };
    };

    class BNA_KC_NVG_Rangefinder: BNA_KC_NVG_Chip
    {
        displayName = "[KC] Clone P2 Rangefinder (CS+)";

        model = "\lsd_equipment_bluefor\nvg\gar\lsd_gar_rangefinder_nvg_on.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\NVGs\NVG_Rangefinder.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_rangefinder_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo1"};
            uniformModel = "\lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_rangefinder_nvg_on.p3d";
            modelOff = "\lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_rangefinder_nvg_off.p3d";
        };
    };

    class BNA_KC_NVG_Officer: BNA_KC_NVG_Chip
    {
        displayName = "[KC] Clone P2 Officer Visor (WO+)";

        model = "\SWLB_clones\SWLB_clone_ccVisor.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\NVGs\NVG_Officer.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\SWLB_clones\SWLB_clone_ccVisor.p3d";
            modelOff = "\SWLB_clones\SWLB_clone_ccVisor.p3d";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class lsd_gar_trooper_phase1;

    class BNA_KC_Unit_Base: lsd_gar_trooper_phase1
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 0;
        scopeCurator = 0;

        // Editor Properties
        faction = "BNA_KC_Faction";

        displayName = "INF Trooper (Base)"
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
            ITEM_11("Aux12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            ITEM_2("Aux12thFleet_Mag_DC17"),
            // Stun rounds would go here
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("Aux12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            ITEM_2("Aux12thFleet_Mag_DC17"),
            // Stun rounds would go here
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        items[] =
        {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            // Other
            ITEM_3("ACE_CableTie"),
            "ACE_EntrenchingTool",
            "ItemcTabHCam",
            "ACE_IR_Strobe_Item",
            "ACE_Flashlight_XL50",
            "ACE_MapTools"
        };
        respawnItems[] =
        {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            // Other
            ITEM_3("ACE_CableTie"),
            "ACE_EntrenchingTool",
            "ItemcTabHCam",
            "ACE_IR_Strobe_Item",
            "ACE_Flashlight_XL50",
            "ACE_MapTools"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
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
        editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase1\Base.jpg";

        displayName = "INF P1 Trooper (Base)"

        uniformClass = "BNA_KC_Uniform_Base";
    };

    class BNA_KC_Unit_Phase2_Base: BNA_KC_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Properties
        editorSubcategory = "BNA_KC_INF_P2";
        editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\Base.jpg";

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
            "BNA_KC_Helmet_Phase2_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };

    class BNA_KC_Unit_Insulated_Trooper: BNA_KC_Unit_Phase2_Base
    {
        displayName = "INF Snow - Trooper";
        editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Trooper_Insulated.jpg";

        // Uniform Model & Textures
        uniformClass = "BNA_KC_Uniform_Insulated";
        model = "\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
        hiddenSelections[] = {"_upper", "_lower", "_undersuit"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\Uniform_Insulated_Upper.paa",
            "\BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\Uniform_Insulated_Lower.paa",
            "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };

        // Inventory
        linkedItems[] =
        {
            "BNA_KC_Helmet_Insulated", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Insulated", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };

    #include "P1_Units.hpp"
    #include "P2_Units.hpp"

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class SWLB_clone_backpack;

    class BNA_KC_Backpack: SWLB_clone_backpack
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        maximumLoad = 400;

        displayName = "[KC] Clone Trooper Backpack";

        picture = "\BNA_KC_Gear\Infantry\Data\UI\Backpack_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack.paa", // Main Texture
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack.paa", // Cover
            "",                                                  // Heavy
            "",                                                  // Medic
            ""                                                   // RTO
        };
    };

    class BNA_KC_Backpack_Invisible: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Backpack (Invisible)";

        // Remove the model and textures (invisible)
        picture = "\BNA_KC_Gear\Infantry\Data\UI\Blank.paa";
        model = "\BNA_KC_Gear\Infantry\Data\Models\empty_model.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class BNA_KC_Backpack_Heavy: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Heavy Backpack";

        picture = "\BNA_KC_Gear\Infantry\Data\UI\Backpack_Heavy_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack.paa",         // Main Texture
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack.paa",         // Cover
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Heavy
            "",                                                          // Medic
            ""                                                           // RTO
        };
    };

    class BNA_KC_Backpack_Radio: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Radio Backpack";

        picture = "\BNA_KC_Gear\Infantry\Data\UI\Backpack_Radio_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack.paa",        // Main Texture
            "",                                                         // Cover
            "",                                                         // Heavy
            "",                                                         // Medic
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa" // RTO
        };

        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class BNA_KC_Backpack_Radio_Mini: BNA_KC_Backpack_Radio
    {
        displayName = "[KC] Clone Commander Radio Backpack";

        model = "\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
        hiddenSelections[] = {"main", "accumulator"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack_Radio_Mini.paa",
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack_Radio_Mini_Accumulator.paa"
        };
        picture = "\BNA_KC_Gear\Infantry\Data\UI\Backpack_Radio_Mini_UI.paa";
    };

    class BNA_KC_Backpack_Radio_White_Mini: BNA_KC_Backpack_Radio_Mini
    {
        displayName = "[KC] Clone Commander Radio Backpack (White)";

        hiddenSelectionsTextures[] =
        {
            "\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_co.paa",
            "\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
        };
        picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
    };

    class BNA_KC_Backpack_Radio_Invisible: BNA_KC_Backpack_Radio
    {
        displayName = "[KC] Clone Trooper Radio Backpack (Invisible)";

        picture = "\BNA_KC_Gear\Infantry\Data\UI\Blank.paa";
        model = "\BNA_KC_Gear\Infantry\Data\Models\empty_model.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class BNA_KC_Backpack_Medic: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Medic Backpack";

        picture = "\BNA_KC_Gear\Infantry\Data\UI\Backpack_Medic_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack_Medic.paa",   // Main Texture
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Cover
            "",                                                          // Heavy
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Medic
            ""                                                           // RTO
        };
    };

    class BNA_KC_Backpack_Medic_Heavy: BNA_KC_Backpack_Heavy
    {
        displayName = "[KC] Clone Trooper Medic Heavy Backpack";

        picture = "\BNA_KC_Gear\Infantry\Data\UI\Backpack_Medic_Heavy_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack_Medic.paa",   // Main Texture
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Cover
            "\SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Heavy
            "",                                                          // Medic
            ""                                                           // RTO
        };
    };

    class BNA_KC_Backpack_Medic_Radio: BNA_KC_Backpack_Radio
    {
        displayName = "[KC] Clone Trooper Medic Radio Backpack";

        picture = "\BNA_KC_Gear\Infantry\Data\UI\Backpack_Medic_Radio_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Backpacks\Backpack_Medic.paa",  // Main Texture
            "",                                                         // Cover
            "",                                                         // Heavy
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Medic
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"  // RTO
        };
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_INF_P1
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Phase 1";
    };

    class BNA_KC_INF_P2
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Phase 2";
    };

    class BNA_KC_INF_Certs
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Specializations";
    };
};