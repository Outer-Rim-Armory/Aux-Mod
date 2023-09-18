#include "CfgPatches.hpp"
#include "Macros.hpp"


class CfgVehicles
{
    class ReammoBox_F;
    class 3AS_Supply_Large_Prop: ReammoBox_F
    {
        class EventHandlers;
    };
    class BNA_KC_Resupply_Base: 3AS_Supply_Large_Prop
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Empty Crate";

        ace_cargo_size = 1;
        ace_cargo_noRename = 1

        ace_dragging_canDrag = 1;
        ace_dragging_dragDirection = 90;
        ace_dragging_dragPosition[] = {0, 1.35, 0};

        ace_dragging_canCarry = 1;

        ace_dragging_ignoreWeight = 1;
        ace_dragging_ignoreWeightCarry = 1;

        // Editor Attributes
        editorCategory = "BNA_KC_Objects";
        editorSubcategory = "BNA_KC_SubCat_Resupply";
        side = 3;
    };

    class BNA_KC_Resupply_SquadAmmo: BNA_KC_Resupply_Base
    {
        displayName = "Ammo Crate (Squad)";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsMaterials[] = { "3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat" };
        hiddenSelectionsTextures[] = { "3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa" };

        class TransportMagazines
        {
            // Primary Ammo
            MAG_XX(12thFleet_Mag_DC15A, 10)
            MAG_XX(12thFleet_Mag_DC15S, 10)
            MAG_XX(Aux_12thFleet_Mag_DC15C, 10)
            MAG_XX(Aux_12thFleet_Mag_DC15X, 10)
            MAG_XX(Aux_12thFleet_Mag_DP23, 10)
            MAG_XX(12thFleet_Mag_WestarM5, 10)

            // UGL Ammo
            MAG_XX(3Rnd_UGL_FlareWhite_F, 5)
            MAG_XX(3Rnd_UGL_FlareRed_F, 5)
            MAG_XX(BNA_KC_3Rnd_UGL_FlareBlue, 5)
            MAG_XX(3Rnd_UGL_FlareCIR_F, 5)
            MAG_XX(3Rnd_Smoke_Grenade_shell, 5)
            MAG_XX(3Rnd_SmokeRed_Grenade_shell, 5)
            MAG_XX(3Rnd_SmokeGreen_Grenade_shell, 5)
            MAG_XX(3Rnd_SmokeYellow_Grenade_shell, 5)
            MAG_XX(3Rnd_SmokePurple_Grenade_shell, 5)
            MAG_XX(3Rnd_SmokeBlue_Grenade_shell, 5)
            MAG_XX(3Rnd_SmokeOrange_Grenade_shell, 5)
            MAG_XX(3Rnd_HE_Grenade_shell, 5)

            // Secondary Ammo
            MAG_XX(12thFleet_Mag_DC17, 10)

            // Launcher Ammo
            MAG_XX(3AS_JLTS_MK39_AA, 2)
            MAG_XX(3AS_JLTS_MK44_HE, 2)
            MAG_XX(ls_mag_rpg_1rnd, 2)

            // Grenades
            MAG_XX(ls_mag_classC_thermalDet, 8)
        };
    };
    class BNA_KC_Resupply_PlatoonAmmo: BNA_KC_Resupply_SquadAmmo
    {
        displayName = "Ammo Crate (Platoon)";
        ace_cargo_size = 2;

        class TransportWeapons
        {
            WEAP_XX(ls_weapon_rps6_disposable, 2)
        };

        class TransportMagazines
        {
            // Primary Ammo
            MAG_XX(12thFleet_Mag_DC15A, 160)
            MAG_XX(12thFleet_Mag_DC15S, 160)
            MAG_XX(Aux_12thFleet_Mag_DC15C, 160)
            MAG_XX(Aux_12thFleet_Mag_DC15X, 160)
            MAG_XX(Aux_12thFleet_Mag_DP23, 160)
            MAG_XX(12thFleet_Mag_WestarM5, 160)

            // UGL Ammo
            MAG_XX(3Rnd_UGL_FlareWhite_F, 15)
            MAG_XX(3Rnd_UGL_FlareRed_F, 15)
            MAG_XX(BNA_KC_3Rnd_UGL_FlareBlue, 15)
            MAG_XX(3Rnd_UGL_FlareCIR_F, 15)
            MAG_XX(3Rnd_Smoke_Grenade_shell, 15)
            MAG_XX(3Rnd_SmokeRed_Grenade_shell, 15)
            MAG_XX(3Rnd_SmokeGreen_Grenade_shell, 15)
            MAG_XX(3Rnd_SmokeYellow_Grenade_shell, 15)
            MAG_XX(3Rnd_SmokePurple_Grenade_shell, 15)
            MAG_XX(3Rnd_SmokeBlue_Grenade_shell, 15)
            MAG_XX(3Rnd_SmokeOrange_Grenade_shell, 15)
            MAG_XX(3Rnd_HE_Grenade_shell, 15)

            // Secondary Ammo
            MAG_XX(12thFleet_Mag_DC15A, 50)

            // Launcher Ammo
            MAG_XX(3AS_JLTS_MK39_AA, 5)
            MAG_XX(3AS_JLTS_MK44_HE, 5)
            MAG_XX(ls_mag_rpg_1rnd, 10)

            // Grenades
            MAG_XX(ls_mag_rpg_1rnd, 25)
        };
    };

    class BNA_KC_Resupply_SquadAmmo_Heavy: BNA_KC_Resupply_SquadAmmo
    {
        displayName = "Heavy Ammo Crate (Squad)";
        class TransportMagazines
        {
            MAG_XX(BNA_KC_Mag_HI12, 20)
            MAG_XX(Aux_12thFleet_Mag_DP23_HP, 20)
            MAG_XX(JLTS_Z6_mag, 5)
        };
    };
    class BNA_KC_Resupply_PlatoonAmmo_Heavy: BNA_KC_Resupply_SquadAmmo_Heavy
    {
        displayName = "Heavy Ammo Crate (Platoon)";
        class TransportMagazines: TransportMagazines
        {
            MAG_XX(BNA_KC_Mag_HI12, 120)
            MAG_XX(Aux_12thFleet_Mag_DP23_HP, 120)
            MAG_XX(JLTS_Z6_mag, 10)
        };
    };

    class BNA_KC_Resupply_SquadMedical: BNA_KC_Resupply_Base
    {
        displayName = "Medical Crate (Squad)";
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
                count = 5;
            };
            class _xx_ACE_salineIV_500
            {
                name = "ACE_salineIV_500";
                count = 5;
            };
            class _xx_ACE_salineIV_250
            {
                name = "ACE_salineIV_250";
                count = 10;
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
                count = 2;
            };

            class _xx_BNA_KC_Grenade_BactaBomb
            {
                magazine = "BNA_KC_Grenade_BactaBomb";
                count = 5;
            };

            class _xx_BNA_KC_Mag_GR20
            {
                magazine = "BNA_KC_Mag_GR20";
                count = 2;
            };
        };
    };
    class BNA_KC_Resupply_PlatoonMedical: BNA_KC_Resupply_SquadMedical
    {
        displayName = "Medical Crate (Platoon)";
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
                count = 20;
            };
            class _xx_ACE_salineIV_500
            {
                name = "ACE_salineIV_500";
                count = 20;
            };
            class _xx_ACE_salineIV_250
            {
                name = "ACE_salineIV_250";
                count = 30;
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
                count = 20;
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
                count = 6;
            };

            class _xx_BNA_KC_Grenade_BactaBomb
            {
                magazine = "BNA_KC_Grenade_BactaBomb";
                count = 10;
            };

            class _xx_BNA_KC_Mag_GR20
            {
                magazine = "BNA_KC_Mag_GR20";
                count = 4;
            };
        };
    };

    class BNA_KC_Resupply_JetpackFuel: BNA_KC_Resupply_Base
    {
        displayName = "Jetpack Fuel Tank";

        ace_cargo_size = 2;
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;

        model = "A3\Structures_F\Items\Vessels\WaterTank_F.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {};

        // Editor Attributes
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_WaterTank_F.jpg";

        // Removes the "Rename" action and locks the inventory
        class EventHandlers: EventHandlers
        {
            init = "_this#0 lockInventory true; [_this#0, 1] call BNAKC_Jetpacks_fnc_addRefuelActions";
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