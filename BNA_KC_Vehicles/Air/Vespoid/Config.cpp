#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class OPTRE_falcon_base_unarmed;
    class BNA_KC_Vespoid_Base: OPTRE_falcon_base_unarmed
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

        displayName = "Vespoid";

        weapons[] = {"CMFlareLauncher", "Laserdesignator_pilotCamera"};
        magazines[] = {"168Rnd_CMFlare_Chaff_Magazine", "Laserbatteries"};

        hiddenSelections[] = {"camo1", "camo2", "camo3", "attach_gun", "attach_sideguns"};
        hiddenSelectionsTextures[] =
        {
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Main_co.paa",
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Attachments_co.paa",
            "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Interior_co.paa"
        };

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources
        {
            class TechnoUnion
            {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {"BNA_KC_OPFOR_TU"};
                textures[] =
                {
                    "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Main_co.paa",
                    "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Attachments_co.paa",
                    "\OPTRE_Vehicles_Air\Falcon\data\Tan\Tan_Falcon_Interior_co.paa"
                };
            };
            class EPF: TechnoUnion
            {
                displayName = "El President Forces";
                factions[] = {"BNA_KC_OPFOR_EPF"};
                textures[] =
                {
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_main_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
                    "\OPTRE_Vehicles_Air\falcon\data\falcon_interior_co.paa"
                };
            };
        };
    };
};