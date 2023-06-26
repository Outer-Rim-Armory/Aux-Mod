#include "CfgPatches.hpp"


class CfgWeapons
{
    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class lsd_blueforUniform_base;
    class lsd_gar_jediCommander_uniform: lsd_blueforUniform_base
    {
        class ItemInfo;
    };

    class BNA_KC_Uniform_Jedi_Commander: lsd_gar_jediCommander_uniform
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Jedi Commander Armor";

        class ItemInfo: ItemInfo
        {
            uniformModel = "-";
            uniformClass = "BNA_KC_Unit_Jedi_Commander";
            containerClass = "Supply150";
            mass = 40;
            uniformType = "Neopren";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };

    class BNA_KC_Vest_Jedi: SWLB_clone_basic_armor
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Jedi Vest";

        class ItemInfo: ItemInfo
        {
            vestType = "Rebreather";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class lsd_gar_jediCommander_base;

    class BNA_KC_Unit_Jedi_Commander: lsd_gar_jediCommander_base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_Jedi";
        
        displayName = "[KC] Jedi Commander";

        uniformClass = "BNA_KC_Uniform_Jedi_Commander";
        linkedItems[] =
        {
            "BNA_KC_Vest_Jedi", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Vest_Jedi", "ItemMap", "SWLB_comlink", "ItemCompass", "tf_microdagr"
        };
        backpack = "";
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Jedi
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        
        scope = 2;
        scopeCurator = 2;

        displayName = "Jedi Order";
    };
};