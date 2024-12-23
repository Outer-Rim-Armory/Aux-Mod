class CfgWeapons {
    class 3AS_Flamer_Base;
    class CLASS(X42_base): 3AS_Flamer_Base {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] X-42 Flamethrower (Base)";
        descriptionShort = "BlastTech Flamethrower";
        baseWeapon = QCLASS(X42_base);

        WBK_BurnEm_IsFlamethrower = "True";
        WBK_BurnEm_FlamethrowerDistance = 40;
        WBK_BurnEm_RequiredBackpack = "";
        WBK_BurnEm_FlamethrowerParticlePos = "[[-0.32, 0.3, -0.3], 'leftHand']";
        WBK_BurnEm_FlamethrowerSoundArray = "['flamethrower_start', 'flamethrower_looping', 'flamethrower_end']";

        magazines[] = {QCLASS(Mag_150Rnd_X42)};
        magazineWell[] = {};

        modes[] = {"FullAuto"};

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;
    };

    class CLASS(X42): CLASS(X42_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] X-42 Heavy Flamethrower";
        baseWeapon = QCLASS(X42);

        JLTS_friedItem = QCLASS(X42_Fried);
    };

    class CLASS(X42_fried): CLASS(X42) {
        SCOPE_HIDDEN;

        displayName = "[KC] X-42 Heavy Flamethrower (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = QCLASS(X42_fried);
        picture = QPATHTOF(x42\data\ui\X42_Fried_ca.paa);

        magazines[] = {};

        JLTS_isFried = TRUE;
    };

    class CLASS(BTX42): CLASS(X42) {
        SCOPE_HIDDEN;
        descriptionShort = "BlastTech Flamethrower<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
    class CLASS(BTX45_Heavy): CLASS(X42) {
        SCOPE_HIDDEN;
        descriptionShort = "BlastTech Flamethrower<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};