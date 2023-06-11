#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ls_sob_phase1SpecOp_helmet;
    class ls_sob_phase2SpecOp_helmet;

    class BNA_KC_Helmet_Phase1_Tanker_Base: ls_sob_phase1SpecOp_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] ARMR P1 Helm (Trooper)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Armored\Data\Helmets\BNA_KC_Helmet_P1_Tanker.paa",
            "ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
        };
    };
    class BNA_KC_Helmet_Phase1_Tanker_v2: BNA_KC_Helmet_Phase1_Tanker_Base
    {
        displayName = "[KC] ARMR P1 Helm (Trooper, Version 2)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Armored\Data\Helmets\BNA_KC_Helmet_P1_Tanker_v2.paa",
            "ls_armor_bluefor\helmet\sob\phase1SpecOp\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Phase2_Tanker_Base: ls_sob_phase2SpecOp_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] ARMR Helm (Trooper)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Armored\Data\Helmets\BNA_KC_Helmet_P2_Tanker.paa",
            "ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
        };
    };
    class BNA_KC_Helmet_Phase2_Tanker_v2: BNA_KC_Helmet_Phase2_Tanker_Base
    {
        displayName = "[KC] ARMR Helm (Trooper, Version 2)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Armored\Data\Helmets\BNA_KC_Helmet_P2_Tanker_v2.paa",
            "ls_armor_bluefor\helmet\sob\phase2SpecOp\data\visor_co.paa"
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

    class BNA_KC_Unit_Phase1_Tanker: BNA_KC_Unit_Phase1_Base
    {
        editorSubcategory = "BNA_KC_Armored";
        // editorPreview = "BNA_KC_Gear\SpecialForces\Data\UI\BNA_KC_Preview_Tanker";
        
        displayName = "[KC] ARMR P1 Tanker";

        uniformClass = "BNA_KC_Uniform_CT";
        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Tanker_Base", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Tanker_Base", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        backpack = "";
    };

    class BNA_KC_Unit_Phase2_Tanker: BNA_KC_Unit_Phase1_Tanker
    {
        displayName = "[KC] ARMR Tanker";

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Tanker_Base", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Tanker_Base", "lsd_gar_clone_vest", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
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