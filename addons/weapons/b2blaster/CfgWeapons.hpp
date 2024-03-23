class CfgWeapons {
    class CLASS(E5_base);
    class CLASS(B2Blaster_base): CLASS(E5_base) {
        displayName = "[KC] B2 Arm Blaster (Base)";
        baseWeapon = QCLASS(B2Blaster_base);

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;
    };

    class CLASS(B2Blaster): CLASS(B2Blaster_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] B2 Arm Blaster";
        baseWeapon = QCLASS(B2Blaster);
    };
};