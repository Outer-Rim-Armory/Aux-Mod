#include "CfgPatches.hpp"


class CfgVehicles
{
    class 3AS_Supply_Large_Prop;
    class 3AS_Supply_Large_Medical_Prop;
    class 3AS_Supply_Large_Ammo_Prop;

    class BNA_KC_Resupply_SquadAmmo: 3AS_Supply_Large_Ammo_Prop
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        
        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Resupply";
        side = 3;

        displayName = "[KC] Ammo Box (Squad)";
        
        class TransportWeapons {};
            
        class TransportMagazines
        {
            // Primary Ammo
            class _xx_12thFleet_Mag_DC15A
            {
                magazine = "12thFleet_Mag_DC15A";
                count = 10;
            };
            class _xx_12thFleet_Mag_DC15S
            {
                magazine = "12thFleet_Mag_DC15S";
                count = 10;
            };
            class _xx_12thFleet_Mag_WestarM5
            {
                magazine = "12thFleet_Mag_WestarM5";
                count = 10;
            };
            // UGL Ammo
            class _xx_3Rnd_UGL_FlareWhite_F
            {
                magazine = "3Rnd_UGL_FlareWhite_F";
                count = 5;
            };
            class _xx_3Rnd_UGL_FlareRed_F
            {
                magazine = "3Rnd_UGL_FlareRed_F";
                count = 5;
            };
            class _xx_3Rnd_UGL_FlareGreen_F
            {
                magazine = "3Rnd_UGL_FlareGreen_F";
                count = 5;
            };
            class _xx_UGL_FlareCIR_F
            {
                magazine = "UGL_FlareCIR_F";
                count = 5;
            };
            class _xx_3Rnd_Smoke_Grenade_shell
            {
                magazine = "3Rnd_Smoke_Grenade_shell";
                count = 5;
            };
            class _xx_3Rnd_SmokeRed_Grenade_shell
            {
                magazine = "3Rnd_SmokeRed_Grenade_shell";
                count = 5;
            };
            class _xx_3Rnd_SmokeGreen_Grenade_shell
            {
                magazine = "3Rnd_SmokeGreen_Grenade_shell";
                count = 5;
            };
            class _xx_3Rnd_SmokeYellow_Grenade_shell
            {
                magazine = "3Rnd_SmokeYellow_Grenade_shell";
                count = 5;
            };
            class _xx_3Rnd_SmokePurple_Grenade_shell
            {
                magazine = "3Rnd_SmokePurple_Grenade_shell";
                count = 5;
            };
            class _xx_3Rnd_SmokeBlue_Grenade_shell
            {
                magazine = "3Rnd_SmokeBlue_Grenade_shell";
                count = 5;
            };
            class _xx_3Rnd_SmokeOrange_Grenade_shell
            {
                magazine = "3Rnd_SmokeOrange_Grenade_shell";
                count = 5;
            };
            class _xx_3Rnd_HE_Grenade_shell
            {
                magazine = "3Rnd_HE_Grenade_shell";
                count = 5;
            };

            // Secondary Ammo
            class _xx_12thFleet_Mag_DC17
            {
                magazine = "12thFleet_Mag_DC17";
                count = 10;
            };

            // Launcher Ammo
            class _xx_3AS_JLTS_MK39_AA
            {
                magazine = "3AS_JLTS_MK39_AA";
                count = 2;
            };
            class _xx_3AS_JLTS_MK44_HE
            {
                magazine = "3AS_JLTS_MK44_HE";
                count = 2;
            };
            class _xx_ls_mag_rpg_1rnd
            {
                magazine = "ls_mag_rpg_1rnd";
                count = 2;
            };

            // Grenades
            class _xx_ls_mag_classC_thermalDet
            {
                magazine = "ls_mag_classC_thermalDet";
                count = 8;
            };
        };
        
        // For Medical Crate
        // class TransportItems
        // {
        //     class _xx_ACE_elasticBandage
        //     {
        //         name = "ACE_elasticBandage";
        //         count = 10;

        //     };
        //     class _xx_ACE_packingBandage
        //     {
        //         name = "ACE_packingBandage";
        //         count = 10;
        //     };
        //     class _xx_ACE_quikclot
        //     {
        //         name = "ACE_quikclot";
        //         count = 10;
        //     };
        //     class _xx_ACE_surgicalKit
        //     {
        //         name = "ACE_surgicalKit";
        //         count = 1;
        //     };
        //     class _xx_ToolKit
        //     {
        //         name = "ToolKit";
        //         count = 1;
        //     };
        // };
    };

    class BNA_KC_Resupply_PlatoonAmmo: BNA_KC_Resupply_SquadAmmo
    {
        displayName = "[KC] Ammo Box (Platoon)";

        class TransportWeapons
        {
            class _xx_ls_weapon_rps6_disposable
            {
                weapon = "ls_weapon_rps6_disposable";
                count = 2;
            };
        };

        class TransportMagazines
        {
            // Primary Ammo
            class _xx_12thFleet_Mag_DC15A
            {
                magazine = "12thFleet_Mag_DC15A";
                count = 160;
            };
            class _xx_12thFleet_Mag_DC15S
            {
                magazine = "12thFleet_Mag_DC15S";
                count = 160;
            };
            class _xx_12thFleet_Mag_WestarM5
            {
                magazine = "12thFleet_Mag_WestarM5";
                count = 160;
            };
            // UGL Ammo
            class _xx_3Rnd_UGL_FlareWhite_F
            {
                magazine = "3Rnd_UGL_FlareWhite_F";
                count = 15
            };
            class _xx_3Rnd_UGL_FlareRed_F
            {
                magazine = "3Rnd_UGL_FlareRed_F";
                count = 15
            };
            class _xx_3Rnd_UGL_FlareGreen_F
            {
                magazine = "3Rnd_UGL_FlareGreen_F";
                count = 15
            };
            class _xx_UGL_FlareCIR_F
            {
                magazine = "UGL_FlareCIR_F";
                count = 15
            };
            class _xx_3Rnd_Smoke_Grenade_shell
            {
                magazine = "3Rnd_Smoke_Grenade_shell";
                count = 15
            };
            class _xx_3Rnd_SmokeRed_Grenade_shell
            {
                magazine = "3Rnd_SmokeRed_Grenade_shell";
                count = 15
            };
            class _xx_3Rnd_SmokeGreen_Grenade_shell
            {
                magazine = "3Rnd_SmokeGreen_Grenade_shell";
                count = 15
            };
            class _xx_3Rnd_SmokeYellow_Grenade_shell
            {
                magazine = "3Rnd_SmokeYellow_Grenade_shell";
                count = 15
            };
            class _xx_3Rnd_SmokePurple_Grenade_shell
            {
                magazine = "3Rnd_SmokePurple_Grenade_shell";
                count = 15
            };
            class _xx_3Rnd_SmokeBlue_Grenade_shell
            {
                magazine = "3Rnd_SmokeBlue_Grenade_shell";
                count = 15
            };
            class _xx_3Rnd_SmokeOrange_Grenade_shell
            {
                magazine = "3Rnd_SmokeOrange_Grenade_shell";
                count = 15
            };
            class _xx_3Rnd_HE_Grenade_shell
            {
                magazine = "3Rnd_HE_Grenade_shell";
                count = 15
            };

            // Secondary Ammo
            class _xx_12thFleet_Mag_DC17
            {
                magazine = "12thFleet_Mag_DC17";
                count = 50;
            };

            // Launcher Ammo
            class _xx_3AS_JLTS_MK39_AA
            {
                magazine = "3AS_JLTS_MK39_AA";
                count = 5;
            };
            class _xx_3AS_JLTS_MK44_HE
            {
                magazine = "3AS_JLTS_MK44_HE";
                count = 5;
            };
            class _xx_ls_mag_rpg_1rnd
            {
                magazine = "ls_mag_rpg_1rnd";
                count = 10;
            };

            // Grenades
            class _xx_ls_mag_classC_thermalDet
            {
                magazine = "ls_mag_classC_thermalDet";
                count = 25;
            };
        };
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_Resupply
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Resupply";
    };
};