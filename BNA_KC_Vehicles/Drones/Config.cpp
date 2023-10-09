#include "CfgPatches.hpp"

#define KHEZU_TEXTURES() hiddenSelectionsTextures[] = \
{ \
    "BNA_KC_Vehicles\Drones\Data\Khezu\BNA_KC_Khezu_Ext_CamoKC.paa", \
    "BNA_KC_Vehicles\Drones\Data\Khezu\BNA_KC_Khezu_Int_CamoKC.paa", \
    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret.paa" \
}; \
textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0}; \
class TextureSources \
{ \
    class CamoKC \
    { \
        author = "SweMonkey and DartRuffian"; \
        displayName = "Keeli Company Camo"; \
        factions[] = { "BNA_KC_Faction" }; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Drones\Data\Khezu\BNA_KC_Khezu_Ext_CamoKC.paa", \
            "BNA_KC_Vehicles\Drones\Data\Khezu\BNA_KC_Khezu_Int_CamoKC.paa", \
            "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret.paa" \
        }; \
    }; \
    class CamoBrown: CamoKC \
    { \
        displayName = "Brown Camo"; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Drones\Data\Khezu\BNA_KC_Khezu_Ext_CamoBrown.paa", \
            "BNA_KC_Vehicles\Drones\Data\Khezu\BNA_KC_Khezu_Int_CamoBrown.paa", \
            "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret_CamoBrown.paa" \
        }; \
    }; \
    class CamoGrey: CamoKC \
    { \
        displayName = "Grey Camo"; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Drones\Data\Khezu\BNA_KC_Khezu_Ext_CamoGrey.paa", \
            "BNA_KC_Vehicles\Drones\Data\Khezu\BNA_KC_Khezu_Int_CamoGrey.paa", \
            "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret_CamoGrey.paa" \
        }; \
    }; \
};


class CfgVehicles
{

};