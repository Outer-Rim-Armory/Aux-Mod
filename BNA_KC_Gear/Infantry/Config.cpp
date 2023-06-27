#include "CfgPatches.hpp"
#include "\BNA_KC_Gear\Macros.hpp" // Can ignore this error (if there is one in your IDE)


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_gar_phase1_helmet;
    class ls_gar_phase2_helmet;
    class ls_gar_engineer_helmet;
    class lsd_gar_airborne_helmet;
    class ls_gar_phase2insulated_helmet;

    class BNA_KC_Helmet_Phase1_Base: ls_gar_phase1_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF P1 Helm (Base)";
    };

    class BNA_KC_Helmet_Phase2_Base: ls_gar_phase2_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Helm (Base)";
    };

    class BNA_KC_Helmet_Engineer_Base: ls_gar_engineer_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] ENG Helm (Base)";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Helmets\Engineer\BNA_KC_Helmet_Engineer.paa",
            "ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
            "ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Airborne_Base: lsd_gar_airborne_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] AB Helm (Trooper)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Helmets\Airborne\BNA_KC_Helmet_Airborne.paa"
        };
    };

    class BNA_KC_Helmet_Airborne_v2: BNA_KC_Helmet_Airborne_Base
    {
        displayName = "[KC] AB Helm (Trooper, Version 2)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Helmets\Airborne\BNA_KC_Helmet_Airborne_v2.paa"
        };
    };

    class BNA_KC_Helmet_Insulated_Base: ls_gar_phase2insulated_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Snow Helm (Trooper)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Helmets\Insulated\BNA_KC_Helmet_Insulated.paa"
        };
    };

    #include "P1_Helmets.hpp"
    #include "P2_Helmets.hpp"

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_gar_phase2_uniform;           // Uniform Base Class
    class lsd_gar_phase2insulated_uniform; // Insulated Uniform
    class UniformItem;                     // Meta Class

    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Armor (Base)";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BNA_KC_Unit_Phase1_Base";
            containerClass = "Supply150"; // Uniform's storage
            mass = 40;
            uniformType = "Neopren";      // Makes the uniform swimwear
        };
    };

    class BNA_KC_Uniform_Insulated_Base: lsd_gar_phase2insulated_uniform
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Snow Armor (Trooper)";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "BNA_KC_Unit_Insulated_Base";
            containerClass = "Supply150"; // Uniform's storage
            mass = 40;
            uniformType = "Neopren";      // Makes the uniform swimwear
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
    class SWLB_clone_officer_armor: SWLB_clone_basic_armor
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo;
        }
    };

    class BNA_KC_Vest_Officer: SWLB_clone_officer_armor
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Vest 12+ (Officer)";
        hiddenSelectionsTextures[] =
        {
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
                    armor = 20;
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

    // ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
    class lsd_gar_standard_nvg;
    class lsd_gar_rangefinder_nvg;
    class SWLB_clone_ccVisor;

    class BNA_KC_NVG_Chip: lsd_gar_standard_nvg
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone NVG Chip";

        // Night Vision / Thermal Settings
        // See BNA_KC_Gear/Macros.hpp for values
        visionMode[] = { VISION_MODE };
        thermalMode[] = { THERMAL_MODE };

        // Remove the model and textures (invisible)
        model = "A3\weapons_F\ammo\mag_univ.p3d";
        modelOptics = "BNA_KC_Gear\Data\Models\empty_model.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};

        class ItemInfo
        {
            type = 616;
            uniformModel = "BNA_KC_Gear\Data\Models\empty_model.p3d";
            modelOff = "BNA_KC_Gear\Data\Models\empty_model.p3d";
            mass = 10;
            hiddenSelections[] = {};
        };
    };

    class BNA_KC_NVG_Visor: lsd_gar_standard_nvg
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone P2 NVG Visor";
        hiddenSelectionsTextures[] =
        {
            BNA_KC_Gear\Infantry\Data\NVGs\BNA_KC_NVG_Visor.paa
        };

        // Night Vision / Thermal Settings
        visionMode[] = { VISION_MODE };
        thermalMode[] = { THERMAL_MODE };

        // Remove NVG Overlay
        modelOptics = "BNA_KC_Gear\Data\Models\empty_model.p3d";
    };

    class BNA_KC_NVG_Visor_v2: BNA_KC_NVG_Visor
    {
        displayName = "[KC] Clone P2 NVG Visor (v2)";
        hiddenSelectionsTextures[] =
        {
            BNA_KC_Gear\Infantry\Data\NVGs\BNA_KC_NVG_Visor_v2.paa
        };
    };

    class BNA_KC_NVG_Rangefinder: lsd_gar_rangefinder_nvg
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone P2 Rangefinder (CS+)";
        hiddenSelectionsTextures[] =
        {
            BNA_KC_Gear\Infantry\Data\NVGs\BNA_KC_NVG_Rangefinder.paa
        };

        // Night Vision / Thermal Settings
        visionMode[] = { VISION_MODE };
        thermalMode[] = { THERMAL_MODE };

        // Remove NVG Overlay
        modelOptics = "BNA_KC_Gear\Data\Models\empty_model.p3d";
    };

    class BNA_KC_NVG_Officer: SWLB_clone_ccVisor
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone P2 Officer Visor (WO+)";
        hiddenSelectionsTextures[] =
        {
            BNA_KC_Gear\Infantry\Data\NVGs\BNA_KC_NVG_Officer.paa
        };

        // Night Vision / Thermal Settings
        visionMode[] = { VISION_MODE };
        thermalMode[] = { THERMAL_MODE };

        // Remove NVG Overlay
        modelOptics = "BNA_KC_Gear\Data\Models\empty_model.p3d";
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class lsd_gar_trooper_phase1;
    class lsd_gar_phase2Insulated_base;

    class BNA_KC_Unit_Phase1_Base: lsd_gar_trooper_phase1
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_INF_P1";
        editorPreview = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Preview_Trooper_P1.paa";

        displayName = "[KC] INF Trooper (Base)"

        uniformClass = "BNA_KC_Uniform_Base";
        // Uniform textures would be applied here ; default textures listed
        hiddenSelectionsTextures[] =
        {
            "ls_armor_bluefor\uniform\gar\phase2\data\camo1_co.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\camo2_co.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" 
        };

        // Inventory
        weapons[] =
        {
            "BNA_KC_DC15C_Predef",
            "3AS_DC17S_F",
            "SWLB_clone_binocular",
            "Throw",               // Allows the unit to throw grenades
            "Put"                  // Allows the unit to place explosives
        };
        respawnWeapons[] =
        {
            "BNA_KC_DC15C_Predef",
            "3AS_DC17S_F",
            "SWLB_clone_binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11("3AS_40Rnd_EC40_Mag"),
            // Stun rounds would go here
            ITEM_2("3AS_16Rnd_EC20_Mag"),
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
            ITEM_11("3AS_40Rnd_EC40_Mag"),
            // Stun rounds would go here
            ITEM_2("3AS_16Rnd_EC20_Mag"),
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
            "BNA_KC_Helmet_Phase1_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        backpack = "";
    };

    class BNA_KC_Unit_Phase2_Base: BNA_KC_Unit_Phase1_Base
    {
        editorSubcategory = "BNA_KC_INF_P2";
        editorPreview = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Preview_Trooper_P2.paa";

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
    };

    class BNA_KC_Unit_Insulated_Base: lsd_gar_phase2Insulated_base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_INF_Snow";

        displayName = "[KC] INF Snow - Trooper";

        uniformClass = "BNA_KC_Uniform_Insulated_Base";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Upper.paa",
            "BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Lower.paa",
            "lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };

        // Inventory
        weapons[] =
        {
            "BNA_KC_DC15C_Predef",
            "3AS_DC17S_F",
            "SWLB_clone_binocular",
            "Throw",               // Allows the unit to throw grenades
            "Put"                  // Allows the unit to place explosives
        };
        respawnWeapons[] =
        {
            "BNA_KC_DC15C_Predef",
            "3AS_DC17S_F",
            "SWLB_clone_binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11("3AS_40Rnd_EC40_Mag"),
            // Stun rounds would go here
            ITEM_2("3AS_16Rnd_EC20_Mag"),
            // Stun rounds would go here
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen"),
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("3AS_40Rnd_EC40_Mag"),
            // Stun rounds would go here
            ITEM_2("3AS_16Rnd_EC20_Mag"),
            // Stun rounds would go here
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen"),
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
            "BNA_KC_Helmet_Insulated_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Insulated_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
    };

    #include "P1_Units.hpp"
    #include "P2_Units.hpp"

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class SWLB_clone_backpack;
    class SWLB_clone_backpack_RTO;
    class SWLB_clone_RTO_mini_backpack;

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
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa", // Main Texture
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa", // Cover
            "",                                                    // Heavy
            "",                                                    // Medic
            ""                                                     // RTO
        };
    };

    class BNA_KC_Backpack_Invisible: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Backpack (Invisible)";

        // Remove the model and textures (invisible)
        picture = "";
        model = "BNA_KC_Gear\Data\Models\empty_model.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class BNA_KC_Backpack_Heavy: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Heavy Backpack";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa",      // Main Texture
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa",      // Cover
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Heavy
            "",                                                         // Medic
            ""                                                          // RTO
        };
    };

    class BNA_KC_Backpack_Medic: BNA_KC_Backpack
    {
        maximumLoad = 300; // Normal is 280, Heavy is 320

        displayName = "[KC] Clone Trooper Medic Backpack";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack_Medic.paa", // Main Texture
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack_Medic.paa", // Cover
            "",                                                          // Heavy
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",  // Medic
            ""                                                           // RTO
        };
    };

    class BNA_KC_Backpack_Radio: SWLB_clone_backpack_RTO
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        maximumLoad = 400;

        displayName = "[KC] Clone Trooper Radio Backpack";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa", // Main Texture
            "",                                                        // Cover
            "",                                                        // Heavy
            "",                                                        // Medic
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa" // RTO
        };
    };
    class BNA_KC_Backpack_Radio_Mini: SWLB_clone_RTO_mini_backpack
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        maximumLoad = 400;
        
        displayName = "[KC] Clone Commander Radio Backpack";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack_Radio_Mini.paa",
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack_Radio_Mini_Accumulator.paa"
        };
        picture = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Backpack_Radio_Mini_UI.paa";
    };
    class BNA_KC_Backpack_Radio_Invisible: BNA_KC_Backpack_Radio
    {
        displayName = "[KC] Clone Trooper Radio Backpack (Invisible)";

        picture = "";
        model = "BNA_KC_Gear\Data\Models\empty_model.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
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

    class BNA_KC_INF_Snow
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Snow";
    };
};