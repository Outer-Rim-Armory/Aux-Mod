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

        hiddenSelectionsTextures[] = {"\OPTRE_Vehicles_Air\hornet\data\hornet_hull_desert_co.paa"};

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources
        {
            class TechnoUnion
            {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {"BNA_KC_OPFOR_TU"};
                textures[] = {"\OPTRE_Vehicles_Air\hornet\data\hornet_hull_desert_co.paa"};
            };
            class EPF: TechnoUnion
            {
                displayName = "El President Forces";
                factions[] = {"BNA_KC_OPFOR_EPF"};
                textures[] = {"\OPTRE_Vehicles_Air\hornet\data\hornet_hull_standard_co.paa"};
            };
        };
    };

    class BNA_KC_Rathian_CAP_Base: BNA_KC_Rathian_Base
    {
        displayName = "Rathian (CAP)";
        weapons[] = {"OPTRE_GUA23A", "CMFlareLauncher", "Laserdesignator_pilotCamera", "OPTRE_missiles_C2GMLS"};
        magazines[] =
        {
            "OPTRE_2000Rnd_20mm_HEIAP",
            "168Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries",
            "OPTRE_8Rnd_C2GMLS_missiles",
            "OPTRE_8Rnd_C2GMLS_missiles"
        };
    };

    class BNA_KC_Rathian_CAS_Base: BNA_KC_Rathian_Base
    {
        displayName = "Rathian (CAS)";
        weapons[] = {"OPTRE_GUA23A", "CMFlareLauncher", "Laserdesignator_pilotCamera", "OPTRE_missiles_C2GMLS"};
        magazines[] =
        {
            "OPTRE_2000Rnd_20mm_HEIAP",
            "168Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries",
            "OPTRE_8Rnd_C2GMLS_missiles",
            "OPTRE_8Rnd_C2GMLS_missiles"
        };
    };
};