#include "CfgPatches.hpp"


class Mode_SemiAuto;

class CfgWeapons
{
    // Fake UGL to avoid camera issues on a pistol
    class Rifle_Base_F;
    class BNA_KC_Launcher_Muzzle: Rifle_Base_F
    {
        displayName = "Launcher";
        magazines[] = {};
        magazineWell[] = {};

        modes[] = {"Single"};
        muzzles[] = {"this"};

        nameSound = "";

        changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl", 0.316228, 1, 5};
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL", 0.562341, 1, 10};
        drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl", 0.562341, 1, 10};

        recoil = "recoil_pistol_p07";
        recoilProne = "recoil_pistol_p07";

        cursor = "EmptyCursor";
        cursorAim = "gl";
        textureType = "semi";

        autoFire = 0;

        class Single: Mode_SemiAuto
        {
            textureType = "semi";

            // recoil = "recoil_pistol_p07";
            // recoilProne = "recoil_pistol_p07";

            // For AI units
            maxRange = 400;
            maxRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            minRange = 30;
            minRangeProbab = 0.1;

            nameSound = "";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01", 0.707946, 1, 200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02", 0.707946, 1, 200};
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};

                soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
            };
        };
    };

    class Pistol_Base_F;
    class hgun_P07_F: Pistol_Base_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class JLTS_DC17SA: hgun_P07_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
        };

        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
        class Stun;
    };
    class BNA_KC_DC17_Base: JLTS_DC17SA
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-17 (Base)";
        baseWeapon = "BNA_KC_DC17_Base";

        modes[] = {"Single"};
        muzzles[] = {"this", "Stun", "Launcher"};
        magazines[] = {"Aux12thFleet_Mag_DC17"};
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                displayName = "Optics Slot";
                compatibleItems[] =
                {
                    // Sights
                    "aux501_cows_pistol",
                    "aux501_cows_pistol_2"
                };

                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
            class UnderBarrelSlot;
        };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_DC17_Single"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC17_Single"};
            };
        };
        class Stun: Stun
        {
            displayName = "Stun";
            magazines[] = {};
            magazineWell[] = {"BNA_KC_Stuns"};
        };
        class Launcher: BNA_KC_Launcher_Muzzle
        {
            displayName = "Flare Launcher";
            magazines[] = {};
            magazineWell[] = {"BNA_KC_3Rnd_UGL_Flares"};
        };
    };

    class BNA_KC_DC17: BNA_KC_DC17_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-17";
        baseWeapon = "BNA_KC_DC17";

        JLTS_shieldedWeapon = "BNA_KC_DC17_RiotShield";
        JLTS_friedItem = "BNA_KC_DC17_Fried";
    };
    class BNA_KC_DC17_Fried: BNA_KC_DC17
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-17 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_fried_ui_ca.paa";
        baseWeapon = "BNA_KC_DC17_Fried";

        JLTS_shieldedWeapon = "BNA_KC_DC17_RiotShield_Fried";
        JLTS_isFried = 1;
        magazines[] = {};

        class Stun: Stun
        {
            displayName = "Stun (Fried)";
            magazines[] = {};
        };
        class Launcher: Launcher
        {
            displayName = "Flare Launcher (Fried)";
            magazines[] = {};
        };
    };

    class BNA_KC_DC17_RiotShield: BNA_KC_DC17
    {
        // Scopes
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_DC17_RiotShield";

        JLTS_isShielded = 1;
        JLTS_friedItem = "BNA_KC_DC17_RiotShield_Fried";
        JLTS_baseWeapon = "BNA_KC_DC17";

        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
        handAnim[] =
        {
            "OFP2_ManSkeleton",
            "\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
        };

        recoil = "recoil_pdw";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] =
                {
                    "JLTS_riot_shield_attachment",
                    "JLTS_riot_shield_212_attachment",
                    "JLTS_riot_shield_501_attachment",
                    "JLTS_riot_shield_101_attachment",
                    "JLTS_riot_shield_CG_attachment",
                    "JLTS_riot_shield_GD_attachment",
                    "JLTS_riot_shield_droid_attachment"
                };
            };
        };
    };
    class BNA_KC_DC17_RiotShield_Fried: BNA_KC_DC17_RiotShield
    {
        displayName = "[KC] DC-17 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_fried_ui_ca.paa";
        baseWeapon = "BNA_KC_DC17_RiotShield_Fried";

        JLTS_isFried = 1;
        magazines[] = {};

        class Stun: Stun
        {
            displayName = "Stun (Fried)";
            magazines[] = {};
        };
        class Launcher: Launcher
        {
            displayName = "Flare Launcher (Fried)";
            magazines[] = {};
        };
    };

    class BNA_KC_GR20: BNA_KC_DC17_Base
    {
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] GR-20";
        descriptionShort = "A GR-10 modified to shoot pressurized<br/>bacta canisters instead of plasma.";
        baseWeapon = "BNA_KC_GR20";

        JLTS_canHaveShield = 0;
        JLTS_friedItem = "BNA_KC_GR20_Fried";

        magazines[] = {};
        magazineWell[] = {};

        modes[] = {};
        muzzles[] = {"Launcher"};

        class Launcher: Launcher
        {
            displayName = "Bacta Launcher";
            magazines[] = {"BNA_KC_Mag_GR20"};
            magazineWell[] = {};
        };
    };
    class BNA_KC_GR20_Fried: BNA_KC_GR20
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] GR-20 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_fried_ui_ca.paa";
        baseWeapon = "BNA_KC_GR20_Fried";

        JLTS_isFried = 1;

        class Launcher: Launcher
        {
            displayName = "Bacta Launcher (Fried)";
            magazines[] = {};
        };
    };
};


class CfgMagazines
{
    class JLTS_DC17SA_mag;
    class Aux12thFleet_Mag_DC17: JLTS_DC17SA_mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] DC-17 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 20<br/>Used In: DC-17";
        ammo = "Aux12thFleet_Ammo_Rifle_Blue";

        JLTS_hasEMPProtection = 1;
    };

    class 1Rnd_Smoke_Grenade_shell;
    class BNA_KC_Mag_GR20: 1Rnd_Smoke_Grenade_shell
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[KC] Pressurized Bacta Canister";
        displayNameShort = "Bacta Bomb";
        descriptionShort = "Pressurized Bacta Gas<br/>Rounds: 1<br/>Used In: GR-20<br/>Nicknamed the 'Bacta Bomb' by Republic Medics";
        picture = "\BNA_KC_Weapons\Grenades\Data\Textures\UI\BNA_KC_Mag_BactaBomb_UI.paa";
        ammo = "BNA_KC_Grenade_BactaBomb_Ammo";

        BNA_KC_GrenadeType = "BACTA";
        BNA_KC_GrenadeBacta_Radius = 10;
        BNA_KC_GrenadeBacta_Duration = 15;

        JLTS_hasEMPProtection = 1;
    };
};

class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_DC17_Single: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"BNA_KC_Weapons\DC17\Data\Audio\DC17_Fire1.wss", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_DC17_Single: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC17_Single"};
    };
};