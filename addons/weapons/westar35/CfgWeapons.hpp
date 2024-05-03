class CfgWeapons {
    class ls_weapon_westar35c_primary;
    class CLASS(Westar35C_base): ls_weapon_westar35c_primary {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Westar-35C (Base)";
        descriptionShort = "Blaster carbine";
        baseWeapon = QCLASS(Westar35C_base);

        magazines[] = {QCLASS(Mag_35Rnd_Westar35C)};
        magazineWell[] = {};

        canShootInWater = TRUE;
    };

    class CLASS(Westar35C): CLASS(Westar35C_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35C (Base)";
        baseWeapon = QCLASS(Westar35C_base);

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE; // make fried weapons eventually
    };
};