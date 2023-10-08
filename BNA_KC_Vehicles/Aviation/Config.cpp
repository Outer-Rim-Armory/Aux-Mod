#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"
#include "..\Common\Macros.hpp"


class CfgVehicles
{
    class 3AS_Republic_Transport_01_Base;
    class 3AS_Republic_Transport_01: 3AS_Republic_Transport_01_Base
    {
        class ACE_SelfActions;
    };
    class BNA_KC_RepubTransport: 3AS_Republic_Transport_01
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";
        editorPreview = "\BNA_KC_Vehicles\Aviation\Data\Textures\Previews\BNA_KC_RepubTransport.jpg";

        displayName = "[KC] Republic Transport";

        crew = "BNA_KC_Unit_Phase2_Pilot";

        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Vehicles\Aviation\Data\Textures\Transport\BNA_KC_Republic_Transport_Body.paa",
            "3as\3as_starships\data\hs_int_co.paa",
            "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
        };

        textureList[] = {"Standard", 0, "Imperial", 0, "KeeliCompany", 1};
        class TextureSources
        {
            class Standard
            {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "3as\3as_starships\data\hs_ext_co.paa",
                    "3as\3as_starships\data\hs_int_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
            class Imperial: Standard
            {
                displayName = "Imperial";
                textures[] =
                {
                    "3as\3as_starships\data\hs_Imp_ext_co.paa",
                    "3as\3as_starships\data\hs_int_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
            class KeeliCompany: Standard
            {
                author = "Dexus";
                displayName = "Keeli Company";
                textures[] =
                {
                    "BNA_KC_Vehicles\Aviation\Data\Textures\Transport\BNA_KC_Republic_Transport_Body.paa",
                    "3as\3as_starships\data\hs_int_co.paa",
                    "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };
    };

    class VTOL_Base_F;
    class VTOL_01_base_F: VTOL_Base_F
    {
        class Turrets;
    };
    class VTOL_01_armed_base_F: VTOL_01_base_F
    {
        class Turrets: Turrets
        {
            class CopilotTurret;
            class GunnerTurret_01;
            class GunnerTurret_02;
        };
    };
    class B_T_VTOL_01_armed_F: VTOL_01_armed_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Gunship: B_T_VTOL_01_armed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HAG";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };

        class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret {};
            class GunnerTurret_01: GunnerTurret_01
            {
                weapons[] =
                {
                    "BNA_KC_105mm",
                    "BNA_KC_Gatling_20mm"
                };
                magazines[] =
                {
                    "BNA_KC_100rnd_105mm",
                    "BNA_KC_4000rnd_20mm"
                };
            };
            class GunnerTurret_02: GunnerTurret_02
            {
                weapons[] = {"BNA_KC_40mm_VTOL"};
                magazines[] =
                {
                    "BNA_KC_40mm_GPR_240rnd",
                    "BNA_KC_40mm_APFSDS_160rnd"
                };
            };
        };
    };
    class BNA_KC_HAG_Base: BNA_KC_Galaxy_Gunship
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };

    class VTOL_01_vehicle_base_F;
    class B_T_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Transport_Vehicle: B_T_VTOL_01_vehicle_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HVT";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };
    };
    class BNA_KC_HVT_Base: BNA_KC_Galaxy_Transport_Vehicle
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };

    class VTOL_01_infantry_base_F;
    class B_T_VTOL_01_infantry_F: VTOL_01_infantry_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Transport_Infantry: B_T_VTOL_01_infantry_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HIT";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };
    };
    class BNA_KC_HIT_Base: BNA_KC_Galaxy_Transport_Infantry
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };
};


class CfgSounds
{
    class BNA_KC_ImpulseOn
    {
        name = "LAAT Impulse On";
        sound[] = {"BNA_KC_Vehicles\Aviation\Data\Audio\ImpulseOn.wav", 800, 1, 800};
        titles[] = {1, "Impulse Turns On"};
    };
    class BNA_KC_ImpulseOff
    {
        name = "LAAT Impulse Off";
        sound[] = {"BNA_KC_Vehicles\Aviation\Data\Audio\ImpulseOff.wav", 500, 1, 500};
        titles[] = {1, "Impulse Turns Off"};
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_VAviation
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Vehicles - Aviation";
    };
};