#include "CfgPatches.hpp"

#define KHEZU_TEXTURES() hiddenSelectionsTextures[] = \
{ \
    "\BNA_KC_Vehicles\Drones\Data\Khezu\CamoKC\Khezu_Exterior.paa", \
    "\BNA_KC_Vehicles\Drones\Data\Khezu\CamoKC\Khezu_Interior.paa", \
    "\BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret.paa" \
}; \
textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0}; \
class TextureSources \
{ \
    class CamoKC \
    { \
        author = "SweMonkey and DartRuffian"; \
        displayName = "Keeli Company Camo"; \
        factions[] = {"BNA_KC_Faction"}; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Drones\Data\Khezu\CamoKC\Khezu_Exterior.paa", \
            "\BNA_KC_Vehicles\Drones\Data\Khezu\CamoKC\Khezu_Interior.paa", \
            "\BNA_KC_Vehicles\Armored\Data\Textures\OLV20\CamoKC\OLV20_Turret.paa" \
        }; \
    }; \
    class CamoBrown: CamoKC \
    { \
        displayName = "Brown Camo"; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Drones\Data\Khezu\CamoBrown\Khezu_Exterior.paa", \
            "\BNA_KC_Vehicles\Drones\Data\Khezu\CamoBrown\Khezu_Interior.paa", \
            "\BNA_KC_Vehicles\Armored\Data\Textures\OLV20\CamoBrown\OLV20_Turret.paa" \
        }; \
    }; \
    class CamoGrey: CamoKC \
    { \
        displayName = "Grey Camo"; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Drones\Data\Khezu\CamoGrey\Khezu_Exterior.paa", \
            "\BNA_KC_Vehicles\Drones\Data\Khezu\CamoGrey\Khezu_Interior.paa", \
            "\BNA_KC_Vehicles\Armored\Data\Textures\OLV20\CamoGrey\OLV20_Turret.paa" \
        }; \
    }; \
};


class CfgVehicles
{
    class B_UGV_01_F;
    class BNA_KC_Khezu_Unarmed: B_UGV_01_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VDrones";
        editorPreview = "\BNA_KC_Vehicles\Drones\Data\Previews\BNA_KC_Khezu_Unarmed.jpg";

        displayName = "[KC] Khezu (Unarmed)";

        KHEZU_TEXTURES()
    };

    class UGV_01_base_F;
    class UGV_01_rcws_base_F: UGV_01_base_F
    {
        class Turrets;
    }
    class B_UGV_01_rcws_F: UGV_01_rcws_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
            // class CargoTurret_01;
        };
    };
    class BNA_KC_Khezu_Armed: B_UGV_01_rcws_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VDrones";
        editorPreview = "\BNA_KC_Vehicles\Drones\Data\Previews\BNA_KC_Khezu_Armed.jpg";

        displayName = "[KC] Khezu (MG/GMG)";

        KHEZU_TEXTURES()

        class Turrets: Turrets
        {
            // class CargoTurret_01
            class MainTurret: MainTurret
            {
                weapons[] = {"BNA_KC_Coax", "GMG_40mm"};
                magazines[] =
                {
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "200Rnd_40mm_G_belt"
                };
            };
        };
    };
};


class CfgEditorSubcategories
{
	class BNA_KC_SubCat_VDrones
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicles - Drones";
	};
};