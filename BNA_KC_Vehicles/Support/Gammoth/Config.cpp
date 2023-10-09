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

    class O_Truck_03_ammo_F;
    class BNA_KC_Gammoth_Ammo: O_Truck_03_ammo_F
    {
        GAMMOTH_COMMON()
        displayName = "Gammoth Ammo Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Ammo.jpg";

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
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoKC.paa",
                    "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoBrown.paa",
                    "\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
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

    class O_Truck_03_medical_F;
    class BNA_KC_Gammoth_Medical: O_Truck_03_medical_F
    {
        GAMMOTH_COMMON()
        displayName = "[KC] Gammoth Medical Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Medical.jpg";

        attendant = 1;

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
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoKC.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Covered\Covered_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Covered\Covered_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
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

    class O_Truck_03_repair_F;
    class BNA_KC_Gammoth_Repair: O_Truck_03_repair_F
    {
        GAMMOTH_COMMON()
        displayName = "[KC] Gammoth Repair Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Repair.jpg";

        ace_repair_canRepair = 1;

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
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Repair\Repair_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Repair\Repair_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Repair\Repair_CamoGrey.paa"
                };
            };
        };
    };

    class O_Truck_03_fuel_F;
    class BNA_KC_Gammoth_Refuel: O_Truck_03_fuel_F
    {
        GAMMOTH_COMMON()
        displayName = "Gammoth Refuel Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Refuel.jpg";

        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 2;
        ace_refuel_fuelCapacity = 600;
        ace_refuel_fuelCargo = 10000;

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
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Fuel\Fuel_CamoKC.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Fuel\Fuel_CamoBrown.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoGrey.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Fuel\Fuel_CamoGrey.paa"
                };
            };
        };
    };

    class O_Truck_03_device_F;
    class BNA_KC_Gammoth_Device: O_Truck_03_device_F
    {
        GAMMOTH_COMMON()
        displayName = "Gammoth Device Truck";
        editorPreview = "\BNA_KC_Vehicles\Support\Gammoth\Data\Previews\Gammoth_Device.jpg";

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
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoKC.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Body\Body2_CamoBrown.paa",
                    "\BNA_KC_Vehicles\Support\Gammoth\Data\Textures\Cargo\Cargo_CamoBrown.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
                    "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
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