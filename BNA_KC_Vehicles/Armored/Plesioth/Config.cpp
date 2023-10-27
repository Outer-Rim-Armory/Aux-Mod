#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class OPTRE_M808B_UNSC;
    class BNA_KC_Plesioth_Base: OPTRE_M808B_UNSC
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        editorPreview = "\OPTRE_Vehicles_Tracked\Scorpion\data\UI\OPTRE_M808B_UNSC.jpg";

        displayName = "Plesioth";

        hiddenSelectionsTextures[] =
        {
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"
        };

        textureList[] = {"EPF", 1, "TechnoUnion", 0};
        class TextureSources
        {
            class EPF
            {
                author = "Article 2 Studios";
                displayName = "El President Forces";
                factions[] = {"BNA_KC_OPFOR_EPF"};
                textures[] =
                {
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_lopo_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"
                };
            };
            class TechnoUnion: EPF
            {
                displayName = "Techno Union";
                factions[] = {"BNA_KC_OPFOR_TU"};
                textures[] =
                {
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_tur_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\det_3_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\mine_roller_desert_co.paa"
                };
            };
        };
    };
};