#include "CfgPatches.hpp"


class CfgVehicles
{
    class 3AS_Supply_Large_Prop;

    class BNA_KC_Resupply_Base: 3AS_Supply_Large_Prop
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] Empty Crate";
        
        ace_cargo_size = 1;
        ace_dragging_canDrag = 1;
        ace_dragging_dragDirection = 90;
        ace_dragging_dragPosition[] = {0, 1.35, 0};
        
        ace_dragging_canCarry = 1;
        ace_dragging_ignoreWeightCarry = 1;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Resupply";
        side = 3;
    };

    class BNA_KC_Resupply_SquadAmmo: BNA_KC_Resupply_Base
    {
        displayName = "[KC] Ammo Crate (Squad)";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsMaterials[] = { "3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat" };
        hiddenSelectionsTextures[] = { "3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa" };
        
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
    };

    class BNA_KC_Resupply_PlatoonAmmo: BNA_KC_Resupply_SquadAmmo
    {
        displayName = "[KC] Ammo Crate (Platoon)";
        ace_cargo_size = 2;

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

    class BNA_KC_Resupply_SquadMedical: BNA_KC_Resupply_Base
    {
        displayName = "[KC] Medical Crate (Squad)";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsMaterials[] = { "3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical.rvmat" };
        hiddenSelectionsTextures[] = { "3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa" };
        
        class TransportItems
        {
            // Bandages
            class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 60;
            };

            class _xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 40;
            };

            class _xx_ACE_quickclot
            {
                name = "ACE_quickclot";
                count = 30;
            };

            // Fluid
            class _xx_ACE_salineIV
            {
                name = "ACE_salineIV";
                count = 2;
            };
            class _xx_ACE_salineIV_500
            {
                name = "ACE_salineIV_500";
                count = 3;
            };
            class _xx_ACE_salineIV_250
            {
                name = "ACE_salineIV_250";
                count = 5;
            };

            // Drugs
            class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 5;
            };

            class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 5;
            };

            class _xx_RD501_Painkiller
            {
                name = "RD501_Painkiller";
                count = 10;
            };

            // Misc
            class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 12;
            };

            class _xx_ACE_Splint
            {
                name = "ACE_Splint";
                count = 3;
            };

            class _xx_ACE_Banana
            {
                name = "ACE_Banana";
                count = 1;
            };
        };

        class TransportMagazines
        {
            class _xx_3AS_SmokePurple
            {
                magazine = "3AS_SmokePurple";
                count = 2;
            };

            class _xx_SquadShieldMagazine
            {
                magazine = "SquadShieldMagazine";
                count = 1;
            };
        };
    };

    class BNA_KC_Resupply_PlatoonMedical: BNA_KC_Resupply_SquadMedical
    {
        displayName = "[KC] Medical Crate (Platoon)";
        ace_cargo_size = 2;

        // Bandages
        class TransportItems
        {
            class _xx_ACE_elasticBandage
            {
                name = "ACE_elasticBandage";
                count = 150;
            };

            class _xx_ACE_packingBandage
            {
                name = "ACE_packingBandage";
                count = 60;
            };

            class _xx_ACE_quickclot
            {
                name = "ACE_quickclot";
                count = 40;
            };

            // Fluid
            class _xx_ACE_salineIV
            {
                name = "ACE_salineIV";
                count = 8;
            };
            class _xx_ACE_salineIV_500
            {
                name = "ACE_salineIV_500";
                count = 10;
            };
            class _xx_ACE_salineIV_250
            {
                name = "ACE_salineIV_250";
                count = 16;
            };

            // Drugs
            class _xx_ACE_morphine
            {
                name = "ACE_morphine";
                count = 10;
            };

            class _xx_ACE_epinephrine
            {
                name = "ACE_epinephrine";
                count = 10;
            };

            class _xx_RD501_Painkiller
            {
                name = "RD501_Painkiller";
                count = 15;
            };

            // Misc
            class _xx_ACE_tourniquet
            {
                name = "ACE_tourniquet";
                count = 16;
            };

            class _xx_ACE_Splint
            {
                name = "ACE_Splint";
                count = 8;
            };
        };

        class TransportMagazines
        {
            class _xx_3AS_SmokePurple
            {
                magazine = "3AS_SmokePurple";
                count = 10;
            };

            class _xx_SquadShieldMagazine
            {
                magazine = "SquadShieldMagazine";
                count = 4;
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