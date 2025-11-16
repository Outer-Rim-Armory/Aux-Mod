class CfgWeapons {
    class arifle_MX_Base_F;
    class JLTS_SBB3: arifle_MX_Base_F {
        class Single;
    };
    class CLASS(SBB3_Base): JLTS_SBB3 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] SB-B3 (Base)";
        baseWeapon = QCLASS(SBB3_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_25rnd_SBB3)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class Single: Single {
            class StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_SBB3Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_SBB3Shot)};
            };
        };
    };

    class CLASS(SBB3): CLASS(SBB3_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] SB-B3";
        baseWeapon = QCLASS(SBB3);

        JLTS_friedItem = QCLASS(SBB3_Fried);
    };

    class CLASS(SBB3_Fried): CLASS(SBB3) {
        SCOPE_HIDDEN;

        displayName = "[KC] SB-B3 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\SBB3\data\ui\SBB3_fried_ui_ca.paa";
        baseWeapon = QCLASS(SBB3_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
