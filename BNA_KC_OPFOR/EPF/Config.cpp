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
    class BNA_KC_EPF_Helmet: BNA_KC_OPFOR_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[EPF] Helmet";

        model = "\sc_equipment\data\enforcer\en_helmet.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\enforcer\textures\helmet_olive_co.paa"};

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\enforcer\en_helmet.p3d";
        };
    };

    class BNA_KC_EPF_Helmet_Assault: BNA_KC_EPF_Helmet
    {
        displayName = "[EPF] Assault Helmet";

        model = "\sc_equipment\data\ranger\rn_helmet.p3d";
        hiddenSelectionsTextures[] = {"sc_equipment\data\ranger\textures\helmet_green_co.paa"};

        class ItemInfo: ItemInfo
        {
            uniformModel = "\sc_equipment\data\ranger\rn_helmet.p3d";
        };
    };

    class BNA_KC_EPF_Helmet_Visor: BNA_KC_EPF_Helmet
    {
        displayName = "[EPF] Visor Helmet";

        model = "\sc_equipment\data\wasp\wp_helmet_visor.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\wasp\textures\helmet_green_co.paa",
            "\sc_equipment\data\wasp\textures\visor_co.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\wasp\wp_helmet_visor.p3d";
        };
    };

    class BNA_KC_EPF_Helmet_Heavy: BNA_KC_EPF_Helmet
    {
        displayName = "[EPF] Heavy Helmet";

        model = "\sc_equipment\data\watchdog\wd_helmet_heavy.p3d";
        hiddenSelectionsTextures[] = {"sc_equipment\data\watchdog\textures\helmet_co.paa"};

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
    class BNA_KC_EPF_Uniform: BNA_KC_OPFOR_Uniform_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[EPF] Uniform";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_EPF_Unit_Base";
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
    class BNA_KC_EPF_Vest: BNA_KC_OPFOR_Vest_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[EPF] Light Vest";

        model = "\sc_equipment\data\watchdog\wd_vest_basic.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_co.paa"};

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_basic.p3d";

            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Abdomen;
                class Chest;
                class Diaphragm;
            };
        };
    };

    class BNA_KC_EPF_Vest_Medium: BNA_KC_EPF_Vest
    {
        displayName = "[EPF] Medium Vest";
        descriptionShort = "Armor Level IV";
        model = "\sc_equipment\data\marine\mr_vest.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\marine\textures\vest_green_co.paa",
            "\sc_equipment\data\marine\textures\legs_green_co.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\marine\mr_vest.p3d";

            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Abdomen: Abdomen
                {
                    armor = 20;
                };
                class Chest: Chest
                {
                    armor = 20;
                };
                class Diaphragm: Diaphragm
                {
                    armor = 20;
                };
            };
        };
    };

    class BNA_KC_EPF_Vest_AssaultMedium: BNA_KC_EPF_Vest
    {
        displayName = "[EPF] Medium Assault Vest";
        descriptionShort = "Armor Level IV";
        model = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_medium.p3d";
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Abdomen: Abdomen
                {
                    armor = 20;
                };
                class Chest: Chest
                {
                    armor = 20;
                };
                class Diaphragm: Diaphragm
                {
                    armor = 20;
                };
            };
        };
    };

    class BNA_KC_EPF_Vest_AssaultHeavy: BNA_KC_EPF_Vest
    {
        displayName = "[EPF] Heavy Assault Vest";
        descriptionShort = "Armor Level V";
        model = "\sc_equipment\data\watchdog\wd_vest_heavy.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_heavy.p3d";
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Abdomen: Abdomen
                {
                    armor = 25;
                };
                class Chest: Chest
                {
                    armor = 25;
                };
                class Diaphragm: Diaphragm
                {
                    armor = 25;
                };
            };
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_OPFOR_Unit_Base;
    class BNA_KC_EPF_Unit_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_OPFOR_EPF";
        editorSubcategory = "BNA_KC_SubCat_OPFOR_Infantry";

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        uniformClass = "BNA_KC_EPF_Uniform";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"sc_equipment\data\combat_uniform\cu_green_co.paa"};
    };
    #include "CfgUnits.hpp"

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    #include "CfgBackpacks.hpp"

    // ┌───────────────────┐
    // │      Vehicles     │
    // └───────────────────┘
};


class CfgFactionClasses
{
    class BNA_KC_OPFOR_EPF
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] El Presidente Forces";
    };
};
