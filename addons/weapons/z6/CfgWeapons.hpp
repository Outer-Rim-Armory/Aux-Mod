class CfgWeapons {
    class LMG_Mk200_F;
    class JLTS_Z6: LMG_Mk200_F {
        class manual;
        class Overcharge;
        class close;
        class medium;
        class short;
        class far_optic1;
        class far_optic2;
    };
    class CLASS(Z6_Base): JLTS_Z6 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Z-6 (Base)";
        baseWeapon = QCLASS(Z6_Base);

        modes[] = {"manual","Overcharge","close","short","medium","far_optic1","far_optic2"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_400Rnd_Z6), QCLASS(Mag_400Rnd_Z6_Red), "Aux12thFleet_Mag_Z6"};
        magazineWell[] = {};

        recoil = "recoil_lim";

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class manual: manual {
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_Z6Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z6Shot)};
            };
        };
        class Overcharge: manual
        {
            dispersion = 0.00015*4;
            displayName = "Overcharge";
            reloadTime = 0.015;
            burst = 25;
            textureType = "fastAuto";
        };
        class close: manual
        {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close
        {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium: close
        {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
        class far_optic1: medium
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 1000;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.4;
            maxRange = 650;
            maxRangeProbab = 0.01;
        };
        class far_optic2: far_optic1
        {
            burst = 3;
            requiredOpticType = 2;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 750;
            midRangeProbab = 0.7;
            maxRange = 900;
            maxRangeProbab = 0.01;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 900;
        };
    };

    class CLASS(Z6): CLASS(Z6_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Z-6";
        baseWeapon = QCLASS(Z6);

        JLTS_friedItem = QCLASS(Z6_Fried);
    };

    class CLASS(Z6_Fried): CLASS(Z6) {
        SCOPE_HIDDEN;

        displayName = "[KC] Z-6 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};