#include "CfgPatches.hpp"
#include "CfgGroups.hpp"
#include "\BNA_KC_OPFOR\Macros.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_redforHelmet_base;
    class BNA_KC_OPFOR_Helmet_Base: ls_redforHelmet_base
    {
        class ItemInfo;
    };
    class BNA_KC_TU_Helmet: BNA_KC_OPFOR_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[TU] Helmet";

        model = "\sc_equipment\data\enforcer\en_helmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\enforcer\textures\helmet_desert_co.paa"};

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\enforcer\en_helmet.p3d";
        };
    };

    class BNA_KC_TU_Helmet_Assault: BNA_KC_TU_Helmet
    {
        displayName = "[TU] Assault Helmet";

        model = "\sc_equipment\data\ranger\rn_helmet.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\ranger\textures\helmet_co.paa"};

        class ItemInfo: ItemInfo
        {
            uniformModel = "\sc_equipment\data\ranger\rn_helmet.p3d";
        };
    };

    class BNA_KC_TU_Helmet_Visor: BNA_KC_TU_Helmet
    {
        displayName = "[TU] Visor Helmet";

        model = "\sc_equipment\data\wasp\wp_helmet_visor.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\helmet_co.paa"};

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\wasp\wp_helmet_visor.p3d";
        };
    };

    class BNA_KC_TU_Helmet_Visor_Goggles: BNA_KC_TU_Helmet_Visor
    {
        displayName = "[TU] Visor Helmet (Goggles)";
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\wasp\textures\helmet_co.paa",
            "\sc_equipment\data\wasp\textures\visor_co.paa"
        };
    };

    class BNA_KC_TU_Helmet_Heavy: BNA_KC_TU_Helmet
    {
        displayName = "[TU] Heavy Helmet";

        model = "\sc_equipment\data\watchdog\wd_helmet_heavy.p3d";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\helmet_desert_co.paa"};

        class ItemInfo: ItemInfo
        {
            uniformModel = "\sc_equipment\data\watchdog\wd_helmet_heavy.p3d";
        };
    };

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

        displayName = "[TU] Techno Union Uniform";

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
        editorSubcategory = "BNA_KC_SubCat_OPFOR_Infantry";
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


class CfgGlasses
{
    class Shadow_Mask;
    class BNA_KC_Glasses_TU_Mask: Shadow_Mask
    {
        displayName = "[TU] Face Guard";
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