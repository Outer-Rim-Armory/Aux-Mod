#include "CfgPatches.hpp"

#define GAMMOTH_DATA() dlc = "BNA_KC"; \
author = "SweMonkey and DartRuffian"; \
scope = 2; \
scopeCurator = 2; \
faction = "BNA_KC_Faction"; \
editorSubcategory = "BNA_KC_SubCat_VSupport"; \
crew = "BNA_KC_Unit_Phase2_CT"; \
side = 1;


class CfgVehicles
{
    class O_Truck_03_transport_F;
    class BNA_KC_Gammoth_Transport: O_Truck_03_transport_F
    {
        displayName = "[KC] Gammoth Transport";
        
        GAMMOTH_DATA()

        hiddenSelectionsTextures[] = {};
        textureList[] = { "CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0 };
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoGrey.paa"
                };
            };
        };
    };

    class O_Truck_03_covered_F;
    class BNA_KC_Gammoth_Covered: O_Truck_03_covered_F
    {
        displayName = "[KC] Gammoth Transport (Covered)";
        
        GAMMOTH_DATA()

        hiddenSelectionsTextures[] = {};
        textureList[] = { "CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0 };
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Covered\BNA_KC_Gammoth_Covered_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Covered\BNA_KC_Gammoth_Covered_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Covered\BNA_KC_Gammoth_Covered_CamoGrey.paa"
                };
            };
        };
    };

    class O_Truck_03_ammo_F;
    class BNA_KC_Gammoth_Ammo: O_Truck_03_ammo_F
    {
        displayName = "[KC] Gammoth Ammo Truck";
        
        GAMMOTH_DATA()

        hiddenSelectionsTextures[] = {};
        textureList[] = { "CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0 };
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoKC.paa",
                    "A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoBrown.paa",
                    "A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoGrey.paa",
                    "A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
        };
    };

    class O_Truck_03_medical_F;
    class BNA_KC_Gammoth_Medical: O_Truck_03_medical_F
    {
        displayName = "[KC] Gammoth Medical Truck";
        
        GAMMOTH_DATA()
        ace_medical_isMedicalVehicle = 1;

        hiddenSelectionsTextures[] = {};
        textureList[] = { "CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0 };
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Covered\BNA_KC_Gammoth_Covered_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Covered\BNA_KC_Gammoth_Covered_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Cargo\BNA_KC_Gammoth_Cargo_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Covered\BNA_KC_Gammoth_Covered_CamoGrey.paa"
                };
            };
        };
    };

    class O_Truck_03_repair_F;
    class BNA_KC_Gammoth_Repair: O_Truck_03_repair_F
    {
        displayName = "[KC] Gammoth Repair Truck";
        
        GAMMOTH_DATA()
        ace_repair_canRepair = 1;

        hiddenSelectionsTextures[] = {};
        textureList[] = { "CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0 };
        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Repair\BNA_KC_Gammoth_Repair_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Repair\BNA_KC_Gammoth_Repair_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Repair\BNA_KC_Gammoth_Repair_CamoGrey.paa"
                };
            };
        };
    };

    class O_Truck_03_fuel_F;
    class BNA_KC_Gammoth_Refuel: O_Truck_03_fuel_F
    {
        displayName = "[KC] Gammoth Repair Truck";
        
        GAMMOTH_DATA()
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 2;
        ace_refuel_fuelCapacity = 600;
        ace_refuel_fuelCargo = 10000;

        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoKC.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Fuel\BNA_KC_Gammoth_Fuel_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoBrown.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Fuel\BNA_KC_Gammoth_Fuel_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\BNA_KC_Gammoth_Body2_CamoGrey.paa",
                    "BNA_KC_Vehicles\Support\Data\Gammoth\Fuel\BNA_KC_Gammoth_Fuel_CamoGrey.paa"
                };
            };
        };
    };
};


class CfgEditorSubcategories
{
	class BNA_KC_SubCat_VSupport
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicles - Support";
	};
};