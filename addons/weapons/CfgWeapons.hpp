class Mode_SemiAuto;

class CfgWeapons {
    class JLTS_stun_muzzle;
    class CLASS(Muzzle_Stun): JLTS_stun_muzzle {
        displayName = "Stun";
        magazines[] = {
            QCLASS(Mag_StunShort),
            QCLASS(Mag_StunLong),
            "Aux12thFleet_Mag_StunShort",
            "Aux12thFleet_Mag_StunLong"
        };
        magazineWell[] = {};
    };

    class CLASS(Muzzle_Stun_Fried): CLASS(Muzzle_Stun) {
        displayName = "Stun (Fried)";
        magazines[] = {};
    };

    // "Fake" UGL Muzzle because the vanilla ones cause issues on pistols
    class Rifle_Base_F;
    class CLASS(Muzzle_FakeUGL): Rifle_Base_F {
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

        class Single: Mode_SemiAuto {
            textureType = "semi";

            maxRange = 400;
            maxRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            minRange = 30;
            minRangeProbab = 0.1;

            nameSound = "";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType {
                closure1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1, 1, 10};
                soundClosure[] = {"closure1", 1};
            };
            class StandardSound: BaseSoundModeType {
                begin1[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_01", 0.707946, 1, 200};
                begin2[] = {"\A3\Sounds_F\arsenal\weapons\UGL\UGL_02", 0.707946, 1, 200};
                soundBegin[] = {"begin1", 0.5, "begin2", 0.5};

                soundSetShot[] = {"UGL_shot_SoundSet", "UGL_Tail_SoundSet", "UGL_InteriorTail_SoundSet"};
            };
        };
    };
};
