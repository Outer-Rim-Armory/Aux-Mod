class CfgWeapons {
    class CLASS(DC15S_base);
    class CLASS(E5_base): CLASS(DC15S_base) {
        class Single;
    };
    class CLASS(B2Blaster_base): CLASS(E5_base) {
        displayName = "[KC] B2 Arm Blaster (Base)";
        baseWeapon = QCLASS(B2Blaster_base);

        model = QPATHTOEF(weapons,data\b2Blaster\CLASS(B2Blaster.p3d));

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        class Single: Single {
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_B2Blaster_Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_B2Blaster_Shot)};
            };
        };
    };

    class CLASS(B2Blaster): CLASS(B2Blaster_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] B2 Arm Blaster";
        baseWeapon = QCLASS(B2Blaster);
    };
};