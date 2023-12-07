#include "CfgPatches.hpp"
#include "\BNA_KC_Props\Macros.hpp"


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
        editorPreview = "\BNA_KC_Props\Resupply\Data\Textures\Previews\Resupply_Base.jpg";
        side = 3;
    };

    class BNA_KC_Resupply_SquadAmmo: BNA_KC_Resupply_Base
    {
        displayName = "Ammo Crate (Squad)";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Ammo\Supply_Large_Ammo_co.paa"};
        editorPreview = "\BNA_KC_Props\Resupply\Data\Textures\Previews\Resupply_Ammo.jpg";

        class TransportMagazines
        {
            // Primary Ammo
            MAG_XX(Aux12thFleet_Mag_DC15A, 10)
            MAG_XX(Aux12thFleet_Mag_DC15S, 10)
            MAG_XX(Aux12thFleet_Mag_DC15C, 10)
            MAG_XX(Aux12thFleet_Mag_DC15X, 10)
            MAG_XX(Aux12thFleet_Mag_DC15L, 10)
            MAG_XX(Aux12thFleet_Mag_DP23, 10)
            MAG_XX(Aux12thFleet_Mag_WestarM5, 10)
            MAG_XX(BNA_KC_Mag_Valken38X, 10)

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
            MAG_XX(Aux12thFleet_Mag_DC17, 10)

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
            MAG_XX(Aux12thFleet_Mag_DC15A, 160)
            MAG_XX(Aux12thFleet_Mag_DC15S, 160)
            MAG_XX(Aux12thFleet_Mag_DC15C, 160)
            MAG_XX(Aux12thFleet_Mag_DC15X, 160)
            MAG_XX(Aux12thFleet_Mag_DC15L, 160)
            MAG_XX(Aux12thFleet_Mag_DP23, 160)
            MAG_XX(Aux12thFleet_Mag_WestarM5, 160)
            MAG_XX(BNA_KC_Mag_Valken38X, 160)

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
            MAG_XX(Aux12thFleet_Mag_DC15A, 50)

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
            MAG_XX(BNA_KC_Mag_Valken38X_AP, 20)
            MAG_XX(BNA_KC_Mag_HI12, 20)
            MAG_XX(Aux12thFleet_Mag_DP23_HP, 20)
            MAG_XX(Aux501_Weapons_Mags_10mw400, 5)
            MAG_XX(3AS_JLTS_MK39_AA, 1)
            MAG_XX(3AS_JLTS_MK43_AT, 1)
            MAG_XX(3AS_JLTS_MK44_HE, 1)
        };
    };
    class BNA_KC_Resupply_PlatoonAmmo_Heavy: BNA_KC_Resupply_SquadAmmo_Heavy
    {
        displayName = "Heavy Ammo Crate (Platoon)";
        class TransportMagazines: TransportMagazines
        {
            MAG_XX(BNA_KC_Mag_Valken38X_AP, 120)
            MAG_XX(BNA_KC_Mag_HI12, 120)
            MAG_XX(Aux12thFleet_Mag_DP23_HP, 120)
            MAG_XX(Aux501_Weapons_Mags_10mw400, 10)
            MAG_XX(3AS_JLTS_MK39_AA, 3)
            MAG_XX(3AS_JLTS_MK43_AT, 3)
            MAG_XX(3AS_JLTS_MK44_HE, 3)
        };
    };

    class BNA_KC_Resupply_SquadMedical: BNA_KC_Resupply_Base
    {
        displayName = "Medical Crate (Squad)";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsMaterials[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical.rvmat"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Props\Crates\Data\Supply_Large_Medical\Supply_Large_Medical_co.paa"};
        editorPreview = "\BNA_KC_Props\Resupply\Data\Textures\Previews\Resupply_Medical.jpg";

        class TransportItems
        {
            // Bandages
            ITEM_XX(ACE_elasticBandage, 60)
            ITEM_XX(ACE_packingBandage, 40)
            ITEM_XX(ACE_quickclot, 30)

            // Fluid
            ITEM_XX(ACE_salineIV, 5)
            ITEM_XX(ACE_salineIV_500, 5)
            ITEM_XX(ACE_salineIV_250, 10)

            // Drugs
            ITEM_XX(ACE_morphine, 5)
            ITEM_XX(ACE_epinephrine, 5)
            ITEM_XX(RD501_Painkiller, 10)

            // Misc
            ITEM_XX(ACE_tourniquet, 12)
            ITEM_XX(ACE_Splint, 4)
            ITEM_XX(ACE_Banana, 1)
        };

        class TransportMagazines
        {
            MAG_XX(3AS_SmokePurple, 2)
            MAG_XX(SquadShieldMagazine, 2)
            MAG_XX(BNA_KC_Grenade_BactaBomb, 5)
            MAG_XX(BNA_KC_Mag_GR20, 2)
        };
    };
    class BNA_KC_Resupply_PlatoonMedical: BNA_KC_Resupply_SquadMedical
    {
        displayName = "Medical Crate (Platoon)";
        ace_cargo_size = 2;

        class TransportItems
        {
            // Bandages
            ITEM_XX(ACE_elasticBandage, 150)
            ITEM_XX(ACE_packingBandage, 60)
            ITEM_XX(ACE_quickclot, 40)

            // Fluid
            ITEM_XX(ACE_salineIV, 20)
            ITEM_XX(ACE_salineIV_500, 20)
            ITEM_XX(ACE_salineIV_250, 30)

            // Drugs
            ITEM_XX(ACE_morphine, 13)
            ITEM_XX(ACE_epinephrine, 13)
            ITEM_XX(RD501_Painkiller, 20)

            // Misc
            ITEM_XX(ACE_tourniquet, 12)
            ITEM_XX(ACE_Splint, 8)
        };

        class TransportMagazines
        {
            MAG_XX(3AS_SmokePurple, 5)
            MAG_XX(SquadShieldMagazine, 6)
            MAG_XX(BNA_KC_Grenade_BactaBomb, 10)
            MAG_XX(BNA_KC_Mag_GR20, 4)
        };
    };

    class BNA_KC_Resupply_JetpackFuel: BNA_KC_Resupply_Base
    {
        displayName = "Jetpack Fuel Tank";

        ace_cargo_size = 2;
        ace_dragging_canDrag = 0;
        ace_dragging_canCarry = 0;

        model = "\A3\Structures_F\Items\Vessels\WaterTank_F.p3d";
        editorPreview = "\BNA_KC_Props\Resupply\Data\Textures\Previews\Resupply_JetpackFuel.jpg";
        hiddenSelections[] = {};
        hiddenSelectionsMaterials[] = {};
        hiddenSelectionsTextures[] = {};

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


class Extended_Init_EventHandlers
{
    class BNA_KC_Resupply_Base
    {
        class Disable_Damage
        {
            init = "(_this select 0) allowDamage false";
        };
    };
};