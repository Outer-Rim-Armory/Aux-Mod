#include "CfgPatches.hpp"


class CfgVehicles
{
    class ls_blueforHeadgear_base;
    #include "\BNA_KC_Gear\Macros.hpp" // Helmet Holder macro

    class BNA_KC_HelmetHolder_P1_CR: ls_blueforHeadgear_base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Helmets_P1";

        displayName = "[KC] INF P1 Helm 00 (Recruit)";
        class TransportItems
        {
            class BNA_KC_Helmet_Phase1_CR
            {
                name = "BNA_KC_Helmet_Phase1_CR";
                count = 1;
            };
        };
    };
    #include "Configs/INF_Helmets.hpp"
    #include "Configs/ARMR_Helmets.hpp"
    #include "Configs/AVI_Helmets.hpp"
    #include "Configs/SF_Helmets.hpp"
    #include "Configs/Custom_Helmets.hpp"
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Helmets_P1
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Placeable Helmets - Phase 1";
    };
    class BNA_KC_SubCat_Helmets_P2
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Placeable Helmets - Phase 2";
    };
    class BNA_KC_SubCat_Helmets_Insulated
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Placeable Helmets - Insulated";
    };
    class BNA_KC_SubCat_Helmets_SF
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Placeable Helmets - Special Forces";
    };
    class BNA_KC_SubCat_Helmets_Customs
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Placeable Helmets - Customs";
    };
};