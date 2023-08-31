#include "CfgPatches.hpp"
#include "\BNA_KC_OPFOR\Macros.hpp"


class CfgWeapons
{
    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_redforUniform_base;
    class BNA_KC_OPFOR_Uniform_Base: ls_redforUniform_base
    {
        class ItemInfo;
    };
    class BNA_KC_OPFOR_Uniform_Droid_Base: BNA_KC_OPFOR_Uniform_Base
    {

    };
    class BNA_KC_OPFOR_Uniform_BXDroid: BNA_KC_OPFOR_Uniform_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC CIS] BX Commando Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_OPFOR_Unit_BXDroid";
        };
    };

    class ls_gar_phase2_uniform;
    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        class ItemInfo;
    };
    class BNA_KC_OPFOR_Uniform_BXDroid_Actor: BNA_KC_Uniform_Base
    {
        displayName = "[KC CIS] BX Commando Droid (Actor)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_OPFOR_Unit_BXDroid_Actor";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class ls_redforVest_base: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class BNA_KC_OPFOR_Vest_Base: ls_redforVest_base
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo;
        };
    };
    class BNA_KC_OPFOR_Vest_BXDroid: BNA_KC_OPFOR_Vest_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC CIS] BX Commando Droid [Gun Vest]";
        model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";

        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 6;
                    passThrough = 0.3;
                };
            };
            uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
        };
    };
    class BNA_KC_OPFOR_Vest_BXDroid_Melee: BNA_KC_OPFOR_Vest_BXDroid
    {
        displayName = "[KC CIS] BX Commando Droid [Melee Vest]";
        model = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        };
    };

    class SWLB_clone_basic_armor;
    class BNA_KC_Vest_Basic: SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class BNA_KC_OPFOR_Vest_BXDroid_Actor: BNA_KC_Vest_Basic
    {
        displayName = "[KC CIS] BX Commando Droid (Actor)";
        picture = "\ls_data\icons\LS_logo_ca.paa";
    };
    class BNA_KC_OPFOR_Vest_BXDroid_Melee_Actor: BNA_KC_OPFOR_Vest_BXDroid_Actor
    {
        model = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\ls_armor_redfor\vest\cis\bxCommando\ls_cis_bxCommando_vest.p3d";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_OPFOR_Unit_Base;
    class BNA_KC_OPFOR_Unit_Droid_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_Faction_OPFOR_CIS";

        armor = 2;
        armorStructural = 3;
        explosionShielding = 0.3;
        impactDamageMultiplier = 0.5;
        minTotalDamageThreshold = 0.001;

        identityTypes[] = { "", "Head_NATO" };

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";
    };

    class BNA_KC_OPFOR_Unit_BXDroid: BNA_KC_OPFOR_Unit_Droid_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] BX Commando Droid";

        // Editor Properties
        editorSubcategory = "BNA_KC_SubCat_CIS_SpecOps";
        editorPreview = "";

        uniformClass = "BNA_KC_OPFOR_Uniform_BXDroid";
        model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "ls_armor_redfor\uniform\cis\bx\data\body_co.paa" };

        weapons[] =
        {
            "JLTS_E5",
            "JLTS_RG4D",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "JLTS_E5",
            "JLTS_RG4D",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11("JLTS_E5_mag"),
            ITEM_2("JLTS_RG4D_mag"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("JLTS_E5_mag"),
            ITEM_2("JLTS_RG4D_mag"),
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            // Smokes
            ITEM_3("3AS_SmokeWhite")
        };
        items[] =
        {
            // Other
            ITEM_5("ACE_CableTie")
        };
        respawnItems[] =
        {
            // Other
            ITEM_5("ACE_CableTie")
        };

        linkedItems[] =
        {
            "BNA_KC_OPFOR_Vest_BXDroid", "BNA_KC_NVG_Chip", "ItemMap", "SWLB_comlink_droid", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_OPFOR_Vest_BXDroid", "BNA_KC_NVG_Chip", "ItemMap", "SWLB_comlink_droid", "ItemCompass", "TFAR_microdagr"
        };
    };

    class BNA_KC_Unit_Base;
    class BNA_KC_OPFOR_Unit_BXDroid_Actor: BNA_KC_Unit_Base
    {
        scope = 2;
        scopeArsenal = 0;

        impactEffectsBlood = "ImpactMetal";
        impactEffectsNoBlood = "ImpactMetal";

        uniformClass = "BNA_KC_OPFOR_Uniform_BXDroid_Actor";
        model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "ls_armor_redfor\uniform\cis\bx\data\body_co.paa" };
    };
};


class CfgFactionClasses
{
    class BNA_KC_OPFOR_CIS
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] CIS";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_CIS_SpecOps
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Spec Ops";
    };
};