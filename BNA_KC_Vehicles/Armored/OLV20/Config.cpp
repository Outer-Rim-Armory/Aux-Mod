#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class APC_Wheeled_02_base_F;
    class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
    {
        class Turrets;
    };
    class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class BNA_KC_APC_OLV20: O_APC_Wheeled_02_rcws_v2_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";
        editorPreview = "\BNA_KC_Vehicles\Armored\Data\Textures\Previews\OLV20.jpg";

        crew = "BNA_KC_Unit_Phase2_Tanker";
        side = 1;

        displayName = "[KC] OLV-20 APC";

        BNA_KC_EMP_cooldown = 25;
        BNA_KC_EMP_Radius_Droid = 25;
        BNA_KC_EMP_Radius_Deka = 25;
        BNA_KC_EMP_Radius_Vehicle = 25;

        hiddenSelectionsTextures[] = {};
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};

        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Hull_CamoKC.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Wheels_CamoKC.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret_CamoKC.paa",
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Hull_CamoBrown.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Wheels_CamoBrown.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret_CamoBrown.paa",
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Hull_CamoGrey.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Wheels_CamoGrey.paa",
                    "BNA_KC_Vehicles\Armored\Data\Textures\OLV20\BNA_KC_OLV20_Turret_CamoGrey.paa",
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] =
                {
                    "BNA_KC_Coax",
                    "GMG_40mm",
                    "SmokeLauncher"
                };
                magazines[] =
                {
                    "BNA_KC_500rnd_Coax_Mag",
                    "BNA_KC_500rnd_Coax_Mag",
                    "BNA_KC_500rnd_Coax_Mag",
                    "96Rnd_40mm_G_belt",
                    "96Rnd_40mm_G_belt",
                    "SmokeLauncherMag"
                };
                // magazines[] =
                // {
                //     "96Rnd_40mm_G_belt",
                //     "96Rnd_40mm_G_belt",
                //     "200Rnd_127x99_mag_Tracer_Green",
                //     "200Rnd_127x99_mag_Tracer_Green",
                //     "200Rnd_127x99_mag_Tracer_Green",
                //     "200Rnd_127x99_mag_Tracer_Green",
                //     "SmokeLauncherMag"
                // };
            };
        };

        class UserActions
        {
            class ActivateEMP
            {
                displayName = "<t font='RobotoCondensedBold'>Activate EMP</t>";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\iconLightning_ca.paa'>";

                position = "pilotview";
                radius = 30;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 5;

                condition = QUOTE(this call BNAKC_fnc_canUseEMP;);
                statement = QUOTE(this call BNAKC_fnc_activateEMP;);
            };
        };
    };
};