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
    class BNA_KC_Galtorran_Uniform: BNA_KC_OPFOR_Uniform_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC GM] Gal'torran Uniform";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Galtorran_Unit_Base";
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
    class BNA_KC_Galtorran_Unit_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_OPFOR_Galtorran";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry";

        weapons[] = {};
        respawnWeapons[] = {};
        magazines[] = {};
        respawnMagazines[] = {};
        items[] = {};
        respawnItems[] = {};

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        uniformClass = "BNA_KC_Galtorran_Uniform";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"\ls_armor_greenfor\uniform\mandalorian\undersuit\data\uniform_undersuit_co.paa"};
    };

    class BNA_KC_Galtorran_Unit_Rifleman: BNA_KC_Galtorran_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Rifleman";

        linkedItems[] = {"OPTRE_UNSC_CH252_Helmet2_Vacuum_SNO", "SC_MDF_TorsoLight_White", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"OPTRE_UNSC_CH252_Helmet2_Vacuum_SNO", "SC_MDF_TorsoLight_White", BASE_LINKED_ITEMS};
        backpack = "OPTRE_ILCS_Rucksack_Black";
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
};


class CfgFactionClasses
{
    class BNA_KC_OPFOR_Galtorran
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] Gal'torran Military";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Galtorran_Infantry
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry";
    };
};