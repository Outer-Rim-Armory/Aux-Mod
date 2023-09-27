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

        model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
        hiddenSelectionsTextures[] =
        {
            "optre_unsc_units\army\data\helmet_snow_co.paa",
            "optre_unsc_units\army\data\helmet_visor_ca.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
            uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
        };

        picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl_vac.paa";
    };

    class BNA_KC_Galtorran_Helmet_SL: BNA_KC_Galtorran_Helmet
    {
        model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie", "H_Collar"};
        hiddenSelectionsTextures[] =
        {
            "optre_unsc_units\army\data\helmet_snow_co.paa",
            "optre_unsc_units\army\data\helmet_visor_co.paa",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "optre_unsc_units\army\data\soft_packs_co.paa"
        };
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
        picture = "\ls_armor_greenfor\uniform\mandalorian\_ui\icon_uniform_undersuit.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Galtorran_Unit_Base";
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
    class BNA_KC_Galtorran_Vest: BNA_KC_OPFOR_Vest_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC GM] Gal'torran Light Vest";
        descriptionShort = "Armor Level III";

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
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Abdomen;
                class Chest;
                class Diaphragm;
            };
        };
    };

    class BNA_KC_Galtorran_Vest_Medium: BNA_KC_Galtorran_Vest
    {
        displayName = "[KC GM] Gal'torran Medium Vest";
        descriptionShort = "Armor Level IV";
        model = "MDF\MDFMedium.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "MDF\MDFMedium.p3d";
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

    class BNA_KC_Galtorran_Vest_Heavy: BNA_KC_Galtorran_Vest
    {
        displayName = "[KC GM] Gal'torran Heavy Vest";
        descriptionShort = "Armor Level V";
        model = "MDF\MDFHeavy.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "MDF\MDFHeavy.p3d";
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
    class BNA_KC_Galtorran_Unit_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_OPFOR_Galtorran";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry";

        items[] =
        {
            // Other
            ITEM_20("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };
        respawnItems[] =
        {
            // Other
            ITEM_20("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            "FirstAidKit"
        };

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

        weapons[] = {"BNA_KC_LW38_Green", "", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_LW38_Green", "", "Throw", "Put"};

        magazines[] = {"BNA_KC_Mag_LW38_Green"};
        respawnMagazines[] = {"BNA_KC_Mag_LW38_Green"};

        linkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Backpack_Predef_Rifleman";
    };

    class BNA_KC_Galtorran_Unit_AT: BNA_KC_Galtorran_Unit_Rifleman
    {
        displayName = "Rifleman (AT)";
        icon = "iconManAT";

        weapons[] = {"BNA_KC_LW38_Green", "", "SC_MPML", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_LW38_Green", "", "SC_MPML", "Throw", "Put"};

        magazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AT"};
        respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AT"};

        TRANSMAG_XX(ls_mag_classC_thermalDet, 2)
        TRANSMAG_XX(SmokeShell, 2)
        TRANSMAG_XX(ShieldGrenade_Mag, 2)

        backpack = "BNA_KC_Galtorran_Backpack_Heavy_Predef_AT";
    };

    class BNA_KC_Galtorran_Unit_SL: BNA_KC_Galtorran_Unit_Rifleman
    {
        displayName = "Squad Leader";
        icon = "iconManLeader";

        linkedItems[] = {"BNA_KC_Galtorran_Helmet_SL", "BNA_KC_Galtorran_Vest", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_SL", "BNA_KC_Galtorran_Vest", BASE_LINKED_ITEMS};
        backpack = "OPTRE_ANPRC_521_Snow";
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class BNA_KC_OPFOR_Backpack_Base;
    class BNA_KC_Galtorran_Backpack: BNA_KC_OPFOR_Backpack_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        displayName = "[KC GM] Gal'torran Backpack";
        descriptionshort = "Gal'torran Military Backpack";

        model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
        hiddenSelections[] = {"camo1", "AP_Heavy", "biofoam"};
        hiddenSelectionsTextures[] = {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        picture = "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
    };
    class BNA_KC_Galtorran_Backpack_Predef_Rifleman: BNA_KC_Galtorran_Backpack
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };

    class BNA_KC_Galtorran_Backpack_Heavy: BNA_KC_Galtorran_Backpack
    {
        displayName = "[KC GM] Gal'torran Heavy Backpack";
        maximumLoad = 350;

        model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
        hiddenSelections[] = {"camo1", "biofoam"};
    };
    class BNA_KC_Galtorran_Backpack_Heavy_Predef_AT: BNA_KC_Galtorran_Backpack_Heavy
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(SC_MPML_M_AT, 3)
        };
    };
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