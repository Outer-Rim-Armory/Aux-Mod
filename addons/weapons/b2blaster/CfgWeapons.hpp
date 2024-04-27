class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class CLASS(DC15S_base);
    class CLASS(E5_base): CLASS(DC15S_base) {
        class Single;
    };
    class CLASS(B2Blaster_base): CLASS(E5_base) {
        displayName = "[KC] Dual Wrist Blaster (Base)";
        descriptionShort = "Built in repeating blaster";
        baseWeapon = QCLASS(B2Blaster_base);

        modes[] = {"Single", "close", "short", "medium", "FullAuto"};
        muzzles[] = {"this", "RocketLauncher"};
        magazines[] = {QCLASS(Mag_60rnd_B2Blaster)};

        canShootInWater = FALSE;

        model = QPATHTOF(b2Blaster\data\models\CLASS(B2Blaster.p3d));
        handAnim[] = {"OFP2_ManSkeleton", "\3AS\3AS_Weapons\DWBlaster\Data\Anim\DualWrist_handanim.rtm"};
        picture = QPATHTOF(b2Blaster\data\ui\b2Blaster_ca.paa);

        useModelOptics = TRUE;
        modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        class Single: Mode_SemiAuto {
            dispersion = 0.00073;
            reloadTime = 0.2;

            maxRange = 50;
            maxRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            minRange = 5;
            minRangeProbab = 0.1;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 500;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_B2Blaster_Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_B2Blaster_Shot)};
            };
        };

        class close: Single {
            showToPlayer = FALSE;
            dispersion = 0.00073;

            maxRange = 400;
            maxRangeProbab = 0.2;
            midRange = 200;
            midRangeProbab = 0.7;
            minRange = 0;
            minRangeProbab = 0.05;

            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
        };

        class short: close {
            maxRange = 300;
            minRange = 50;
            minRangeProbab = 0.2;

            aiRateOfFireDistance = 200;
        };

        class medium: close {
            maxRange = 600;
            midRange = 450;
            minRange = 300;
            minRangeProbab = 0.2;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 600;
        };

        class FullAuto: Mode_FullAuto {
            dispersion = 0.00174;
            reloadTime = 0.25;

            maxRange = 50;
            maxRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.6;
            minRange = 5;
            minRangeProbab = 0.3;

            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 900;

            recoil = "recoil_auto_pdw";
            recoilProne = "recoil_auto_prone_pdw";

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_B2Blaster_Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_B2Blaster_Shot)};
            };
        };

        class RocketLauncher: CLASS(E5_base) {
            displayName = "Wrist Rocket Launcher";
            modes[] = {"Single"};
            muzzles[] = {"this"};
            magazines[] = {QCLASS(Mag_3rnd_B2Blaster_rocket)};

            useModelOptics = TRUE;
            modelOptics = "\A3\weapons_f\reticle\Optics_Gunner_02_F.p3d";

            fireLightDuration = 0.05;
            fireLightIntensity = 0.2;
            fireLightDiffuse[] = {0.831, 0.831, 0.251};

            aiDispersionCoefX = 6;
            changeFiremodeSound[] = {"", 1, 1};
            discreteDistanceInitIndex = 1;
            drySound[] = {"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry", 0.177828, 1, 10};

            inertia = 1.1;
            initSpeed = -1;
            maxRecoilSway = 0.008;
            recoil = "recoil_mmg_01";
            reloadAction = "ReloadMagazine";
            reloadMagazineSound[] = {"\SWLW_droids\smgs\e5\sounds\e5_reload.wss",1.5, 1, 20};
            swayDecaySpeed = 2;

            ace_overheating_allowSwapBarrel = TRUE;
            ace_overheating_closedBolt = FALSE;
            ace_Overheating_Dispersion = 0;
            ace_Overheating_JamChance = 0;
            ace_overheating_mrbs = 3e+009;
            ace_overheating_slowdownFactor = 0;
            ace_overpressure_angle = 0;
            ace_overpressure_damage = 0;
            ace_overpressure_priority = 1;
            ace_overpressure_range = 0;

            class Single: Mode_SemiAuto {
                reloadTime = 0.5;
                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_single_prone_mx";

                dispersion = 0.00073;
                minRange = 5;
                minRangeProbab = 0.1;
                midRange = 150;
                midRangeProbab = 0.6;
                maxRange = 300;
                maxRangeProbab = 0.3;
                aiRateOfFire = 1;

                sounds[] = {"StandardSound"};
                class StandardSound {
                    soundSetShot[] = {QCLASS(SoundSet_B2Rocket_Shot)};
                };
            };
        };
    };

    class CLASS(B2Blaster): CLASS(B2Blaster_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Dual Wrist Blaster";
        baseWeapon = QCLASS(B2Blaster);
    };

    class CLASS(B2Blaster_grenadeLauncher): CLASS(B2Blaster_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Wrist Grenade Launcher";
        baseWeapon = QCLASS(B2Blaster_grenadeLauncher);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_3rnd_B2Blaster_grenadeLauncher)};

        class Single: Single {
            reloadTime = 2.5;

            maxRange = 500;
            maxRangeProbab = 0.3;
            midRange = 0;
            midRangeProbab = 0.6;
            minRange = 0;
            minRangeProbab = 0.1;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_B2GL_Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_B2GL_Shot)};
            };
        };

    };

    class CLASS(B2Blaster_rocket): CLASS(B2Blaster_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Wrist Rocket Launcher";
        baseWeapon = QCLASS(B2Blaster_Rocket);

        muzzles[] = {"RocketLauncher"};
    };

    class CLASS(B2Blaster_flamer): CLASS(B2Blaster_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Wrist Mounted Flamethrower";
        descriptionShort = "Built in flamethrower";
        baseWeapon = QCLASS(B2Blaster_flamer);

        magazines[] = {QCLASS(Mag_150rnd_B2Blaster_flamer)};

        canShootInWater = FALSE;

        WBK_BurnEm_IsFlamethrower = "True";
        WBK_BurnEm_FlamethrowerDistance = 40;
        WBK_BurnEm_RequiredBackpack = "";
        WBK_BurnEm_flamethrowerParticlePos = "[[0, 0, 0], 'righthand']";
        WBK_BurnEm_FlamethrowerSoundArray = "['flamethrower_start', 'flamethrower_looping', 4.8, 'flamethrower_end']";

        modes[] = {"FullAuto", "close", "short", "medium"};
        muzzles[] = {"this"};

        class close: close {
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_flamethrowerStart)};
            };
        };

        class short: short {
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_flamethrowerStart)};
            };
        };

        class medium: medium {
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_flamethrowerStart)};
            };
        };

        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_flamethrowerStart)};
            };
        };
    };
};