#include "CfgPatches.hpp"


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

        displayName = "[KC] AVI P2 Helm (Base)";

        model = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
        hiddenSelections[] = { "camo1", "visor" };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Aviation\Data\Helmets\BNA_KC_Helmet_P2_Pilot.paa",
            "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
        };
        picture = "\SWLB_clones\data\ui\icon_SWLB_clone_pilot_P2_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "visor" };
            uniformModel = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Phase1_Pilot: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] AVI P1 Helm (Base)";

        model = "ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
        hiddenSelections[] = { "camo1", "camo2", "visor" };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Aviation\Data\Helmets\BNA_KC_Helmet_P1_Pilot.paa",
            "ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
            "ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "camo2", "visor" };
            uniformModel = "ls_armor_bluefor\helmet\gar\phase1Pilot\ls_gar_phase1Pilot_helmet.p3d";
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

        uniformClass = "BNA_KC_Uniform_Pilot";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Aviation\Data\Uniforms\BNA_KC_Uniform_Pilot_Upper.paa",
            "BNA_KC_Gear\Aviation\Data\Uniforms\BNA_KC_Uniform_Pilot_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Pilot", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Pilot", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };

    class BNA_KC_Unit_Phase1_Base;
    class BNA_KC_Unit_Phase1_Pilot: BNA_KC_Unit_Phase1_Base
    {
        displayName = "[KC] AVI P1 Pilot";
        editorSubcategory = "BNA_KC_Aviation";

        uniformClass = "BNA_KC_Uniform_Pilot";
        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Pilot", "lsd_gar_clone_vest", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Pilot", "lsd_gar_clone_vest", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
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