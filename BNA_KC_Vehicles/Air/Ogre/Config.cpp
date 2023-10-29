#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Helicopter_Base_H;
    class OPTRE_Pelican_F: Helicopter_Base_H
    {

    };
    class BNA_KC_Ogre_Base: OPTRE_Pelican_F
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

        displayName = "Ogre";

        weapons[] = {"CMFlareLauncher"};
        magazines[] =
        {
            "168Rnd_CMFlare_Chaff_Magazine"
        };

        tf_hasLRradio = 1;
        tf_range = 25000;
        tf_isolatedAmount = 0.4;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";

        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"};

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources
        {
            class TechnoUnion
            {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {"BNA_KC_OPFOR_TU"};
                textures[] = {"\OPTRE_Vehicles\Pelican\data\PelicanExterior_Tan_CO.paa"};
            };
            class EPF: TechnoUnion
            {
                displayName = "El President Forces";
                factions[] = {"BNA_KC_OPFOR_EPF"};
                textures[] = {"\OPTRE_Vehicles\Pelican\data\PelicanExterior_standard_CO.paa"};
            };
        };
    };
};