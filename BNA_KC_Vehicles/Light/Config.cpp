#include "CfgPatches.hpp"


// Macros
// TODO: Add DC-15X ammo
#define HORNET_INVENTORY() class TransportWeapons \
{ \
    class _xx_BNA_KC_DC15A \
    { \
        weapon = "BNA_KC_DC15A"; \
        count = 1; \
    }; \
    class _xx_BNA_KC_DC15S \
    { \
        weapon = "BNA_KC_DC15S"; \
        count = 1; \
    }; \
}; \
class TransportMagazines \
{ \
    class _xx_12thFleet_Mag_DC15A \
    { \
        magazine = "12thFleet_Mag_DC15A"; \
        count = 15; \
    }; \
    class _xx_12thFleet_Mag_DC15S \
    { \
        magazine = "12thFleet_Mag_DC15S"; \
        count = 15; \
    }; \
}; \
class TransportItems \
{ \
    class _xx_ACE_elasticBandage \
    { \
        name = "ACE_elasticBandage"; \
        count = 15; \
    }; \
};

#define HORNET_TEXTURES() hiddenSelectionsTextures[] = \
{ \
    "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Camo_Brown.paa", \
    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", \
    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" \
}; \
textureList[] = {"BrownCamo", 1, "GreyCamo", 0}; \
class TextureSources \
{ \
    class BrownCamo \
    { \
        author = "SweMonkey and DartRuffian"; \
        displayName = "KC Brown Camo"; \
        factions[] = { "BNA_KC_Faction" }; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Camo_Brown.paa", \
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", \
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" \
        }; \
    }; \
    class GreyCamo: BrownCamo \
    { \
        displayName = "Grey Camo"; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Camo_Grey.paa", \
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", \
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" \
        }; \
    }; \
};


class CfgVehicles
{
    class 3AS_ATRT;
    class BNA_KC_ATRT: 3AS_ATRT
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";

        displayName = "[KC] AT-RT";

		// Textures are not set-up on the 3AS end yet.
		// hiddenSelectionsTextures[] =
		// {
		// 	"BNA_KC_Vehicles\Light\Data\ATRT\BNA_KC_ATRT.paa"
		// };
	};

    class O_LSV_02_unarmed_F;
    class BNA_KC_Hornet_Unarmed: O_LSV_02_unarmed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";
        
        crew = "BNA_KC_Unit_ARF";
        side = 1;

        displayName = "[KC] Hornet Strike Vehicle (Unarmed)";

        HORNET_TEXTURES()
        HORNET_INVENTORY()
    };

    class All {};
    class AllVehicles: All
    {
        class NewTurret {};
        class CargoTurret: NewTurret {};
    };
    class Land: AllVehicles {};
    class LandVehicle: Land {};
    class Car: LandVehicle {};
    class Car_F: Car
    {
        class NewTurret: NewTurret {};
        class Turrets
        {
            class MainTurret: NewTurret {};
        };
        class AnimationSources {};
    };
    class LSV_02_base_F: Car_F
    {
        class Turrets: Turrets
        {
            class CargoTurret_01: CargoTurret {};
            class CargoTurret_02: CargoTurret_01 {};
            class CargoTurret_03: CargoTurret_01 {};
            class CargoTurret_04: CargoTurret_01 {};
            class CargoTurret_05: CargoTurret_01 {};
        };
        class AnimationSources: AnimationSources
        {
			class Minigun {};
            class muzzle_hide {};
            class muzzle_rot {};
		};
    };
    class LSV_02_armed_base_F: LSV_02_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };
    class O_LSV_02_armed_F: LSV_02_armed_base_F {};
    class BNA_KC_Hornet_Armed: O_LSV_02_armed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";

        crew = "BNA_KC_Unit_ARF";
        side = 1;

        displayName = "[KC] Hornet Strike Vehicle (MG)";

        HORNET_TEXTURES()
        HORNET_INVENTORY()

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = { "BNA_KC_Mounted_MG" };
                magazines[] =
                {
                    "BNA_KC_500rnd_Coax_Mag",
                    "BNA_KC_500rnd_Coax_Mag",
                    "BNA_KC_500rnd_Coax_Mag"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };

        class AnimationSources: AnimationSources
        {
            class Minigun: Minigun
            {
                weapon = "BNA_KC_Mounted_MG";
            };
            class muzzle_hide: muzzle_hide
            {
                weapon = "BNA_KC_Mounted_MG";
            };
            class muzzle_rot: muzzle_rot
            {
                weapon = "BNA_KC_Mounted_MG";
            };
        };
    };


    class LSV_02_AT_base_F: LSV_02_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret {};
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
        class AnimationSources: AnimationSources
        {
            class VoronaMuzzle_reload {};
            class VoronaMuzzle_reloadMagazine {};
            class VoronaMuzzle_revolving {};
            class VoronaMuzzle_rot {};
        };
    };
	class O_LSV_02_AT_F: LSV_02_AT_base_F {};
    class BNA_KC_Hornet_AT: O_LSV_02_AT_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";

        crew = "BNA_KC_Unit_ARF";
        side = 1;

        displayName = "[KC] Hornet Strike Vehicle (AT)";

        HORNET_INVENTORY()

        // The launcher model adds two more hiddenSelections, meaning the normal macro would require extra editing
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Camo_Brown.paa",
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
            "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Launcher.paa",
            "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Launcher.paa"
        };
        class TextureSources
        {
            class BrownCamo
            {
                author = "SweMonkey and DartRuffian";
                displayName = "KC Brown Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Camo_Brown.paa",
                    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Launcher.paa",
                    "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Launcher.paa"
                };
            };
            class GreyCamo: BrownCamo
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Camo_Grey.paa",
                    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Launcher.paa",
                    "BNA_KC_Vehicles\Light\Data\Hornet\BNA_KC_Hornet_Launcher.paa"
                };
            };
        };
        
        class Turrets: Turrets
        {
			class MainTurret: MainTurret
            {
                weapons[] = { "BNA_KC_Mounted_MissileLauncher" };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
		};

        class AnimationSources: AnimationSources
        {
			class VoronaMuzzle_reload: VoronaMuzzle_reload
            {
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_reloadMagazine: VoronaMuzzle_reloadMagazine
            {
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_revolving: VoronaMuzzle_revolving
            {
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_rot: VoronaMuzzle_rot
            {
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
		};
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_VLight
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicles - Light";
	};
};