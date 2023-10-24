#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class 3AS_AAT;
    class BNA_KC_AAT: 3AS_AAT
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_OPFOR_CIS";
        editorSubcategory = "BNA_KC_SubCat_CIS_Tanks";

        displayName = "AAT";
        crew = "JLTS_Droid_B1_Crew";
        typicalCargo[] = {"JLTS_Droid_B1_Crew"};

        hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
    };
};