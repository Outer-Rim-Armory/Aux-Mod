#include "CfgPatches.hpp"
#include "CfgGroups.hpp"
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
    class BNA_KC_TU_Uniform: BNA_KC_OPFOR_Uniform_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC TU] Techno Union Uniform";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_TU_Unit_Base";
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
    class BNA_KC_TU_Unit_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_OPFOR_TU";
        editorSubcategory = "BNA_KC_SubCat_TU_Infantry";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "BNA_KC_TechnoUnion"};

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        uniformClass = "BNA_KC_TU_Uniform";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\combat_uniform\cu_tan_co.paa"};
    };

    class BNA_KC_TU_Unit_Rifleman: BNA_KC_TU_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Rifleman";
        editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Rifleman.jpg";

        weapons[] = {"BNA_KC_E5", "", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_E5", "", "Throw", "Put"};

        magazines[] = {"Aux12thFleet_Mag_E5"};
        respawnMagazines[] = {"Aux12thFleet_Mag_E5"};
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
        backpack = "BNA_KC_TU_Backpack_Predef_Rifleman";
    };

    class BNA_KC_TU_Unit_AT: BNA_KC_TU_Unit_Rifleman
    {
        displayName = "Rifleman (AT)";
        editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Rifleman_AT.jpg";
        icon = "iconManAT";

        weapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AT", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AT", "Throw", "Put"};

        magazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AT"};
        respawnMagazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AT"};

        linkedItems[] = {"SC_Helmet_WP_EUD_Desert_V", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_WP_EUD_Desert_V", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_TU_Backpack_Heavy_Predef_AT";
    };

    class BNA_KC_TU_Unit_AA: BNA_KC_TU_Unit_AT
    {
        displayName = "Rifleman (AA)";

        weapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AA", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_E5", "", "BNA_KC_E60R_AA", "Throw", "Put"};

        magazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AA"};
        respawnMagazines[] = {"Aux12thFleet_Mag_E5", "Aux12thFleet_Mag_E60R_AA"};
        backpack = "BNA_KC_TU_Backpack_Heavy_Predef_AA";
    };

    class BNA_KC_TU_Unit_AssaultHeavy: BNA_KC_TU_Unit_Rifleman
    {
        displayName = "Heavy Assault";
        editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\AssaultHeavy.jpg";
        icon = "iconManMG";

        weapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_E5C_Stock", "", "Throw", "Put"};

        magazines[] = {"Aux12thFleet_Mag_E5C"};
        respawnMagazines[] = {"Aux12thFleet_Mag_E5C"};

        linkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Heavy_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Heavy_Desert", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_TU_Backpack_Assault_Predef_Heavy";
    };

    class BNA_KC_TU_Unit_AssaultMedium: BNA_KC_TU_Unit_AssaultHeavy
    {
        displayName = "Medium Assault";
        editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\AssaultMedium.jpg";
        linkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_RN_Desert", "SC_Vest_WD_Medium_Desert", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_TU_Backpack_Assault_Predef_Medium";
    };

    class BNA_KC_TU_Unit_SL: BNA_KC_TU_Unit_Rifleman
    {
        displayName = "Squad Leader";
        editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\SL.jpg";
        icon = "iconManLeader";

        linkedItems[] = {"SC_Helmet_WD_Desert_V", "SC_Vest_SMR_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_WD_Desert_V", "SC_Vest_SMR_Desert", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_TU_Backpack_RTO_Predef_SL";
    };

    class BNA_KC_TU_Unit_Melee: BNA_KC_TU_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Swordsman (Rush)";
        editorPreview = "\BNA_KC_OPFOR\TechnoUnion\Data\Textures\Previews\Melee.jpg";

        weapons[] = {"", "WBK_SciFi_Sword_2", "Throw", "Put"};
        respawnWeapons[] = {"", "WBK_SciFi_Sword_2", "Throw", "Put"};
        magazines[] = {"WBK_Cybercrystal"};
        respawnMagazines[] = {"WBK_Cybercrystal"};

        linkedItems[] = {"SC_Helmet_WP_Desert", "SC_Vest_WP_Light_Desert", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"SC_Helmet_WP_Desert", "SC_Vest_WP_Light_Desert", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_TU_Backpack_Heavy";
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class BNA_KC_OPFOR_Backpack_Base;
    class BNA_KC_TU_Backpack: BNA_KC_OPFOR_Backpack_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        displayName = "[KC TU] Backpack";
        descriptionshort = "Techno Union Backpack";

        model = "\sc_equipment\data\marine\mr_backpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\marine\textures\backpack_co.paa"};
        picture = "\sc_equipment\data\icons\icon_se_ca.paa";
    };
    class BNA_KC_TU_Backpack_Predef_Rifleman: BNA_KC_TU_Backpack
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(Aux12thFleet_Mag_E5, 10)
            TRANSMAG_XX(SC_IG3, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };

    class BNA_KC_TU_Backpack_Heavy: BNA_KC_TU_Backpack
    {
        displayName = "[KC TU] Heavy Backpack";
        maximumLoad = 450;
        mass = 35;

        model = "\sc_equipment\data\wasp\wp_backpack.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_co.paa"};
        picture = "\sc_equipment\data\icons\icon_se_ca.paa";
    };
    class BNA_KC_TU_Backpack_Heavy_Predef_AT: BNA_KC_TU_Backpack_Heavy
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(Aux12thFleet_Mag_E5, 10)
            TRANSMAG_XX(Aux12thFleet_Mag_E60R_HE, 3)
            TRANSMAG_XX(Aux12thFleet_Mag_E60R_AT, 3)
            TRANSMAG_XX(SC_IG3, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };
    class BNA_KC_TU_Backpack_Heavy_Predef_AA: BNA_KC_TU_Backpack_Heavy
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(Aux12thFleet_Mag_E5, 10)
            TRANSMAG_XX(Aux12thFleet_Mag_E60R_AA, 6)
            TRANSMAG_XX(SC_IG3, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };

    class BNA_KC_TU_Backpack_Assault: BNA_KC_TU_Backpack
    {
        displayName = "[KC TU] Assault Backpack";
        maximumLoad = 300;
        mass = 35;

        model = "\sc_equipment\data\wasp\wp_backpack_sl.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\backpack_co.paa"};
        picture = "\sc_equipment\data\icons\icon_se_ca.paa";
    };
    class BNA_KC_TU_Backpack_Assault_Predef_Heavy: BNA_KC_TU_Backpack_Assault
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(Aux12thFleet_Mag_E5C, 10)
            TRANSMAG_XX(SC_IG3, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };
    class BNA_KC_TU_Backpack_Assault_Predef_Medium: BNA_KC_TU_Backpack_Assault_Predef_Heavy
    {
        class TransportMagazines
        {
            TRANSMAG_XX(Aux12thFleet_Mag_E5C, 10)
            TRANSMAG_XX(SC_IG3, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };

    class BNA_KC_TU_Backpack_RTO: BNA_KC_TU_Backpack
    {
        displayName = "[KC TU] Radio Backpack";
        mass = 35;

        model = "\sc_equipment\data\watchdog\wd_backpack_sl.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\backpack_desert_co.paa"};
        picture = "\sc_equipment\data\icons\icon_ar_ca.paa";

        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "mr3000_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_east_radio_code";
        tf_subtype = "digital_lr";
    };
    class BNA_KC_TU_Backpack_RTO_Predef_SL: BNA_KC_TU_Backpack_RTO
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(Aux12thFleet_Mag_E5, 10)
            TRANSMAG_XX(SC_IG3, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
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


class CfgGlasses
{
    class Shadow_Mask;
    class BNA_KC_Glasses_TU_Mask: Shadow_Mask
    {
        displayName = "[KC TU] Face Guard";
        identityTypes[] = {"BNA_KC_TechnoUnion", 1};
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
    };
};


class Extended_Init_EventHandlers
{
    class BNA_KC_TU_Unit_Melee
    {
        class Melee_Init
        {
            init = "_unit = _this select 0; if (local _unit) then {[_unit] execVM 'WebKnight_StarWars_Mechanic\AI_Ims_Rush.sqf';}; _unit setVariable ['IMS_CustomHealthDamage', 20, true];"; // Default health is 2
        };
    };
};