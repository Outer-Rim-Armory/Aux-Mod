#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class OPTRE_Hornet_base;
    class BNA_KC_Rathian_Base: OPTRE_Hornet_base
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        side = 0;
        // editorPreview = "";

        displayName = "Rathian";
    };
};