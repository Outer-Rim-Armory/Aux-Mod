class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class UMB36_F: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
        };

        class Single: Mode_SemiAuto {
            class StandardSound;
        };
        class FullAuto: Mode_FullAuto {
            class StandardSound;
        };
    };
    class CLASS(UMB36_Base): UMB36_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] UMB-36 (Base)";
        baseWeapon = QCLASS(UMB36_Base);
        mass = 60;

        magazines[] = {QCLASS(Mag_120Rnd_UMB36)};

        canShootInWater = TRUE;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;

        class Single: Single {
            reloadTime = 0.098361;
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_UMB36Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_UMB36Shot)};
            };
        };
        class FullAuto: FullAuto {
            reloadTime = 0.098361;

            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_UMB36Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_UMB36Shot)};
            };
        };
    };

    class CLASS(UMB36): CLASS(UMB36_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] UMB-36";
        baseWeapon = QCLASS(UMB36);
    };
};
