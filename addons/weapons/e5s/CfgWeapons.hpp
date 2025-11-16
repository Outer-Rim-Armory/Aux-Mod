class CfgWeapons {
    class arifle_MX_Base_F;
    class JLTS_E5S: arifle_MX_Base_F {
        class Single;
        class OpticsModes {
            class Snip;
        };
    };
    class CLASS(E5S_Base): JLTS_E5S {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] E-5S (Base)";
        descriptionShort = "Sniper rifle";
        baseWeapon = QCLASS(E5S_Base);

        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_20rnd_E5S)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        fireLightDiffuse[] = {1, 0, 0};

        class Single: Single {
            reloadTime = 1.2;
            dispersion = 0.0003;
            minRange = 100;
            minRangeProbab = 0.2;
            midRange = 550;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;

            class StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_E5SShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_E5SShot)};
            };
        };

        class OpticsModes: OpticsModes {
            class Snip: Snip {
                thermalMode[] = {WHOT, BHOT};
            };
        };
    };

    class CLASS(E5S): CLASS(E5S_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] E-5S";
        baseWeapon = QCLASS(E5S);

        JLTS_friedItem = QCLASS(E5S_Fried);
    };

    class CLASS(E5S_Fried): CLASS(E5S) {
        SCOPE_HIDDEN;

        displayName = "[KC] E-5S (Fried)";
        baseWeapon = QCLASS(E5S_Fried);

        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\E5S\data\ui\E5S_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
