#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"

#define GAMMOTH_COMMON() dlc = "BNA_KC"; \
author = "SweMonkey and DartRuffian"; \
scope = 2; \
scopeCurator = 2; \
faction = "BNA_KC_Faction"; \
editorSubcategory = "BNA_KC_SubCat_VSupport"; \
crew = "BNA_KC_Unit_Phase2_CT"; \
typicalCargo[] = {"BNA_KC_Unit_Phase2_CT"}; \
side = 1; \
weapons[] = {"BNA_KC_Gammoth_Horn"};


class CfgVehicles
{
    class O_Truck_03_transport_F;
    class BNA_KC_Gammoth_Base: O_Truck_03_transport_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VSupport";

        displayName = "Gammoth (Base)"
        crew = "BNA_KC_Unit_Phase2_CT";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_CT"};
        side = 1;

        weapons[] = {"BNA_KC_Gammoth_Horn"};

        hiddenSelectionsTextures[] = {};
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
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoGrey.paa"
                };
            };
        };

        INVENTORY_VEHICLE_BASE(2)
    };

    class BNA_KC_Gammoth_Transport: BNA_KC_Gammoth_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Gammoth Transport";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Transport.jpg";
    };

    class BNA_KC_Gammoth_Covered: BNA_KC_Gammoth_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Gammoth Transport (Covered)";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Covered.jpg";

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_covered_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_covered_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Covered_CA.paa";

        class TextureSources: TextureSources
        {
            class CamoKC: CamoKC
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Covered\Covered_CamoKC.paa"
                };
            };
            class CamoBrown: CamoBrown
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Covered\Covered_CamBrown.paa"
                };
            };
            class CamoGrey: CamoGrey
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Covered\Covered_CamoGrey.paa"
                };
            };
        };
    };

    class BNA_KC_Gammoth_Ammo: BNA_KC_Gammoth_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Gammoth Ammo Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Ammo.jpg";

        ace_cargo_space = 8;
        ace_rearm_defaultSupply = 1200;
        supplyRadius = 10;
        transportAmmo = 0;
        transportSoldier = 1;
        vehicleClass = "Support";

        explosionEffect = "FuelExplosion";
        fuelExplosionPower = 5;
        secondaryExplosion = 10000;

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_box_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_box_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_box_CA.paa";

        class TextureSources: TextureSources
        {
            class CamoKC: CamoKC
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoKC.paa",
                    "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
            class CamoBrown: CamoBrown
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoBrown.paa",
                    "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
            class CamoGrey: CamoGrey
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoGrey.paa",
                    "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
        };
    };

    class BNA_KC_Gammoth_Medical: BNA_KC_Gammoth_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Gammoth Medical Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Medical.jpg";

        ace_cargo_space = 8;
        supplyRadius = 10;
        transportSoldier = 12;
        vehicleClass = "Support";
        attendant = 1;
        threat[] = {0, 0, 0};

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_medevac_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"};
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_medevac_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_medevac_CA.paa";

        class TextureSources: TextureSources
        {
            class CamoKC: CamoKC
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Covered\Covered_CamoKC.paa"
                };
            };
            class CamoBrown: CamoBrown
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Covered\Covered_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoGrey
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Covered\Covered_CamoGrey.paa"
                };
            };
        };
    };

    class BNA_KC_Gammoth_Repair: BNA_KC_Gammoth_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Gammoth Repair Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Repair.jpg";

        ace_cargo_space = 12;
        ace_repair_canRepair = 1;
        supplyRadius = 10;
        transportSoldier = 1;
        transportRepair = 0;
        vehicleClass = "Support";

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_repair_F.p3d";
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_ammo_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_ammo_CA.paa";

        class TextureSources: TextureSources
        {
            class CamoKC: CamoKC
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Repair\Repair_CamoKC.paa"
                };
            };
            class CamoBrown: CamoBrown
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Repair\Repair_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoGrey
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Repair\Repair_CamoGrey.paa"
                };
            };
        };
    };

    class BNA_KC_Gammoth_Refuel: BNA_KC_Gammoth_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Gammoth Refuel Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Refuel.jpg";

        ace_cargo_space = 4;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 2;
        ace_refuel_fuelCapacity = 600;
        ace_refuel_fuelCargo = 10000;
        ace_refuel_hooks[] = {{1.3, -1.59, -0.62}, {-1.16, -1.59, -0.62}};

        supplyRadius = 10;
        transportSoldier = 1;
        transportFuel = 0;
        vehicleClass = "Support";

        explosionEffect = "FuelExplosion";
        fuelExplosionPower = 5;
        secondaryExplosion = 10000;

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_fuel_F.p3d";
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_fuel_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Fuel_CA.paa";
        mapSize = 11.07;

        class TextureSources: TextureSources
        {
            class CamoKC: CamoKC
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Fuel\Fuel_CamoKC.paa"
                };
            };
            class CamoBrown: CamoBrown
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Fuel\Fuel_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoGrey
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Fuel\Fuel_CamoGrey.paa"
                };
            };
        };
    };

    class BNA_KC_Gammoth_Device: BNA_KC_Gammoth_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Gammoth Device Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Device.jpg";

        ace_cargo_space = 4;
        aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2"}, {"Light_1"}};

        transportSoldier = 1;

        model = "\A3\Soft_F_EPC\Truck_03\Truck_03_device_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4", "Camo5"};
        picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_device_CA.paa";
        icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Device_CA.paa";

        class TextureSources: TextureSources
        {
            class CamoKC: CamoKC
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoKC.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
                };
            };
            class CamoBrown: CamoBrown
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoBrown.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
                };
            };
            class CamoGrey: CamoGrey
            {
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoGrey.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
                };
            };
        };
    };
};