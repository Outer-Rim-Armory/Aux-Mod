#include "CfgPatches.hpp"
#include "CfgGroups.hpp"
#include "\BNA_KC_INDEP\Macros.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_greenforHelmet_base;
    class BNA_KC_INDEP_Helmet_Base: ls_greenforHelmet_base
    {
        class ItemInfo;
    };
    class BNA_KC_Galtorran_Helmet: BNA_KC_INDEP_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC GM] Helmet";

        model = "\OPTRE_UNSC_Units\Army\helmet.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
        hiddenSelectionsTextures[] =
        {
            "\optre_unsc_units\army\data\helmet_snow_co.paa",
            "\optre_unsc_units\army\data\helmet_visor_ca.paa",
            "\optre_unsc_units\army\data\ghillie_woodland_co.paa"
        };
        picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl_vac.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
            uniformModel = "\OPTRE_UNSC_Units\Army\helmet.p3d";
        };
    };

    class BNA_KC_Galtorran_Helmet_SL: BNA_KC_Galtorran_Helmet
    {
        displayName = "[KC GM] Squad Leader Helmet";

        model = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie", "H_Collar"};
        hiddenSelectionsTextures[] =
        {
            "\optre_unsc_units\army\data\helmet_snow_co.paa",
            "\optre_unsc_units\army\data\helmet_visor_co.paa",
            "\optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "\optre_unsc_units\army\data\soft_packs_co.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie", "H_Collar"};
            uniformModel = "\OPTRE_UNSC_Units\Army\helmet_p.p3d";
        };
    };

    class BNA_KC_Galtorran_Helmet_T2: BNA_KC_Galtorran_Helmet
    {
        displayName = "[KC GM] Veteran Helmet";

        model = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
        hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie"};
        hiddenSelectionsTextures[] =
        {
            "\optre_unsc_units\army\data\custom\odst_helmet_leigh_co.paa",
            "\optre_unsc_units\army\data\odst_helmet_visor_co.paa",
            "\optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "\optre_unsc_units\army\data\soft_packs_co.paa"
        };
        picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie"};
            uniformModel = "\OPTRE_UNSC_Units\Army\odst_helmet.p3d";
        };
    };

    class BNA_KC_Galtorran_Helmet_T3: BNA_KC_Galtorran_Helmet
    {
        displayName = "[KC GM] Elite Helmet";

        model = "\MDF\MDFHelmet.p3d";
        hhiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\MDF\MDFHelmet\Black\Material.001_CO.paa"};

        subItems[] = {"BNA_KC_NVG_Chip"};

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo2", "camo3", "camo4", "H_Ghillie"};
            uniformModel = "\MDF\MDFHelmet.p3d";
        };
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_greenforUniform_base;
    class BNA_KC_INDEP_Uniform_Base: ls_greenforUniform_base
    {
        class ItemInfo;
    };
    class BNA_KC_Galtorran_Uniform: BNA_KC_INDEP_Uniform_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC GM] Uniform";
        picture = "\ls_armor_greenfor\uniform\mandalorian\_ui\icon_uniform_undersuit.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Galtorran_Unit_Base";
        };
    };
    class BNA_KC_Galtorran_Uniform_Vex: BNA_KC_Galtorran_Uniform
    {
        displayName = "[KC GM] General Vex's Armor";
        picture = "\armor_unit\Ui\Merc_Armor_Tayrus.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Galtorran_Unit_Vex";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class ls_greenforVest_base: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class BNA_KC_INDEP_Vest_Base: ls_greenforVest_base
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo;
        };
    };
    class BNA_KC_Galtorran_Vest: BNA_KC_INDEP_Vest_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC GM] Light Vest";
        descriptionShort = "Armor Level III";

        model = "\MDF\MDFTorso.p3d";
        hiddenSelections[] = {"camo", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "\MDF\MDFTorso\White\DefaultMaterial_CO.paa",
            "\MDF\MDFLegs\White\DefaultMaterial_CO.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo", "camo1"};
            uniformModel = "\MDF\MDFTorso.p3d";
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
        displayName = "[KC GM] Medium Vest";
        descriptionShort = "Armor Level IV";
        model = "\MDF\MDFMedium.p3d";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\MDF\MDFMedium.p3d";
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
        displayName = "[KC GM] Heavy Vest";
        descriptionShort = "Armor Level V";
        model = "\MDF\MDFHeavy.p3d";
        hiddenSelectionsTextures[] = {"\MDF\MDFTorso\Black\DefaultMaterial_CO.paa", "MDF\MDFLegs\Black\DefaultMaterial_CO.paa"};

        class ItemInfo: ItemInfo
        {
            uniformModel = "\MDF\MDFHeavy.p3d";
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
    class BNA_KC_INDEP_Unit_Base;
    class BNA_KC_Galtorran_Unit_Base: BNA_KC_INDEP_Unit_Base
    {
        faction = "BNA_KC_INDEP_Galtorran";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T1";

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
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T1\Rifleman.png";

        weapons[] = {"BNA_KC_LW38_Green_Scoped", "", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_LW38_Green_Scoped", "", "Throw", "Put"};

        magazines[] = {"BNA_KC_Mag_LW38_Green"};
        respawnMagazines[] = {"BNA_KC_Mag_LW38_Green"};

        linkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Backpack_Predef_Rifleman";
    };
    class BNA_KC_Galtorran_Unit_Rifleman_T2: BNA_KC_Galtorran_Unit_Rifleman
    {
        displayName = "Veteran Rifleman";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T2\Rifleman.png";
        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Veteran_Backpack_Predef_Rifleman";
    };
    class BNA_KC_Galtorran_Unit_Rifleman_T3: BNA_KC_Galtorran_Unit_Rifleman_T2
    {
        displayName = "Elite Rifleman";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T3\Rifleman.png";
        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Elite_Backpack_Predef_Rifleman";
    };

    class BNA_KC_Galtorran_Unit_AT: BNA_KC_Galtorran_Unit_Rifleman
    {
        displayName = "Rifleman (AT)";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T1\Rifleman_AT.png";
        icon = "iconManAT";

        weapons[] = {"BNA_KC_LW38_Green_Scoped", "", "SC_MPML", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_LW38_Green_Scoped", "", "SC_MPML", "Throw", "Put"};

        magazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AT"};
        respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AT"};

        backpack = "BNA_KC_Galtorran_Backpack_Heavy_Predef_AT";
    };
    class BNA_KC_Galtorran_Unit_AT_T2: BNA_KC_Galtorran_Unit_AT
    {
        displayName = "Veteran Rifleman (AT)";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T2\Rifleman_AT.png";

        weapons[] = {"BNA_KC_LW38_Green_Scoped", "", "3AS_PLX1_F", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_LW38_Green_Scoped", "", "3AS_PLX1_F", "Throw", "Put"};

        magazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK43_AT"};
        respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK43_AT"};

        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Veteran_Backpack_Heavy_Predef_AT";
    };
    class BNA_KC_Galtorran_Unit_AT_T3: BNA_KC_Galtorran_Unit_AT_T2
    {
        displayName = "Elite Rifleman (AT)";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T3\Rifleman_AT.png";
        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Elite_Backpack_Heavy_Predef_AT";
    };

    class BNA_KC_Galtorran_Unit_AA: BNA_KC_Galtorran_Unit_Rifleman
    {
        displayName = "Rifleman (AA)";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T1\Rifleman_AT.png";
        icon = "iconManAT";

        weapons[] = {"BNA_KC_LW38_Green_Scoped", "", "SC_MPML", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_LW38_Green_Scoped", "", "SC_MPML", "Throw", "Put"};

        magazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AA"};
        respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "SC_MPML_M_AA"};

        backpack = "BNA_KC_Galtorran_Backpack_Heavy_Predef_AA";
    };
    class BNA_KC_Galtorran_Unit_AA_T2: BNA_KC_Galtorran_Unit_AA
    {
        displayName = "Veteran Rifleman (AA)";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T2\Rifleman_AT.png";

        weapons[] = {"BNA_KC_LW38_Green_Scoped", "", "3AS_PLX1_F", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_LW38_Green_Scoped", "", "3AS_PLX1_F", "Throw", "Put"};

        magazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK39_AA"};
        respawnMagazines[] = {"BNA_KC_Mag_LW38_Green", "3AS_JLTS_MK39_AA"};

        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Veteran_Backpack_Heavy_Predef_AA";
    };
    class BNA_KC_Galtorran_Unit_AA_T3: BNA_KC_Galtorran_Unit_AA_T2
    {
        displayName = "Elite Rifleman (AA)";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T3\Rifleman_AT.png";
        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Elite_Backpack_Heavy_Predef_AA";
    };

    class BNA_KC_Galtorran_Unit_Marksman: BNA_KC_Galtorran_Unit_Rifleman
    {
        displayName = "Marksman";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T1\Marksman.png";
        icon = "LSiconMarksman";

        weapons[] = {"BNA_KC_HI12", "", "Throw", "Put"};
        respawnWeapons[] = {"BNA_KC_HI12", "", "Throw", "Put"};

        magazines[] = {"BNA_KC_Mag_HI12"};
        respawnMagazines[] = {"BNA_KC_Mag_HI12"};

        linkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_MVI_UL_CNM", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_MVI_UL_CNM", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Backpack_Predef_Marksman";
    };
    class BNA_KC_Galtorran_Unit_Marksman_T2: BNA_KC_Galtorran_Unit_Marksman
    {
        displayName = "Veteran Marksman";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T2\Marksman.png";
        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_MVI_UL_CNM", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_MVI_UL_CNM", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Veteran_Backpack_Predef_Marksman";
    };
    class BNA_KC_Galtorran_Unit_Marksman_T3: BNA_KC_Galtorran_Unit_Marksman_T2
    {
        displayName = "Elite Marksman";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T3\Marksman.png";
        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Elite_Backpack_Predef_Marksman";
    };

    class BNA_KC_Galtorran_Unit_SL: BNA_KC_Galtorran_Unit_Rifleman
    {
        displayName = "Squad Leader";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T1\SL.png";
        icon = "iconManLeader";

        linkedItems[] = {"BNA_KC_Galtorran_Helmet_SL", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_SL", "BNA_KC_Galtorran_Vest", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Backpack_RTO_Predef_SL";
    };
    class BNA_KC_Galtorran_Unit_SL_T2: BNA_KC_Galtorran_Unit_SL
    {
        displayName = "Veteran Squad Leader";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T2";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T2\SL.png";
        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T2", "BNA_KC_Galtorran_Vest_Medium", "OPTRE_NVG_HURS_CNM", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Veteran_Backpack_RTO_Predef_SL";
    };
    class BNA_KC_Galtorran_Unit_SL_T3: BNA_KC_Galtorran_Unit_SL_T2
    {
        displayName = "Elite Squad Leader";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Infantry_T3";
        editorPreview = "\BNA_KC_INDEP\Galtorran\Data\Textures\Previews\T3\SL.png";
        linkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {"BNA_KC_Galtorran_Helmet_T3", "BNA_KC_Galtorran_Vest_Heavy", BASE_LINKED_ITEMS};
        backpack = "BNA_KC_Galtorran_Elite_Backpack_RTO_Predef_SL";
    };

    // Special Units
    class BNA_KC_Galtorran_Unit_Vex: BNA_KC_Galtorran_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "General Vex";
        editorSubcategory = "BNA_KC_SubCat_Galtorran_Special";

        uniformClass = "BNA_KC_Galtorran_Uniform_Vex";
        model = "\armor_unit\Merc_Armor_Tayrus.p3d";
        hiddenSelections[] = {"camo5", "camo6", "camoB", "undersuit"};
        hiddenSelectionsTextures[] =
        {
            "\armor_unit\Tayrus\Merc_Armor_Up_co.paa",
            "\armor_unit\Tayrus\Merc_Armor_HL_co.paa",
            "\armor_unit\Tayrus\Merc_Armur_CLoth_co.paa",
            "\armor_unit\Tayrus\Merc_uniform.paa"
        };

        linkedItems[] = {BASE_LINKED_ITEMS};
        respawnLinkedItems[] = {BASE_LINKED_ITEMS};
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class BNA_KC_INDEP_Backpack_Base;
    class BNA_KC_Galtorran_Backpack: BNA_KC_INDEP_Backpack_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        displayName = "[KC GM] Backpack";
        descriptionshort = "Gal'torran Military Backpack";

        model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
        hiddenSelections[] = {"camo1", "AP_Heavy", "biofoam"};
        hiddenSelectionsTextures[] = {"\OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
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
    class BNA_KC_Galtorran_Backpack_Predef_Marksman: BNA_KC_Galtorran_Backpack_Predef_Rifleman
    {
        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_HI12, 15)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };

    class BNA_KC_Galtorran_Veteran_Backpack: BNA_KC_Galtorran_Backpack
    {
        displayName = "[KC GM] Veteran Backpack";
        maximumLoad = 250;
        model = "\3AS\3AS_Characters\Commando\3AS_Katarn_BackPack.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Backpack_Standard_CO.paa"};
        picture = "\3AS\3AS_Characters\Commando\data\UI\Katarn_Backpack_Unmarked_UI_ca.paa";
    };
    class BNA_KC_Galtorran_Veteran_Backpack_Predef_Rifleman: BNA_KC_Galtorran_Veteran_Backpack
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 4)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenade_Mag, 4)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 1)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 1)
        };
    };
    class BNA_KC_Galtorran_Veteran_Backpack_Predef_Marksman: BNA_KC_Galtorran_Veteran_Backpack_Predef_Rifleman
    {
        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_HI12, 15)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 4)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenade_Mag, 4)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 1)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 1)
        };
    };

    class BNA_KC_Galtorran_Elite_Backpack: BNA_KC_Galtorran_Backpack
    {
        displayName = "[KC GM] Elite Backpack";
        maximumLoad = 350;

        model = "\SentinelBackpack\SentinelBackpack.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\sc_newequipment2\Sentinel\Night\Back\DefaultMaterial_CO.paa"};
        picture = "\SentinelBackpack\icon_ar_ca.paa";
    };
    class BNA_KC_Galtorran_Elite_Backpack_Predef_Rifleman: BNA_KC_Galtorran_Elite_Backpack
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(ls_mag_classB_thermalDet, 3)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenadePersonal_Mag, 2)
            TRANSMAG_XX(SquadShieldMagazine, 2)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 3)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 3)
            TRANSMAG_XX(BNA_KC_Grenade_BactaBomb, 1)
        };
    };
    class BNA_KC_Galtorran_Elite_Backpack_Predef_Marksman: BNA_KC_Galtorran_Elite_Backpack
    {
        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_HI12, 15)
            TRANSMAG_XX(ls_mag_classB_thermalDet, 3)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenadePersonal_Mag, 2)
            TRANSMAG_XX(SquadShieldMagazine, 2)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 3)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 3)
            TRANSMAG_XX(BNA_KC_Grenade_BactaBomb, 1)
        };
    };

    class BNA_KC_Galtorran_Backpack_Heavy: BNA_KC_Galtorran_Backpack
    {
        displayName = "[KC GM] Heavy Backpack";
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
            TRANSMAG_XX(ls_mag_classC_thermalDet, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };
    class BNA_KC_Galtorran_Backpack_Heavy_Predef_AA: BNA_KC_Galtorran_Backpack_Heavy_Predef_AT
    {
        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(SC_MPML_M_AA, 3)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 2)
            TRANSMAG_XX(SmokeShell, 2)
            TRANSMAG_XX(ShieldGrenade_Mag, 2)
        };
    };

    class BNA_KC_Galtorran_Veteran_Backpack_Heavy: BNA_KC_Galtorran_Veteran_Backpack
    {
        displayName = "[KC GM] Veteran Heavy Backpack";
        maximumLoad = 450;
    };
    class BNA_KC_Galtorran_Veteran_Backpack_Heavy_Predef_AT: BNA_KC_Galtorran_Veteran_Backpack_Heavy
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(3AS_JLTS_MK43_AT, 2)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 4)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenade_Mag, 4)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 1)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 1)
        };
    };
    class BNA_KC_Galtorran_Veteran_Backpack_Heavy_Predef_AA: BNA_KC_Galtorran_Veteran_Backpack_Heavy_Predef_AT
    {
        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(3AS_JLTS_MK39_AA, 2)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 4)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenade_Mag, 4)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 1)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 1)
        };
    };

    class BNA_KC_Galtorran_Elite_Backpack_Heavy: BNA_KC_Galtorran_Elite_Backpack
    {
        displayName = "[KC GM] Elite Heavy Backpack";
        maximumLoad = 550;
    };
    class BNA_KC_Galtorran_Elite_Backpack_Heavy_Predef_AT: BNA_KC_Galtorran_Elite_Backpack_Heavy
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(3AS_JLTS_MK43_AT, 2)
            TRANSMAG_XX(ls_mag_classB_thermalDet, 3)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenadePersonal_Mag, 2)
            TRANSMAG_XX(SquadShieldMagazine, 2)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 3)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 3)
            TRANSMAG_XX(BNA_KC_Grenade_BactaBomb, 1)
        };
    };
    class BNA_KC_Galtorran_Elite_Backpack_Heavy_Predef_AA: BNA_KC_Galtorran_Elite_Backpack_Heavy_Predef_AT
    {
        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(3AS_JLTS_MK39_AA, 2)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 4)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenade_Mag, 4)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 1)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 1)
        };
    };

    class BNA_KC_Galtorran_Backpack_RTO: BNA_KC_Galtorran_Backpack
    {
        displayName = "[KC GM] Radio Backpack";

        model = "\OPTRE_unsc_units\army\rucksack.p3d";
        hiddenSelections[] = {"camo", "camo2", "B_Medic", "B_Addons"};
        hiddenSelectionsTextures[] = {"\optre_unsc_units\army\data\soft_backpack_co.paa", "optre_unsc_units\army\data\commopack_sno_co.paa"};
        picture = "\OPTRE_weapons\backpacks\icons\icon_b_anprc521_ca.paa";

        maximumLoad = 250;
    };
    class BNA_KC_Galtorran_Backpack_RTO_Predef_SL: BNA_KC_Galtorran_Backpack_RTO
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 4)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenade_Mag, 3)
        };
    };
    class BNA_KC_Galtorran_Veteran_Backpack_RTO_Predef_SL: BNA_KC_Galtorran_Backpack_RTO_Predef_SL
    {
        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(ls_mag_classC_thermalDet, 4)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenade_Mag, 4)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 1)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 1)
        };
    };

    class BNA_KC_Galtorran_Elite_Backpack_RTO: BNA_KC_Galtorran_Backpack_RTO
    {
        displayName = "[KC GM] Elite Radio Backpack";
        hiddenSelectionsTextures[] = {"\optre_unsc_units\army\data\soft_backpack_co.paa", "optre_unsc_units\army\data\commopack_blk_co.paa"};
        maximumLoad = 300;
    };
    class BNA_KC_Galtorran_Elite_Backpack_RTO_Predef_SL: BNA_KC_Galtorran_Elite_Backpack_RTO
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;

        class TransportMagazines
        {
            TRANSMAG_XX(BNA_KC_Mag_LW38_Green, 15)
            TRANSMAG_XX(ls_mag_classB_thermalDet, 3)
            TRANSMAG_XX(SmokeShell, 4)
            TRANSMAG_XX(ShieldGrenadePersonal_Mag, 2)
            TRANSMAG_XX(SquadShieldMagazine, 1)
            TRANSMAG_XX(JMSLLTE_thermalimploder_HandGrenade, 3)
            TRANSMAG_XX(JMSLLTE_dioxis_HandGrenade, 3)
            TRANSMAG_XX(BNA_KC_Grenade_BactaBomb, 1)
        };
    };
};


class CfgFactionClasses
{
    class BNA_KC_INDEP_Galtorran
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
    class BNA_KC_SubCat_Galtorran_Infantry_T1
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry T1 - Basic";
    };
    class BNA_KC_SubCat_Galtorran_Infantry_T2: BNA_KC_SubCat_Galtorran_Infantry_T1
    {
        displayName = "Infantry T2 - Veteran";
    };
    class BNA_KC_SubCat_Galtorran_Infantry_T3: BNA_KC_SubCat_Galtorran_Infantry_T1
    {
        displayName = "Infantry T3 - Elite";
    };
    class BNA_KC_SubCat_Galtorran_Special: BNA_KC_SubCat_Galtorran_Infantry_T1
    {
        displayName = "Special";
    };
};