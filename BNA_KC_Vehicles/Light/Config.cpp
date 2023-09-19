#include "CfgPatches.hpp"
#include "CfgCloudlets.hpp"


class CfgWeapons
{
    /*
    class 3AS_ATRT_Base;
    class 3AS_ATRT_Uniform: 3AS_ATRT_Base
    {
        class ItemInfo;
    };
    class BNA_KC_Uniform_ATRT: 3AS_ATRT_Uniform
    {
        displayName = "AT-RT Plating";
        JLTS_hasStunProtection = 1;
        picture = "\BNA_KC_Vehicles\Light\Data\Textures\UI\Uniform_ATRT_UI.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_ATRT";
        };
    };
    */
};


// Macros
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
    class _xx_Aux_12thFleet_Mag_DC15X \
    { \
        magazine = "Aux_12thFleet_Mag_DC15X"; \
        count = 5; \
    }; \
}; \
class TransportItems \
{ \
    class _xx_ACE_elasticBandage \
    { \
        name = "ACE_elasticBandage"; \
        count = 30; \
    }; \
};

#define HORNET_TEXTURES() hiddenSelectionsTextures[] = \
{ \
    "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Camo_Brown.paa", \
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
            "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Camo_Brown.paa", \
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", \
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" \
        }; \
    }; \
    class GreyCamo: BrownCamo \
    { \
        displayName = "Grey Camo"; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Camo_Grey.paa", \
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", \
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" \
        }; \
    }; \
};


#define GLAVENUS_TEXTURES() hiddenSelectionsTextures[] = {}; \
textureList[] = {"BrownWhite", 1, "CamoKC", 0, "BrownCamo", 0, "GreyCamo", 0}; \
class TextureSources \
{ \
    class BrownWhite \
    { \
        author = "SweMonkey and DartRuffian"; \
        displayName = "Brown/White"; \
        factions[] = { "BNA_KC_Faction" }; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body.paa", \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body2.paa", \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Turret.paa" \
        }; \
    }; \
    class CamoKC: BrownWhite \
    { \
        displayName = "Keeli Company Camo"; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body_CamoKC.paa", \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body2_CamoKC.paa", \
            "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret_CamoKC.paa" \
        }; \
    }; \
    class BrownCamo: BrownWhite \
    { \
        displayName = "Brown Camo"; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body_CamoBrown.paa", \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body2_CamoBrown.paa", \
            "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret_CamoBrown.paa" \
        }; \
    }; \
    class GreyCamo: BrownWhite \
    { \
        displayName = "Grey Camo"; \
        textures[] = \
        { \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body_CamoGrey.paa", \
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body2_CamoGrey.paa", \
            "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret_CamoGrey.paa" \
        }; \
    }; \
};

#define GLAVENUS_INVENTORY() class TransportWeapons {}; \
class TransportItems \
{ \
    class _xx_ACE_elasticBandage \
    { \
        name = "ACE_elasticBandage"; \
        count = 20; \
    }; \
    class _xx_RD501_Painkiller \
    { \
        name = "RD501_Painkiller"; \
        count = 5; \
    }; \
    class _xx_ACE_tourniquet \
    { \
        name = "ACE_tourniquet"; \
        count = 4; \
    }; \
    class _xx_ACE_Splint \
    { \
        name = "ACE_Splint"; \
        count = 2; \
    }; \
}; \
class TransportMagazines \
{ \
    class _xx_12thFleet_Mag_DC15A \
    { \
        magazine = "12thFleet_Mag_DC15A"; \
        count = 5; \
    }; \
    class _xx_12thFleet_Mag_DC15S \
    { \
        magazine = "12thFleet_Mag_DC15S"; \
        count = 5; \
    }; \
    class _xx_3Rnd_UGL_FlareWhite_F \
    { \
        magazine = "3Rnd_UGL_FlareWhite_F"; \
        count = 2; \
    }; \
    class _xx_3Rnd_UGL_FlareRed_F \
    { \
        magazine = "3Rnd_UGL_FlareRed_F"; \
        count = 2; \
    }; \
    class _xx_BNA_KC_3Rnd_UGL_FlareBlue \
    { \
        magazine = "BNA_KC_3Rnd_UGL_FlareBlue"; \
        count = 2; \
    }; \
    class _xx_3Rnd_UGL_FlareCIR_F \
    { \
        magazine = "3Rnd_UGL_FlareCIR_F"; \
        count = 2; \
    }; \
    class _xx_3Rnd_Smoke_Grenade_shell \
    { \
        magazine = "3Rnd_Smoke_Grenade_shell"; \
        count = 2; \
    }; \
    class _xx_3Rnd_SmokeRed_Grenade_shell \
    { \
        magazine = "3Rnd_SmokeRed_Grenade_shell"; \
        count = 2; \
    }; \
    class _xx_3Rnd_SmokeGreen_Grenade_shell \
    { \
        magazine = "3Rnd_SmokeGreen_Grenade_shell"; \
        count = 2; \
    }; \
    class _xx_3Rnd_SmokeYellow_Grenade_shell \
    { \
        magazine = "3Rnd_SmokeYellow_Grenade_shell"; \
        count = 2; \
    }; \
    class _xx_3Rnd_SmokePurple_Grenade_shell \
    { \
        magazine = "3Rnd_SmokePurple_Grenade_shell"; \
        count = 2; \
    }; \
    class _xx_3Rnd_SmokeBlue_Grenade_shell \
    { \
        magazine = "3Rnd_SmokeBlue_Grenade_shell"; \
        count = 2; \
    }; \
    class _xx_3Rnd_SmokeOrange_Grenade_shell \
    { \
        magazine = "3Rnd_SmokeOrange_Grenade_shell"; \
        count = 2; \
    }; \
    class _xx_3Rnd_HE_Grenade_shell \
    { \
        magazine = "3Rnd_HE_Grenade_shell"; \
        count = 2; \
    }; \
    class _xx_12thFleet_Mag_DC17 \
    { \
        magazine = "12thFleet_Mag_DC17"; \
        count = 5; \
    }; \
    class _xx_ls_mag_rpg_1rnd \
    { \
        magazine = "ls_mag_rpg_1rnd"; \
        count = 1; \
    }; \
    class _xx_ls_mag_classC_thermalDet \
    { \
        magazine = "ls_mag_classC_thermalDet"; \
        count = 4; \
    }; \
};


class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
    /*
    class 3AS_ATRT_Base;
    class 3AS_ATRT: 3AS_ATRT_Base
    {
        class EventHandlers;
    };
    class BNA_KC_ATRT: 3AS_ATRT
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

        displayName = "[KC] AT-RT";
        uniformClass = "BNA_KC_Uniform_ATRT";
        nakedUniform = "BNA_KC_Uniform_ATRT";
        impactEffectsBlood = "ImpactMetal";

        weapons[] = { "BNA_KC_ATRT_Turret" };
        magazines[] = { "BNA_KC_9999Rnd_ATRT_Turret_Magazine" };

        allowedfacewear[] = {""};
        allowedHeadgear[] = {""};
        allowedHeadgearB[] = {""};
        headgearList[] = {""};
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "Head_Euro"};

		// Textures are not set-up on the 3AS end yet.
		// hiddenSelectionsTextures[] =
		// {
		// 	"BNA_KC_Vehicles\Light\Data\Textures\ATRT\BNA_KC_ATRT.paa"
		// };
        class EventHandlers
        {
            init = "";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };

        class VehicleTransport
        {
            class Cargo
            {
                BNA_KC_SpecialLoad = 1;
            };
        };
	};
    */

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
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag"
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
            "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Camo_Brown.paa",
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
            "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Launcher.paa",
            "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Launcher.paa"
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
                    "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Camo_Brown.paa",
                    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Launcher.paa",
                    "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Launcher.paa"
                };
            };
            class GreyCamo: BrownCamo
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Camo_Grey.paa",
                    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Launcher.paa",
                    "BNA_KC_Vehicles\Light\Data\Textures\Hornet\BNA_KC_Hornet_Launcher.paa"
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
        editorSubcategory = "BNA_KC_SubCat_VLight";

        crew = "BNA_KC_Unit_Phase2_CT";
        side = 1;

        displayName = "[KC] Glavenus (Unarmed)";

        GLAVENUS_TEXTURES();
        GLAVENUS_INVENTORY();

        weapons[] = { "BNA_KC_Glavenus_Horn", "SmokeLauncher" };
    };

    class BNA_KC_Glavenus_Medic: BNA_KC_Glavenus_Unarmed
    {
        displayName = "[KC] Glavenus (Medic)";

        attendant = 1;

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body_Medic.paa",
            "BNA_KC_Vehicles\Light\Data\Textures\Glavenus\BNA_KC_Glavenus_Body2_Medic.paa",
            ""
        };
        textureList[] = {};
        class TextureSources {};

        weapons[] = { "BNA_KC_Glavenus_Horn", "SmokeLauncher" };

        class TransportWeapons {};
        class TransportItems
        {
            // Bandages
            class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 30;
            };

            class _xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 20;
            };

            class _xx_ACE_quickclot
            {
                name = "ACE_quickclot";
                count = 15;
            };

            // Fluid
            class _xx_ACE_salineIV
            {
                name = "ACE_salineIV";
                count = 1;
            };
            class _xx_ACE_salineIV_500
            {
                name = "ACE_salineIV_500";
                count = 1;
            };
            class _xx_ACE_salineIV_250
            {
                name = "ACE_salineIV_250";
                count = 2;
            };

            // Drugs
            class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 2;
            };

            class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 2;
            };

            class _xx_RD501_Painkiller
            {
                name = "RD501_Painkiller";
                count = 5;
            };

            // Misc
            class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 6;
            };

            class _xx_ACE_Splint
            {
                name = "ACE_Splint";
                count = 1;
            };
        };

        class TransportMagazines
        {
            class _xx_3AS_SmokePurple
            {
                magazine = "3AS_SmokePurple";
                count = 1;
            };

            class _xx_SquadShieldMagazine
            {
                magazine = "SquadShieldMagazine";
                count = 1;
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
        editorSubcategory = "BNA_KC_SubCat_VLight";

        crew = "BNA_KC_Unit_Phase2_CT";
        side = 1;

        displayName = "[KC] Glavenus (GMG)";

        GLAVENUS_TEXTURES();
        GLAVENUS_INVENTORY();

        weapons[] = { "BNA_KC_Glavenus_Horn", "SmokeLauncher" };
    };

    class MRAP_02_base_F;
    class MRAP_02_hmg_base_F: MRAP_02_base_F
    {
        class Turrets;
    };
    class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
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
        editorSubcategory = "BNA_KC_SubCat_VLight";

        crew = "BNA_KC_Unit_Phase2_CT";
        side = 1;

        displayName = "[KC] Glavenus (HMG)";

        GLAVENUS_TEXTURES();
        GLAVENUS_INVENTORY();

        weapons[] = { "BNA_KC_Glavenus_Horn", "SmokeLauncher" };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = { "BNA_KC_Coax" };
                magazines[] =
                {
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag"
                };
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


class CfgFunctions
{
    class BNAKC
    {
        class ATRT
        {
            file = "BNA_KC_Vehicles\Light\Data\Functions\ATRT";
            class initATRT {};
            class mountATRT {};
            class dismountATRT {};
            class spawnATRTSmoke {};
        };
    };
};


class Extended_Init_EventHandlers
{
    class BNA_KC_ATRT
    {
        class BNA_KC_ATRT_init
        {
            init = "(_this select 0) call BNAKC_fnc_initATRT;";
        };
    };
};