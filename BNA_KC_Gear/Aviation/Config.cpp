#include "CfgPatches.hpp"
#include "\BNA_KC_Gear\Macros.hpp"


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
    class BNA_KC_Helmet_Phase2_Pilot: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] AVI P2 Helm 01 (Pilot)";

        model = "\ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
        hiddenSelections[] = {"camo1", "visor"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Aviation\Data\Textures\Helmets\Helmet_P2_Pilot.paa",
            "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_pilot_P2_helmet_ca.paa";

        HEARING_PROTECTION_CREW

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
        };
    };
    class BNA_KC_Helmet_Phase2_Pilot_CamoBrown: BNA_KC_Helmet_Phase2_Pilot
    {
        displayName = "[KC] AVI P2 Helm 01+ (Pilot) - Brown Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Aviation\Data\Textures\Helmets\Helmet_P2_Pilot_CamoBrown.paa",
            "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
    };
    class BNA_KC_Helmet_Phase2_Pilot_CamoGrey: BNA_KC_Helmet_Phase2_Pilot
    {
        displayName = "[KC] AVI P2 Helm 01+ (Pilot) - Grey Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Aviation\Data\Textures\Helmets\Helmet_P2_Pilot_CamoGrey.paa",
            "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Phase2_Pilot_Officer: BNA_KC_Helmet_Phase2_Pilot
    {
        displayName = "[KC] AVI P2 Helm 11+ (Officer)";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Aviation\Data\Textures\Helmets\Helmet_P2_Pilot_Officer.paa",
            "\ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Phase1_Pilot: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] AVI P1 Helm 01 (Pilot)";

        model = "\ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
        hiddenSelections[] = { "camo1", "camo2", "visor"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Aviation\Data\Textures\Helmets\Helmet_P1_Pilot.paa",
            "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
            "\ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

        HEARING_PROTECTION_CREW

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
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

    class BNA_KC_Uniform_Pilot: BNA_KC_Uniform_Base
    {
        displayName = "[KC] AVI Armor";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Phase2_Pilot";
        };
    };

    class BNA_KC_Uniform_Pilot_Officer: BNA_KC_Uniform_Base
    {
        displayName = "[KC] AVI 11+ Armor";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Phase2_Pilot_Officer";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_Unit_Phase2_Base;
    class BNA_KC_Unit_Phase2_Pilot: BNA_KC_Unit_Phase2_Base
    {
        displayName = "[KC] AVI P2 Pilot";
        editorSubcategory = "BNA_KC_Aviation";
        editorPreview = "\BNA_KC_Gear\Aviation\Data\Previews\Phase2_Pilot.jpg";

        uniformClass = "BNA_KC_Uniform_Pilot";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Aviation\Data\Textures\Uniforms\Uniform_Pilot_Upper.paa",
            "\BNA_KC_Gear\Aviation\Data\Textures\Uniforms\Uniform_Pilot_Lower.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Pilot", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Pilot", "BNA_KC_Vest_Basic", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };

    class BNA_KC_Unit_Phase2_Pilot_Officer: BNA_KC_Unit_Phase2_Pilot
    {
        displayName = "[KC] AVI P2 Pilot (Officer)";
        editorPreview = "\BNA_KC_Gear\Aviation\Data\Previews\Phase2_Pilot_Officer.jpg";

        uniformClass = "BNA_KC_Uniform_Pilot_Officer";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Aviation\Data\Textures\Uniforms\Uniform_Pilot_Officer_Upper.paa",
            "\BNA_KC_Gear\Aviation\Data\Textures\Uniforms\Uniform_Pilot_Officer_Lower.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Pilot_Officer", "BNA_KC_Vest_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Pilot_Officer", "BNA_KC_Vest_Officer", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };

    class BNA_KC_Unit_Phase1_Base;
    class BNA_KC_Unit_Phase1_Pilot: BNA_KC_Unit_Phase1_Base
    {
        displayName = "[KC] AVI P1 Pilot";
        editorSubcategory = "BNA_KC_Aviation";
        editorPreview = "\BNA_KC_Gear\Aviation\Data\Previews\Phase1_Pilot.jpg";

        uniformClass = "BNA_KC_Uniform_Pilot";
        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Pilot", "BNA_KC_Vest_Basic", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Pilot", "BNA_KC_Vest_Basic", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_Aviation
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Aviation";
    };
};