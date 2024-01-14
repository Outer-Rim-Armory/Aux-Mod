#include "CfgPatches.hpp"
#include "CfgGroups.hpp"
#include "\BNA_KC_OPFOR\Macros.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class BNA_KC_TU_Helmet;
    class BNA_KC_EPF_Helmet: BNA_KC_TU_Helmet
    {
        displayName = "[EPF] Helmet";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\enforcer\textures\helmet_olive_co.paa"};
        class ItemInfo;
    };

    class BNA_KC_TU_Helmet_Assault;
    class BNA_KC_EPF_Helmet_Assault: BNA_KC_TU_Helmet_Assault
    {
        displayName = "[EPF] Assault Helmet";
        hiddenSelectionsTextures[] = {"sc_equipment\data\ranger\textures\helmet_green_co.paa"};
    };

    class BNA_KC_TU_Helmet_Visor;
    class BNA_KC_EPF_Helmet_Visor: BNA_KC_TU_Helmet_Visor
    {
        displayName = "[EPF] Visor Helmet";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\wasp\textures\helmet_green_co.paa"};
    };

    class BNA_KC_TU_Helmet_Visor_Goggles;
    class BNA_KC_EPF_Helmet_Visor_Goggles: BNA_KC_TU_Helmet_Visor_Goggles
    {
        displayName = "[EPF] Visor Helmet (Goggles)";
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\wasp\textures\helmet_green_co.paa",
            "\sc_equipment\data\wasp\textures\visor_co.paa"
        };
    };

    class BNA_KC_TU_Helmet_Heavy;
    class BNA_KC_EPF_Helmet_Heavy: BNA_KC_TU_Helmet_Heavy
    {
        displayName = "[EPF] Heavy Helmet";
        hiddenSelectionsTextures[] = {"sc_equipment\data\watchdog\textures\helmet_co.paa"};
    };

    class BNA_KC_EPF_Helmet_Presidente: BNA_KC_EPF_Helmet
    {
        displayName = "[EPF] El Presidente Cap";
        model = "\A3\Characters_F_AoW\Headgear\ParadeDressCap_01_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_US_F_CO.paa"};
        hiddenSelectionsMaterials[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_US_F.rvmat"};
        picture = "\A3\Characters_F_AoW\Headgear\Data\UI\icon_H_ParadeDressCap_01_US_F_CA.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo"};
            uniformModel = "\A3\Characters_F_AoW\Headgear\ParadeDressCap_01_F.p3d";
        };
    };

    class BNA_KC_EPF_Helmet_General: BNA_KC_EPF_Helmet_Presidente
    {
        displayName = "[EPF] El General Cap";
        hiddenSelectionsTextures[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_AAF_F_CO.paa"};
        hiddenSelectionsMaterials[] = {"\a3\Characters_F_AoW\Headgear\Data\ParadeDressCap_01_AAF_F.rvmat"};
        picture = "\A3\Characters_F_AoW\Headgear\Data\UI\icon_H_ParadeDressCap_01_AAF_F_CA.paa";
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class BNA_KC_OPFOR_Uniform_Base;
    class BNA_KC_TU_Uniform: BNA_KC_OPFOR_Uniform_Base
    {
        class ItemInfo;
    };
    class BNA_KC_EPF_Uniform: BNA_KC_TU_Uniform
    {
        displayName = "[EPF] Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_EPF_Unit_Rifleman";
        };
    };

    class BNA_KC_EPF_Uniform_Presidente: BNA_KC_EPF_Uniform
    {
        displayName = "[EPF] El Presidente Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_EPF_Unit_Presidente";
        };
    };

    class BNA_KC_EPF_Uniform_General: BNA_KC_EPF_Uniform
    {
        displayName = "[EPF] El General Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_EPF_Unit_General";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class BNA_KC_TU_Vest;
    class BNA_KC_EPF_Vest: BNA_KC_TU_Vest
    {
        displayName = "[EPF] Light Vest";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_co.paa"};
        class ItemInfo;
    };

    class BNA_KC_TU_Vest_Medium;
    class BNA_KC_EPF_Vest_Medium: BNA_KC_TU_Vest_Medium
    {
        displayName = "[EPF] Medium Vest";
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\marine\textures\vest_green_co.paa",
            "\sc_equipment\data\marine\textures\legs_green_co.paa"
        };
    };

    class BNA_KC_TU_Vest_AssaultMedium;
    class BNA_KC_EPF_Vest_AssaultMedium: BNA_KC_TU_Vest_AssaultMedium
    {
        displayName = "[EPF] Medium Assault Vest";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_co.paa"};
    };

    class BNA_KC_TU_Vest_AssaultHeavy;
    class BNA_KC_EPF_Vest_AssaultHeavy: BNA_KC_TU_Vest_AssaultHeavy
    {
        displayName = "[EPF] Heavy Assault Vest";
        hiddenSelectionsTextures[] = {"\sc_equipment\data\watchdog\textures\vest_co.paa"};
    };

    class BNA_KC_EPF_Vest_General: BNA_KC_EPF_Vest
    {
        displayName = "[EPF] El General Vest";
        model = "\sc_equipment\data\samurai\sam_vest_light.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\samurai\textures\torso_black_co.paa",
            "\sc_equipment\data\samurai\textures\legs_black_co.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\sc_equipment\data\samurai\sam_vest_light.p3d";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
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
    class BNA_KC_OPFOR_EPF
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] El Presidente Forces";
    };
};


class CfgIdentities
{
    class ElPresidente
    {
        face = "PersianHead_A3_02";
        glasses = "None";
        name = "El Presidente";
        nameSound = "El Presidente";
        pitch = 1;
        speaker = "Male01ENG";
    };

    class ElGeneral: ElPresidente
    {
        face = "GreekHead_A3_04";
        name = "El General";
        nameSound = "El General";
    };
};