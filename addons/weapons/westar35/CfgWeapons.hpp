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
        displayName = "[KC] Westar-35C";
        baseWeapon = QCLASS(Westar35C);

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE; // make fried weapons eventually
    };

    class ls_weapon_westar35s_primary;
    class CLASS(Westar35S_base): ls_weapon_westar35s_primary {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Westar-35S (Base)";
        descriptionShort = "Blaster rifle";
        baseWeapon = QCLASS(Westar35S_base);

        magazines[] = {QCLASS(Mag_35Rnd_Westar35S)};
        magazineWell[] = {};

        canShootInWater = TRUE;
    };

    class CLASS(Westar35S): CLASS(Westar35S_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35S";
        baseWeapon = QCLASS(Westar35S);

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE; // make fried weapons eventually
    };
};