#include "CfgPatches.hpp"
#include "CfgCloudlets.hpp"
#include "CfgComplexEffects.hpp"
#include "CfgFunctions.hpp"
#include "Macros.hpp"


class CfgWeapons
{
    class Launcher;
    class Launcher_Base_F: Launcher
    {
        class WeaponSlotsInfo;
    };
    class BNA_KC_Mortar_M190_Carry: Launcher_Base_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Model 190 Mortar System";
        picture = "\ls_weapons\_ui\rps6_ca.paa"; // Temp picture

        // 3AS Mortar model is not fully set up for CSW
        // model = "3AS\3as_static\Mortar\model\MortarLauncher.p3d";
        // model = "3AS\3as_static\Mortar\model\mortarpack.p3d";
        // model = "3AS\3as_static\Mortar\model\republicmortar.p3d";
        // hiddenSelections[] = {"Camo_1","Camo_2"};
        // hiddenSelectionsMaterials[] = {"\3as\3as_static\Mortar\data\base.rvmat","\3as\3as_static\Mortar\data\tube.rvmat"};
        // hiddenSelectionsTextures[] = {"\3as\3as_static\Mortar\data\base.001_co.paa","\3as\3as_static\Mortar\data\tube.001_co.paa"};

        // LS model until 3AS is done
        model = "ls_vehicles_ground\mortar\ls_ground_mortar_alternateCarry.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"ls_vehicles_ground\mortar\data\republic_co.paa"};

        mass = 300;
        class ACE_CSW
        {
            // See https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework.html#22-carryable-tripod
            deploy = "BNA_KC_Mortar_M190";
            type = "mount"; // Used for tripod (mortar)

            name = "[KC] M-190 Mortar System";

            deployTime = 1;
            pickupTime = 1;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            // One WeaponSlot with a positive value for iconScale forces game to use icon overlay method
            // Required, because the inventory icon has no accessory variants
            class MuzzleSlot
            {
                iconScale = 0.1;
            };
        };
    };

    class CannonCore;
    class 3AS_mortar_82mm: CannonCore
    {
        class Single1;
        class Burst1;
    };
    class BNA_KC_Mortar_M190_Turret: 3AS_mortar_82mm
    {
        displayName = "[KC] Model 190 Mortar System";
        magazines[] =
        {
            "BNA_KC_Mag_3Rnd_82mm_HE",
            "BNA_KC_Mag_3Rnd_82mm_SmokeWhite",
            "BNA_KC_Mag_3Rnd_82mm_SmokeBlue",
            "BNA_KC_Mag_3Rnd_82mm_SmokeRed"
        };

        MORTAR_SOUND_FIRE()

        class Single1: Single1
        {
            displayName="$STR_A3_mortar_82mm_Single10";
            artilleryCharge = MORTAR_RANGE_SMALL;
            reloadTime = 4;

            MORTAR_SOUND_FIRE()
        };
        class Single2: Single1
        {
            displayName="$STR_A3_mortar_82mm_Single20";
            showToPlayer = 0;
            artilleryCharge = MORTAR_RANGE_MEDIUM;
        };
        class Single3: Single1
        {
            displayName="$STR_A3_mortar_82mm_Single30";
            artilleryCharge = MORTAR_RANGE_FAR;
        };

        class Burst1: Burst1
        {
            displayName="$STR_A3_mortar_82mm_Burst10";
            artilleryCharge = MORTAR_RANGE_SMALL;
            reloadTime = 4;

            MORTAR_SOUND_FIRE()
        };
        class Burst2: Burst1
        {
            displayName="$STR_A3_mortar_82mm_Burst20";
            artilleryCharge = MORTAR_RANGE_MEDIUM;
        };
        class Burst3: Burst1
        {
            displayName="$STR_A3_mortar_82mm_Single30";
            artilleryCharge = MORTAR_RANGE_FAR;
        };
    };
    class BNA_KC_Mortar_M190_ProxyWeapon: BNA_KC_Mortar_M190_Turret
    {
        // Proxy weapon with low loading time, used for CSW
        magazineReloadTime = 0.5;
    };
};


class CfgMagazines
{
    class VehicleMagazine;
    class BNA_KC_Mag_3Rnd_82mm_HE: VehicleMagazine
    {
        displayName = "[KC] 3Rnd Mortar HE Shells";
        displayNameShort = "3Rnd HE";
        displayNameMFDFormat = "HE";
        ammo = "BNA_KC_82mm_HE_Ammo";

        count = 3;
        initSpeed = 200;
        muzzleImpulseFactor[] = {0, 0};
        nameSound = "heat";

        scope = 1;
        scopeArsenal = 0;

        model = "\z\ace\addons\mk6mortar\data\l16_ammo_he.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
    };
    CSW_MAG_CARRY(BNA_KC_Mag_3Rnd_82mm_HE)

    class BNA_KC_Mag_3Rnd_82mm_SmokeWhite: BNA_KC_Mag_3Rnd_82mm_HE
    {
        displayName = "[KC] 3Rnd Mortar White Smoke Shells";
        displayNameShort = "3Rnd W Smoke";
        ammo = "BNA_KC_82mm_SmokeWhite_Ammo";

        model = "\z\ace\addons\mk6mortar\data\l16_ammo_smk_white.p3d";
        picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_smk_white_ca.paa";
    };
    CSW_MAG_CARRY(BNA_KC_Mag_3Rnd_82mm_SmokeWhite)

    class BNA_KC_Mag_3Rnd_82mm_SmokeBlue: BNA_KC_Mag_3Rnd_82mm_SmokeWhite
    {
        displayName = "[KC] 3Rnd Mortar Blue Smoke Shells";
        displayNameShort = "3Rnd B Smoke";
        ammo = "BNA_KC_82mm_SmokeBlue_Ammo";
    };
    CSW_MAG_CARRY(BNA_KC_Mag_3Rnd_82mm_SmokeBlue)

    class BNA_KC_Mag_3Rnd_82mm_SmokeRed: BNA_KC_Mag_3Rnd_82mm_SmokeWhite
    {
        displayName = "[KC] 3Rnd Mortar Red Smoke Shells";
        displayNameShort = "3Rnd R Smoke";
        ammo = "BNA_KC_82mm_SmokeRed_Ammo";
    };
    CSW_MAG_CARRY(BNA_KC_Mag_3Rnd_82mm_SmokeRed)
};


class CfgAmmo
{
    class Sh_155mm_AMOS;
    class BNA_KC_82mm_HE_Ammo: Sh_155mm_AMOS
    {
        // Damage Values
        hit = 340;
        dangerRadiusHit = 750; // Range that AI can detect it
        indirectHit = 125;
        indirectHitRange = 30;
        suppressionRadiusHit = 75; // Max distance that AI will be suppressed by
        explosive = 0.8; // "How much" of the damage is explosive (80% explosive, 20% kinetic)

        cost = 200; // Used by AI to see if the ammo is "worth" using

        // Visual Effects
        effectFly = "3AS_PlasmaBolt_Medium_Blue_Fly";
        effectFlare = "FlareShell";
        effectsFire = "CannonFire";
        effectsMissile = "ExplosionEffects";
        effectsSmoke = "SmokeShellWhite";
        explosionEffects = "MortarExplosion";

        MORTAR_SOUND_AMMO()

        // Camera Shake
        class CamShakeExplode
        {
            distance = 216.443;
            duration = 1.8;
            frequency = 20;
            power = 16.4;
        };
        class CamShakeFire
        {
            distance = 72.4431;
            duration = 1.8;
            frequency = 20;
            power = 3.00922;
        };
        class CamShakeHit
        {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 82;
        };
        class CamShakePlayerFire
        {
            distance = 1;
            duration = 0.6;
            frequency = 20;
            power = 82;
        };
    };

    // Colored smoke effects for artillery
    #include "ArtySubmunition.hpp"

    class ShotDeployBase;
    class BNA_KC_82mm_SmokeWhite_Ammo: ShotDeployBase
    {
        model = "\A3\weapons_f\ammo\shell";
        submunitionAmmo = "SmokeShellArty"; // Smoke effect to spawn (or any other ammo type)

        // effectFly = "3AS_PlasmaBolt_Medium_Blue_Fly";
        effectFlare = "FlareShell";
        effectsFire = "CannonFire";
        effectsMissile = "ExplosionEffects";
        effectsSmoke = "SmokeShellWhite";
        explosionEffects = "MortarExplosion";

        MORTAR_SOUND_AMMO()
    };
    class BNA_KC_82mm_SmokeBlue_Ammo: BNA_KC_82mm_SmokeWhite_Ammo
    {
        submunitionAmmo = "BNA_KC_SmokeShellArty_Blue";
    };
    class BNA_KC_82mm_SmokeRed_Ammo: BNA_KC_82mm_SmokeWhite_Ammo
    {
        submunitionAmmo = "BNA_KC_SmokeShellArty_Red";
    };
};


class ACE_CSW_Groups
{
    // Conversions for inventory mags to vehicle mags
    class BNA_KC_Mag_3Rnd_82mm_HE_CSW
    {
        BNA_KC_Mag_3Rnd_82mm_HE = 1; // Gives 1 of this magazine when loading
    };
    class BNA_KC_Mag_3Rnd_82mm_SmokeWhite_CSW
    {
        BNA_KC_Mag_3Rnd_82mm_SmokeWhite = 1;
    };
    class BNA_KC_Mag_3Rnd_82mm_SmokeBlue_CSW
    {
        BNA_KC_Mag_3Rnd_82mm_SmokeBlue = 1;
    };
    class BNA_KC_Mag_3Rnd_82mm_SmokeRed_CSW
    {
        BNA_KC_Mag_3Rnd_82mm_SmokeRed = 1;
    };
};


class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class ace_csw_deploy
            {
                displayName = "Deploy";
                exceptions[] = {};
                condition = "call ace_csw_fnc_assemble_canDeployTripod";
                statement = "call ace_csw_fnc_assemble_deployTripod";
                modifierFunction = "call BNAKC_fnc_deployModifier";
            };
        };

        class UserActions
        {
            class BNA_KC_ACE_CSW_Deploy
            {
                displayName = "Deploy Tripod";
                displayNameDefault = "";

                position = "camera";
                radius = 30;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 5;

                condition = "[this] call ace_csw_fnc_assemble_canDeployTripod and BNA_KC_Misc_UserActionACECSW == true";
                statement = "[ace_player] call ace_csw_fnc_assemble_deployTripod";
            };
        };
    };

    class StaticMortar;
    class Mortar_01_base_F: StaticMortar
    {
        class Turrets;
        class HitPoints;
        class ACE_Actions;
    };
    class B_Mortar_01_F: Mortar_01_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class HitPoints: HitPoints
        {
            class HitBody;
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class UserActions;
        class assembleInfo;
    };
    class BNA_KC_Mortar_Base: B_Mortar_01_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        armor = 40;
        armorStructural = 0.5;
        crew = "BNA_KC_Unit_Phase2_CT";

        // ACE
        ace_cargo_noRename = 1;
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = { 0, 1.2, 0 };
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = { 0, 1.2, 0 };

        model = "3AS\3as_static\Mortar\model\republicmortar.p3d";
        hiddenSelections[] = {"Camo_1","Camo_2"};
        hiddenSelectionsMaterials[] =
        {
            "\3as\3as_static\Mortar\data\base.rvmat",
            "\3as\3as_static\Mortar\data\tube.rvmat"
        };

        editorPreview = "\3as\3as_static\images\3AS_Republic_Mortar.jpg";
        icon = "3AS\3as_static\Mortar\Data\ui\Mortar_top_ca.paa";

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VStatic";
        side = 1;

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                magazines[] = { "" };
                weapons[] = { "" };

                // Maximum and minimum angles for mortar turret
                maxElev = 25.762;
                maxOutElev = 20;

                minElev = -30;
                minOutElev = -4;
            };
        };

        class HitPoints: HitPoints
        {
            class HitBody: HitBody
            {
                armor = 5;
                armorStructural = 0.25;
            };
        };

        class ACE_CSW
        {
            enabled = 1;
            disassembleTo = "";

            ammoLoadTime = 5;
            ammoUnloadTime = 5;
            desiredAmmo = 3;

            magazineLocation = "_target selectionPosition 'usti hlavne'";
            proxyWeapon = "";
        };
        delete assembleInfo; // Removes base game disassemble option

        class ACE_Actions: ACE_Actions
        {
            displayName = "Mortar";
            selection = "gunnerview";
            condition = "true";
            distance = 4;

            class ACE_MainActions: ACE_MainActions
            {
                class ace_csw_pickUp
                {
                    displayName = "Disassemble Mortar";
                    condition = "call ace_csw_fnc_assemble_canPickupTripod";
                    statement = "call ace_csw_fnc_assemble_pickupTripod";
                    modifierFunction = "_this call BNAKC_fnc_deployModifier";
                };
            };
        };

        class UserActions: UserActions
        {
            class BNA_KC_ACE_CSW_PickUp
            {
                displayName = "Disassemble Mortar";
                displayNameDefault = "";

                position = "pilotView";
                radius = 1.5;
                onlyForPlayer = 0;

                hideOnUse = 1;
                priority = 5;

                condition = "[this, ace_player] call ace_csw_fnc_assemble_canPickupTripod and BNA_KC_Misc_UserActionACECSW == true";
                statement = "[this, ace_player] call ace_csw_fnc_assemble_pickupTripod";
            };
        };

        class Damage
        {
            tex[] = {};
            mat[] =
            {
                "3as\3as_static\mortar\data\base.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
                "3as\3as_static\mortar\data\tube.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
                "A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
            };
        };
    };
    class BNA_KC_Mortar_M190: BNA_KC_Mortar_Base
    {
        displayName = "[KC] M-190 Mortar System";
        scope = 2;
        scopeCurator = 2;

        hiddenSelectionsTextures[] =
        {
            "\3as\3as_static\Mortar\data\base.001_co.paa",
            "\3as\3as_static\Mortar\data\tube.001_co.paa"
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                magazines[] =
                {
                    "BNA_KC_Mag_3Rnd_82mm_HE",
                    "BNA_KC_Mag_3Rnd_82mm_SmokeWhite",
                    "BNA_KC_Mag_3Rnd_82mm_SmokeBlue",
                    "BNA_KC_Mag_3Rnd_82mm_SmokeRed"
                };
                weapons[] = { "BNA_KC_Mortar_M190_Turret" };
            };
        };

        class ACE_CSW: ACE_CSW
        {
            disassembleTo = "BNA_KC_Mortar_M190_Carry";
            proxyWeapon = "BNA_KC_Mortar_M190_ProxyWeapon";
            name = "M190 Mortar";
        };
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_SubCat_VStatic
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        scope = 2;
        scopeCurator = 2;
        displayName = "Static Weapons";
    };
};