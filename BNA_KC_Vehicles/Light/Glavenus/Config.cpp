#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


#define GLAVENUS_TEXTURES() hiddenSelectionsTextures[] = {}; \
textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0}; \
class TextureSources \
{ \
    class KeeliCompany \
    { \
        author = "SweMonkey and DartRuffian"; \
        displayName = "Keeli Company"; \
        factions[] = {"BNA_KC_Faction"}; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Body.paa", \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Body2.paa", \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\KeeliCompany\Turret.paa" \
        }; \
    }; \
    class CamoKC: KeeliCompany \
    { \
        displayName = "Keeli Company Camo"; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoKC\Body.paa", \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoKC\Body2.paa", \
            "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoKC\Turret.paa" \
        }; \
    }; \
    class CamoBrown: KeeliCompany \
    { \
        displayName = "Brown Camo"; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoBrown\Body.paa", \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoBrown\Body2.paa", \
            "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoBrown\Turret.paa" \
        }; \
    }; \
    class CamoGrey: KeeliCompany \
    { \
        displayName = "Grey Camo"; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoGrey\Body.paa", \
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\CamoGrey\Body2.paa", \
            "\BNA_KC_Vehicles\Armored\OLV20\Data\Textures\CamoGrey\Turret.paa" \
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
    class _xx_Aux12thFleet_Mag_DC15A \
    { \
        magazine = "Aux12thFleet_Mag_DC15A"; \
        count = 5; \
    }; \
    class _xx_Aux12thFleet_Mag_DC15S \
    { \
        magazine = "Aux12thFleet_Mag_DC15S"; \
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
    class _xx_Aux12thFleet_Mag_DC17 \
    { \
        magazine = "Aux12thFleet_Mag_DC17"; \
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
        editorSubcategory = "BNA_KC_SubCat_VLight";
        editorPreview = "\BNA_KC_Vehicles\Light\Glavenus\Data\Previews\Glavenus_Unarmed.jpg";

        crew = "BNA_KC_Unit_Phase2_CT";
        side = 1;

        displayName = "[KC] Glavenus (Unarmed)";

        GLAVENUS_TEXTURES();
        GLAVENUS_INVENTORY();

        weapons[] = {"BNA_KC_Glavenus_Horn", "SmokeLauncher"};
    };

    class BNA_KC_Glavenus_Medic: BNA_KC_Glavenus_Unarmed
    {
        displayName = "[KC] Glavenus (Medic)";
        editorPreview = "\BNA_KC_Vehicles\Light\Glavenus\Data\Previews\Glavenus_Medic.jpg";

        attendant = 1;

        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\Medic\Body.paa",
            "\BNA_KC_Vehicles\Light\Glavenus\Data\Textures\Medic\Body2.paa",
            ""
        };
        textureList[] = {};
        class TextureSources {};

        weapons[] = {"BNA_KC_Glavenus_Horn", "SmokeLauncher"};

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
        editorPreview = "\BNA_KC_Vehicles\Light\Glavenus\Data\Previews\Glavenus_Turret.jpg";

        crew = "BNA_KC_Unit_Phase2_CT";
        side = 1;

        displayName = "[KC] Glavenus (GMG)";

        GLAVENUS_TEXTURES();
        GLAVENUS_INVENTORY();

        weapons[] = {"BNA_KC_Glavenus_Horn", "SmokeLauncher"};
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
        editorPreview = "\BNA_KC_Vehicles\Light\Glavenus\Data\Previews\Glavenus_Turret.jpg";

        crew = "BNA_KC_Unit_Phase2_CT";
        side = 1;

        displayName = "[KC] Glavenus (HMG)";

        GLAVENUS_TEXTURES();
        GLAVENUS_INVENTORY();

        weapons[] = {"BNA_KC_Glavenus_Horn", "SmokeLauncher"};

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
};