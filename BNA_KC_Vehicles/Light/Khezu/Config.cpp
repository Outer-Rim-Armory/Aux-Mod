#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


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
        editorSubcategory = "BNA_KC_SubCat_Drones";
        editorPreview = "\BNA_KC_Vehicles\Light\Khezu\Data\Previews\Khezu.jpg";

        displayName = "Khezu (Unarmed)";

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoKC\Body.paa",
            "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoKC\Body2.paa",
            "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoKC\Turret.paa"
        };
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoKC\Body.paa",
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoKC\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoKC\Turret.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoBrown\Body.paa",
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoBrown\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoBrown\Turret.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoGrey\Body.paa",
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoGrey\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoGrey\Turret.paa"
                };
            };
        };
    };

    class Car_F;
    class UGV_01_base_F: Car_F
    {
        class Turrets;
    };
    class UGV_01_rcws_base_F: UGV_01_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01;
        };
    };
    class B_UGV_01_rcws_F: UGV_01_rcws_base_F {};
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
        editorSubcategory = "BNA_KC_SubCat_Drones";
        editorPreview = "\BNA_KC_Vehicles\Light\Khezu\Data\Previews\Khezu_Turret.jpg";

        displayName = "Khezu (HMG/GMG)";

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoKC\Body.paa",
            "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoKC\Body2.paa",
            "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoKC\Turret.paa"
        };
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoKC\Body.paa",
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoKC\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoKC\Turret.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoBrown\Body.paa",
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoBrown\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoBrown\Turret.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoGrey\Body.paa",
                    "\BNA_KC_Vehicles\Light\Khezu\Data\Textures\CamoGrey\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoGrey\Turret.paa"
                };
            };
        };

        class Turrets: Turrets
        {
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
            class CargoTurret_01: CargoTurret_01 {};
        };
    };
};