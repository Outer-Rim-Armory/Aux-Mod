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
    #include "CfgUnits.hpp"

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    #include "CfgBackpacks.hpp"

    // ┌───────────────────┐
    // │      Vehicles     │
    // └───────────────────┘
    #include "CfgVehicles.hpp"
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

    class BNA_KC_SubCat_TU_Tanks: BNA_KC_SubCat_TU_Infantry
    {
        displayName = "Tanks";
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