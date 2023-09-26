#include "CfgPatches.hpp"
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
    class BNA_KC_Galtorran_Helmet: BNA_KC_OPFOR_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC GM] Gal'torran Helmet";

        model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie", "H_Collar"};
        hiddenSelectionsTextures[] =
        {
            "optre_unsc_units\army\data\helmet_snow_co.paa",
            "optre_unsc_units\army\data\helmet_visor_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
        picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl_vac.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie", "H_Collar"};
            uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
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
    class ls_redforVest_base;
    class BNA_KC_OPFOR_Vest_Base: ls_redforVest_base
    {
        class ItemInfo;
    };
    class BNA_KC_Galtorran_Vest: BNA_KC_OPFOR_Vest_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC GM] Gal'torran Light Vest";

        model = "MDF\MDFTorso.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "MDF\MDFTorso\White\DefaultMaterial_CO.paa",
            "MDF\MDFLegs\White\DefaultMaterial_CO.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "MDF\MDFTorso.p3d";
        };
    };

    class BNA_KC_Galtorran_Vest_Medium: BNA_KC_Galtorran_Vest
    {
        displayName = "[KC GM] Gal'torran Medium Vest";
        model = "MDF\MDFMedium.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "MDF\MDFMedium.p3d";
        };
    };

    class BNA_KC_Galtorran_Vest_Heavy: BNA_KC_Galtorran_Vest
    {
        displayName = "[KC GM] Gal'torran Heavy Vest";
        model = "MDF\MDFHeavy.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "MDF\MDFHeavy.p3d";
        };
    };
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

        linkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", BASE_LINKED_ITEMS};
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