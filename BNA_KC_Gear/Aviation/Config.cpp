#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_gar_phase1Pilot_helmet;
    class ls_gar_phase2Pilot_helmet;

    class BNA_KC_Helmet_Phase1_Pilot_Base: ls_gar_phase1Pilot_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] AVI P1 Helm (Base)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Aviation\Data\Helmets\BNA_KC_Helmet_P1_Pilot.paa",
            "ls_armor_bluefor\helmet\gar\phase1Pilot\data\lifesupport_co.paa",
            "ls_armor_bluefor\helmet\gar\phase1Pilot\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Phase2_Pilot_Base: ls_gar_phase2Pilot_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] AVI Helm (Base)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Aviation\Data\Helmets\BNA_KC_Helmet_P2_Pilot.paa",
            "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
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
    #include "Helmets_Placeable.hpp"
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_Unit_Phase1_Base;

    class BNA_KC_Unit_Phase1_Pilot: BNA_KC_Unit_Phase1_Base
    {
        editorSubcategory = "BNA_KC_Aviation";
        // editorPreview = "BNA_KC_Gear\SpecialForces\Data\UI\BNA_KC_Preview_Pilot";
        
        displayName = "[KC] AVI P1 Pilot";

        uniformClass = "BNA_KC_Uniform_Pilot";
        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Pilot_Base", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Pilot_Base", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        backpack = "";
    };

    class BNA_KC_Unit_Phase2_Pilot: BNA_KC_Unit_Phase1_Pilot
    {
        displayName = "[KC] AVI Pilot";

        uniformClass = "BNA_KC_Uniform_Pilot";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Aviation\Data\Uniforms\BNA_KC_Uniform_Pilot_Upper.paa",
            "BNA_KC_Gear\Aviation\Data\Uniforms\BNA_KC_Uniform_Pilot_Lower.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };
        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Pilot_Base", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Pilot_Base", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
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