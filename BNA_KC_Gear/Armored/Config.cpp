#include "CfgPatches.hpp"
#include "..\Macros.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_gar_phase2_helmet;
    class BNA_KC_Helmet_Base: ls_gar_phase2_helmet
    {
        class ItemInfo;
    };
    class BNA_KC_Helmet_Phase2_Tanker: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] ARMR P2 Helm (Crewman)";

        model = "\ls_armor_bluefor\helmet\sob\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d";
        hiddenSelections[] = {"Camo1", "visor"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Armored\Data\Textures\Helmets\Helmet_P2_Tanker.paa",
            "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
        };

        subItems[] = {"BNA_KC_NVG_Chip"};

        HEARING_PROTECTION_CREW

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo1", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\sob\phase2SpecOp\ls_sob_phase2SpecOp_helmet.p3d";
        };
    };
    class BNA_KC_Helmet_Phase2_Tanker_CamoBrown: BNA_KC_Helmet_Phase2_Tanker
    {
        displayName = "[KC] ARMR P2 Helm (Crewman) - Brown Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Armored\Data\Textures\Helmets\Helmet_P2_Tanker_CamoBrown.paa",
            "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
        };
    };
    class BNA_KC_Helmet_Phase2_Tanker_CamoGrey: BNA_KC_Helmet_Phase2_Tanker
    {
        displayName = "[KC] ARMR P2 Helm (Crewman) - Grey Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Armored\Data\Textures\Helmets\Helmet_P2_Tanker_CamoGrey.paa",
            "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Phase2_Tanker_v2: BNA_KC_Helmet_Phase2_Tanker
    {
        displayName = "[KC] ARMR P2 Helm (Crewman, Version 2)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Armored\Data\Textures\Helmets\Helmet_P2_Tanker_v2.paa",
            "\ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Phase1_Tanker: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] ARMR P1 Helm (Trooper)";

        model = "\ls_armor_bluefor\helmet\sob\phase1SpecOp\ls_sob_phase1SpecOp_helmet.p3d";
        hiddenSelections[] = {"Camo1", "visor"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Armored\Data\Textures\Helmets\Helmet_P1_Tanker.paa",
            "\ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
        };

        subItems[] = {"BNA_KC_NVG_Chip"};

        HEARING_PROTECTION_CREW

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo1", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\sob\phase1SpecOp\ls_sob_phase1SpecOp_helmet.p3d";
        };
    };
    class BNA_KC_Helmet_Phase1_Tanker_v2: BNA_KC_Helmet_Phase1_Tanker
    {
        displayName = "[KC] ARMR P1 Helm (Trooper, Version 2)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Armored\Data\Textures\Helmets\Helmet_P1_Tanker_v2.paa",
            "\ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
        };
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_gar_phase2_uniform;
    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class BNA_KC_Uniform_Tanker: BNA_KC_Uniform_Base
    {
        displayName = "[KC] ARMR Uniform 01 (Crewman)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Phase2_Tanker";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_Unit_Phase2_Base;
    class BNA_KC_Unit_Phase2_Tanker: BNA_KC_Unit_Phase2_Base
    {
        displayName = "[KC] ARMR P2 Tanker";
        editorSubcategory = "BNA_KC_Armored";
        editorPreview = "\BNA_KC_Gear\Armored\Data\Textures\Previews\Phase2_Tanker.jpg";

        uniformClass = "BNA_KC_Uniform_Tanker";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Armored\Data\Textures\Uniforms\Uniform_Tanker_Upper.paa",
            "\BNA_KC_Gear\Armored\Data\Textures\Uniforms\Uniform_Tanker_Lower.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Tanker", "SWLB_clone_recon_armor", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Tanker", "SWLB_clone_recon_armor", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        backpack = "ls_mandalorian_light_backpack";
    };

    class BNA_KC_Unit_Phase1_Base;
    class BNA_KC_Unit_Phase1_Tanker: BNA_KC_Unit_Phase1_Base
    {
        displayName = "[KC] ARMR P1 Tanker";
        editorSubcategory = "BNA_KC_Armored";
        editorPreview = "\BNA_KC_Gear\Armored\Data\Textures\Previews\Phase1_Tanker.jpg";

        uniformClass = "BNA_KC_Uniform_Tanker";

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Tanker", "SWLB_clone_recon_armor", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Tanker", "SWLB_clone_recon_armor", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        backpack = "ls_mandalorian_light_backpack";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_Armored
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Armored";
    };
};