#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Car_F;
    class UGV_01_base_F: Car_F
    {
        class HitPoints;
    };
    class B_UGV_01_F: UGV_01_base_F
    {
        class HitPoints: HitPoints
        {
            class HitBody;
            class HitEngine;
            class HitFuel;
            class HitHull;
            class HitLBWheel;
            class HitLFWheel;
            class HitRBWheel;
            class HitRFWheel;
        };
    };
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

        armor = 200;
        fuelCapacity = 82.5;
        fuelConsumptionRate = 0.01;

        maxSpeed = 135;
        enginePower = 276;
        engineMOI = 1.0;
        maxOmega = 471;
        idleRpm = 1000;
        redRpm = 4000;
        peakTorque = 1546;
        torqueCurve[] = {{0,0.3},{0.178,0.5},{0.25,0.85},{0.4,0.95},{0.5,1},{0.625,0.95},{0.75,0.7},{1,0.5}};
        dampingRateFullThrottle = 0.08;
        dampingRateZeroThrottleClutchDisengaged = 0.35;
        dampingRateZeroThrottleClutchEngaged = 2;

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
                factions[] = {};
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

        class HitPoints: HitPoints
        {
            class HitBody: HitBody
            {
                armor = 4;
                explosionShielding = 1;
                passThrough = 1;
                minimalHit = 0.01;
            };
            class HitEngine: HitEngine
            {
                armor = 0.5;
                explosionShielding = 0.4;
                minimalHit = 0.2;
                passThrough = 0.4;
            };
            class HitFuel: HitFuel
            {
                armor = 0.5;
                explosionShielding = 0.1;
                minimalHit = 0.2;
                passThrough = 0.2;
            };
            class HitHull: HitHull
            {
                armor = 1;
                explosionShielding = 0.2;
                minimalHit = 0.2;
                passThrough = 0.2;
            };
            class HitLBWheel: HitLBWheel
            {
                armor = 0.2;
                explosionShielding = 4;
                passThrough = 0.3;
            };
            class HitLFWheel: HitLFWheel
            {
                armor = -250;
                explosionShielding = 4;
                minimalHit = -0.016;
                passThrough = 0;
            };
            class HitRBWheel: HitRBWheel
            {
                armor = 0.2;
                explosionShielding = 4;
                passThrough = 0.3;
            };
            class HitRFWheel: HitRFWheel
            {
                armor = -250;
                explosionShielding = 4;
                minimalHit = -0.016;
                passThrough = 0;
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
                factions[] = {};
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