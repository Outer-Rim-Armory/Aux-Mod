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
    class BNA_KC_OPFOR_Uniform_TU: BNA_KC_OPFOR_Uniform_Base
    {
        displayName = "[KC TU] Techno Union Uniform";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_OPFOR_Unit_TU_Base";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_OPFOR_Unit_Base;
    class BNA_KC_OPFOR_Unit_TU_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_OPFOR_TU";
        editorSubcategory = "BNA_KC_SubCat_TU_Infantry";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_Euro"};
        // TODO: Give Shadow_Mask to units

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        uniformClass = "BNA_KC_OPFOR_Uniform_TU";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"sc_equipment\data\combat_uniform\cu_tan_co.paa"};
    };

    class BNA_KC_OPFOR_Unit_TU_Rifleman: BNA_KC_OPFOR_Unit_TU_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Rifleman";

        weapons[] = {"BNA_KC_E5", "", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_E5", "", "Throw", "Put"};
        magazines[] =
        {
            // Ammo
            ITEM_11("Aux_12thFleet_Mag_E5"),
            // Grenades
            ITEM_2("SC_IG3"),
            ITEM_5("JMSLLTE_thermalimploder_HandGrenade"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_2("SmokeShell")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("Aux_12thFleet_Mag_E5"),
            // Grenades
            ITEM_2("SC_IG3"),
            // ITEM_5("JMSLLTE_thermalimploder_HandGrenade"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_2("SmokeShell")
        };
        items[] =
        {
            // Other
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };
        respawnItems[] =
        {
            // Other
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };

        linkedItems[] = {"SC_Helmet_EN_Desert", "SC_Vest_WD_Basic_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_EN_Desert", "SC_Vest_WD_Basic_Desert", BASE_LINKED_ITEMS};
        backpack = "SC_Backpack_SMR_Desert";
    };

    class BNA_KC_OPFOR_Unit_TU_AT: BNA_KC_OPFOR_Unit_TU_Rifleman
    {
        displayName = "Anti-Tank Trooper";
        icon = "iconManAT";

        weapons[] = {"BNA_KC_E5", "", "Aux501_Weaps_e60r_at", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_E5", "", "Aux501_Weaps_e60r_at", "Throw", "Put"};
        magazines[] =
        {
            // Ammo
            ITEM_11("Aux_12thFleet_Mag_E5"),
            ITEM_4("Aux501_Weapons_Mags_e60r_he"),
            ITEM_4("Aux501_Weapons_Mags_e60r_at"),
            // Grenades
            ITEM_2("SC_IG3"),
            // ITEM_5("JMSLLTE_thermalimploder_HandGrenade"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_2("SmokeShell")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("Aux_12thFleet_Mag_E5"),
            ITEM_4("Aux501_Weapons_Mags_e60r_he"),
            ITEM_4("Aux501_Weapons_Mags_e60r_at"),
            // Grenades
            ITEM_2("SC_IG3"),
            // ITEM_5("JMSLLTE_thermalimploder_HandGrenade"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_2("SmokeShell")
        };
        items[] =
        {
            // Other
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };
        respawnItems[] =
        {
            // Other
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };

        linkedItems[] = {"SC_Helmet_WP_EUD_Desert_V", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_WP_EUD_Desert_V", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
        backpack = "SC_Backpack_WP_Desert";
    };

    class BNA_KC_OPFOR_Unit_TU_AssaultHeavy: BNA_KC_OPFOR_Unit_TU_Rifleman
    {
        displayName = "Heavy Assault";
        icon = "iconManMG";

        weapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};

        magazines[] =
        {
            // Ammo
            ITEM_11("Aux_12thFleet_Mag_E5C"),
            // Grenades
            ITEM_2("SC_IG3"),
            ITEM_5("JMSLLTE_thermalimploder_HandGrenade"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_2("SmokeShell")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("Aux_12thFleet_Mag_E5C"),
            // Grenades
            ITEM_2("SC_IG3"),
            // ITEM_5("JMSLLTE_thermalimploder_HandGrenade"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_2("SmokeShell")
        };

        linkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Heavy_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Heavy_Desert", BASE_LINKED_ITEMS};
        backpack = "SC_Backpack_WP_Desert_SL";
    };

    class BNA_KC_OPFOR_Unit_TU_AssaultMedium: BNA_KC_OPFOR_Unit_TU_AssaultHeavy
    {
        displayName = "Medium Assault";
        linkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
        backpack = "SC_Backpack_WP_Desert_SL";
    };

    class BNA_KC_OPFOR_Unit_TU_SL: BNA_KC_OPFOR_Unit_TU_Rifleman
    {
        displayName = "Squad Leader";
        icon = "iconManLeader";

        linkedItems[] = {"SC_Helmet_WD_Desert_V", "SC_Vest_SMR_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_WD_Desert_V", "SC_Vest_SMR_Desert", BASE_LINKED_ITEMS};
        backpack = "SC_Backpack_WD_Desert_SL";
    };
};


class CfgFactionClasses
{
    class BNA_KC_OPFOR_TU
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] Techno Union";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_TU_Infantry
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry";
    };
};