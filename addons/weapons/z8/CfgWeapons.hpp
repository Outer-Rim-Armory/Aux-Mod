class CfgWeapons {
    class Launcher_base_F;
    class 3AS_Chaingun: Launcher_base_F {
        class FullAuto;
    };
    class CLASS(Z8_base): 3AS_Chaingun {
        SCOPE_PRIVATE;
        author = AUTHOR;

        baseWeapon = QCLASS(Z8_base);
        modes[] = {"FullAuto"};
        magazines[] = {QCLASS(Mag_1200rnd_Z8), QCLASS(Mag_1200rnd_Z8_Red)};

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        // Enable "buddy reloading"
        ace_reloadLaunchers_enabled = TRUE;

        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;

            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_Z8Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z8Shot)};
            };
        };
    };

    class CLASS(Z8): CLASS(Z8_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Z-8 Rotary Chaingun";
        baseWeapon = QCLASS(Z8);

        JLTS_friedItem = QCLASS(Z8_fried);
    };

    class CLASS(Z8_fried): CLASS(Z8) {
        SCOPE_HIDDEN;

        displayName = "[KC] Z-8 Rotary Chaingun (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(z8\data\ui\Z8_fried_ca.paa);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
