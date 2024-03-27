class Mode_SemiAuto;
class CowsSlot_Rail;

class CfgWeapons
{
    class CLASS(Muzzle_Stun);
    class CLASS(Muzzle_Stun_Fried);

    // "Fake" UGL Muzzle because the vanilla ones cause issues on pistols
    class Rifle_Base_F;
    class CLASS(Muzzle_FakeUGL): Rifle_Base_F
    {
        displayName = "Launcher";
        magazines[] = {};
        magazineWell[] = {};

        modes[] = {"Single"};
        muzzles[] = {"this"};

        nameSound = "";

        changeFiremodeSound[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl", 0.316228, 1, 5};
        reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL", 0.562341, 1, 10};
        drySound[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl", 0.562341, 1, 10};

        recoil = "recoil_pistol_p07";
        recoilProne = "recoil_pistol_p07";

        cursor = "EmptyCursor";
        cursorAim = "gl";
        textureType = "semi";

        autoFire = FALSE;

        class Single: Mode_SemiAuto
        {
            textureType = "semi";

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
                closure1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_01", 0.707946, 1, 200};
                begin2[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_02", 0.707946, 1, 200};
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};

                soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
            };
        };
    };

    class Pistol_Base_F;
    class hgun_P07_F: Pistol_Base_F
    {
        class Single;
    };
    class JLTS_DC17SA: hgun_P07_F
    {
        class WeaponSlotsInfo;

        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
        class Stun;
    };
    class CLASS(DC17_Base): JLTS_DC17SA
    {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-17 (Base)";
        baseWeapon = QCLASS(DC17_Base);

        modes[] = {"Single"};
        muzzles[] = {"this", "Stun", "Launcher"};
        magazines[] = {QCLASS(Mag_20Rnd_DC17), "Aux12thFleet_Mag_DC17"};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot_Rail
            {
                iconPosition[] = {0.5, 0.35};
                iconScale = 0.2;

                class CompatibleItems
                {
                    ATTACHMENTS_OPTIC_PISTOL;
                };
            };
            class UnderBarrelSlot;
        };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC17Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC17Shot)};
            };
        };

        class Stun: CLASS(Muzzle_Stun)
        {
            reloadAction = "GestureReloadPistol";
            reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07", 1, 1, 10};
        };

        class Launcher: CLASS(Muzzle_FakeUGL)
        {
            displayName = "Flare Launcher";
            magazineWell[] = {QCLASS(MagWell_3Rnd_UGL_Flares)};
        };
    };

    class CLASS(DC17): CLASS(DC17_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-17";
        baseWeapon = QCLASS(DC17);
        JLTS_shieldedWeapon = QCLASS(DC17_RiotShield);
        JLTS_friedItem = QCLASS(DC17_Fried);
    };
    class CLASS(DC17_Fried): CLASS(DC17)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-17 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC17_Fried);

        JLTS_shieldedWeapon = QCLASS(DC17_RiotShield_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried);

        class Launcher: Launcher
        {
            displayName = "Flare Launcher (Fried)";
            magazines[] = {};
        };
    };

    class CLASS(DC17_RiotShield): CLASS(DC17)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-17 (Shield)";
        baseWeapon = QCLASS(DC17_RiotShield);

        JLTS_isShielded = TRUE;
        JLTS_baseWeapon = QCLASS(DC17);
        JLTS_friedItem = QCLASS(DC17_RiotShield_Fried);

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
                class CompatibleItems
                {
                    JLTS_riot_shield_attachment = TRUE;
                    JLTS_riot_shield_212_attachment = TRUE;
                    JLTS_riot_shield_501_attachment = TRUE;
                    JLTS_riot_shield_101_attachment = TRUE;
                    JLTS_riot_shield_CG_attachment = TRUE;
                    JLTS_riot_shield_GD_attachment = TRUE;
                    JLTS_riot_shield_droid_attachment = TRUE;
                };
            };
        };
    };
    class CLASS(DC17_RiotShield_Fried): CLASS(DC17_RiotShield)
    {
        displayName = "[KC] DC-17 (Shield, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC17_RiotShield_Fried);

        JLTS_baseWeapon = QCLASS(DC17_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried) {};

        class Launcher: Launcher
        {
            displayName = "Flare Launcher (Fried)";
            magazines[] = {};
            magazineWell[] = {};
        };
    };
};