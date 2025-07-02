class CfgWeapons {
    class ls_weapon_westar35sa_base;
    class ls_weapon_westar35sa: ls_weapon_westar35sa_base {
        class Single;
    };
    class CLASS(Westar35SA_Base): ls_weapon_westar35sa {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Westar-35SA (Base)";
        baseWeapon = QCLASS(Westar35SA_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {
            QCLASS(Mag_7Rnd_Westar35SA),
            QCLASS(Mag_15Rnd_Westar35SA),
            QCLASS(Mag_30Rnd_Westar35SA),
            "Aux12thFleet_Mag_7Rnd_DC15SA",
            "Aux12thFleet_Mag_15Rnd_DC15SA",
            "Aux12thFleet_Mag_30Rnd_DC15SA"
        };
        magazineWell[] = {};

        canShootInWater = TRUE;

        hiddenSelectionsTextures[] = {QPATHTOF(dc15sa\data\textures\DC15SA_camo1_co.paa)};

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        class Single: Single {
            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_Westar35SA_Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Westar35SA_Shot)};
            };
        };
    };

    class CLASS(Westar35SA): CLASS(Westar35SA_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35SA";
        baseWeapon = QCLASS(Westar35SA);
    };
};
