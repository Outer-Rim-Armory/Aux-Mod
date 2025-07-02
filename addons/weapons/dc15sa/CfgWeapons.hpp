class CfgWeapons {
    class ls_weapon_dc15sa_base;
    class ls_weapon_dc15sa: ls_weapon_dc15sa_base {
        class Single;
    };
    class CLASS(DC15SA_Base): ls_weapon_dc15sa {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-15SA (Base)";
        baseWeapon = QCLASS(DC15SA_Base);

        modes[] = {"Single", "FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {
            QCLASS(Mag_7Rnd_DC15SA),
            QCLASS(Mag_15Rnd_DC15SA),
            QCLASS(Mag_30Rnd_DC15SA),
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
                soundSetShot[] = {QCLASS(SoundSet_DC15SAShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15SAShot)};
            };
        };
        class FullAuto: Single {
            autoFire = TRUE;
            textureType = "fullAuto";
            dispersion = 0.001;
            reloadTime = 0.15;
        };
    };

    class CLASS(DC15SA): CLASS(DC15SA_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15SA";
        baseWeapon = QCLASS(DC15SA);
    };
};
