#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class O_MRAP_02_F;
    class BNA_KC_Glavenus_Unarmed: O_MRAP_02_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_Cars";
        editorPreview = "\BNA_KC_Vehicles\Light\Glavenus\Data\Previews\Glavenus.jpg";

        displayName = "Glavenus (Unarmed)";
        crew = "BNA_KC_Unit_Phase2_CT";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_CT"};
        side = 1;

        weapons[] = {"BNA_KC_Glavenus_Horn", "SmokeLauncher"};

        fuelCapacity = 82.5;
        fuelConsumptionRate = 0.01;

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class KeeliCompany
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Body2.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Turret.paa"
                };
            };
            class CamoKC: KeeliCompany
            {
                displayName = "Keeli Company Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoKC\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoKC\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoKC\Turret.paa"
                };
            };
            class CamoBrown: KeeliCompany
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoBrown\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoBrown\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoBrown\Turret.paa"
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoGrey\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoGrey\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoGrey\Turret.paa"
                };
            };
        };

        INVENTORY_VEHICLE_COMMON
    };

    class BNA_KC_Glavenus_Medic: BNA_KC_Glavenus_Unarmed
    {
        displayName = "Glavenus (Medic)";
        editorPreview = "\BNA_KC_Vehicles\Light\Glavenus\Data\Previews\Glavenus_Medic.jpg";

        weapons[] = {"BNA_KC_Glavenus_Horn", "SmokeLauncher"};
        attendant = 1;

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\Medic\Body.paa",
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\Medic\Body2.paa",
            ""
        };
        textureList[] = {};
        class TextureSources {};

        INVENTORY_VEHICLE_MEDICAL
    };

    class Car;
    class Car_F: Car
    {
        class Turrets;
    };
    class MRAP_02_base_F: Car_F {};
    class MRAP_02_hmg_base_F: MRAP_02_base_F
    {
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F {};
    class BNA_KC_Glavenus_HMG: O_MRAP_02_hmg_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_Cars";
        editorPreview = "\BNA_KC_Vehicles\Light\Glavenus\Data\Previews\Glavenus_Turret.jpg";

        displayName = "Glavenus (HMG)";
        crew = "BNA_KC_Unit_Phase2_CT";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_CT"};
        side = 1;

        weapons[] = {"BNA_KC_Glavenus_Horn", "SmokeLauncher"};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class KeeliCompany
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Body2.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Turret.paa"
                };
            };
            class CamoKC: KeeliCompany
            {
                displayName = "Keeli Company Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoKC\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoKC\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoKC\Turret.paa"
                };
            };
            class CamoBrown: KeeliCompany
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoBrown\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoBrown\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoBrown\Turret.paa"
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoGrey\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoGrey\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoGrey\Turret.paa"
                };
            };
        };

        INVENTORY_VEHICLE_COMMON

        class AnimationSources: AnimationSources
        {
            class muzzle_hide
            {
                source = "reload";
                weapon = "BNA_KC_Coax";
            };
            class muzzle_rot
            {
                source = "ammorandom";
                weapon = "BNA_KC_Coax";
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BNA_KC_Coax"};
                magazines[] =
                {
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag"
                };
            };
        };
    };

    class O_MRAP_02_gmg_F;
    class BNA_KC_Glavenus_GMG: O_MRAP_02_gmg_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_Cars";
        editorPreview = "\BNA_KC_Vehicles\Light\Glavenus\Data\Previews\Glavenus_Turret.jpg";

        displayName = "Glavenus (GMG)";
        crew = "BNA_KC_Unit_Phase2_CT";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_CT"};
        side = 1;

        weapons[] = {"BNA_KC_Glavenus_Horn", "SmokeLauncher"};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources
        {
            class KeeliCompany
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Body2.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Turret.paa"
                };
            };
            class CamoKC: KeeliCompany
            {
                displayName = "Keeli Company Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoKC\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoKC\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoKC\Turret.paa"
                };
            };
            class CamoBrown: KeeliCompany
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoBrown\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoBrown\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoBrown\Turret.paa"
                };
            };
            class CamoGrey: KeeliCompany
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoGrey\Body.paa",
                    "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoGrey\Body2.paa",
                    "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoGrey\Turret.paa"
                };
            };
        };

        INVENTORY_VEHICLE_COMMON
    };
};