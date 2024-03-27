class CfgWeapons
{
    class LMG_Mk200_F;
    class JLTS_Z6: LMG_Mk200_F
    {
        class manual;
        class close;
        class medium;
        class short;
        class far_optic1;
        class far_optic2;
    };
    class CLASS(Z6_Base): JLTS_Z6
    {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Z-6 (Base)";
        baseWeapon = QCLASS(Z6_Base);

        modes[] = {"manual", "close", "short", "medium", "far_optic1", "far_optic2"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_300Rnd_Z6), "Aux12thFleet_Mag_Z6"};
        magazineWell[] = {};

        recoil = "recoil_lim";

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class manual: manual
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Z6Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z6Shot)};
            };
        };
        class close: close
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Z6Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z6Shot)};
            };
        };
        class short: short
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Z6Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z6Shot)};
            };
        };
        class medium: medium
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Z6Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z6Shot)};
            };
        };
        class far_optic1: far_optic1
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Z6Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z6Shot)};
            };
        };
        class far_optic2: far_optic2
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_Z6Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Z6Shot)};
            };
        };
    };

    class CLASS(Z6): CLASS(Z6_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Z-6";
        baseWeapon = QCLASS(Z6);

        JLTS_friedItem = QCLASS(Z6_Fried);
    };

    class CLASS(Z6_Fried): CLASS(Z6)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] Z-6 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};