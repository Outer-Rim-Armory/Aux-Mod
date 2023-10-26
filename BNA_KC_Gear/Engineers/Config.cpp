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
    class BNA_KC_Helmet_Engineer: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] ENG Helm (Base)";

        model = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
        hiddenSelections[] = {"camo1", "illum", "visor"};
        hiddenSelectionsMaterials[] = {"", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat", ""};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Helmets\Engineer\Helmet_Engineer.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
        };
        picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_engineer_helmet_ca.paa";

        // LS Headlamp
        ls_lighting_hasLight = 1;
        ls_lighting_itemType = "headgear";
        ls_lighting_attachedBone = "head";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "illum", "visor"};
            uniformModel = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Engineer_CamoBrown: BNA_KC_Helmet_Engineer
    {
        displayName = "[KC] ENG Helm (Base) - Brown Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Helmets\Engineer\Helmet_Engineer_CamoBrown.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
        };
    };

    class BNA_KC_Helmet_Engineer_CamoGrey: BNA_KC_Helmet_Engineer
    {
        displayName = "[KC] ENG Helm (Base) - Grey Camo";
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Helmets\Engineer\Helmet_Engineer_CamoGrey.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
            "\ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
        };
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Engineers
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Engineers";
    };
};