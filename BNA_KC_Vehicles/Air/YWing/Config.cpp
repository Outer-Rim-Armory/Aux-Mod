#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Plane_Fighter_03_dynamicLoadout_base_F;
    class BTL_Base: Plane_Fighter_03_dynamicLoadout_base_F
    {
        /* ... */
    };
    class BNA_KC_BTLB_YWing: BTL_Base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAir";

        displayName = "BTL-B Y-Wing";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};
    };
};