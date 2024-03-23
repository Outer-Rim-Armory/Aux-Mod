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
        magazines[] = {QCLASS(Mag_60rnd_B2Blaster)};

        model = QPATHTOF(b2Blaster\data\models\CLASS(B2Blaster.p3d));
        picture = QPATHTOF(b2Blaster\data\ui\b2Blaster_ca.paa);

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

            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_B2Blaster_Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_B2Blaster_Shot)};
            };
        };
    };

    class CLASS(B2Blaster): CLASS(B2Blaster_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Dual Wrist Blaster";
        baseWeapon = QCLASS(B2Blaster);
    };
};