class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class OPTRE_M45ATAC: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class CLASS(DP25_Base): OPTRE_M45ATAC {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DP-25 (Base)";
        baseWeapon = QCLASS(DP25_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_12Rnd_DP25), QCLASS(Mag_12Rnd_DP25_SLUG), QCLASS(Mag_20Rnd_DP25_HP), QCLASS(Mag_8Rnd_DP25_HE), QCLASS(Mag_4Rnd_DP25_Flame)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    ATTACHMENTS_OPTIC_SHORT;
                    ATTACHMENTS_OPTIC_MEDIUM;
                    ATTACHMENTS_OPTIC_SIGHTS;
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
        };

        class Single: Single {
            reloadTime = 0.25;
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DP25Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DP25Shot)};
            };
        };
    };

    class CLASS(DP25): CLASS(DP25_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DP-25";
        baseWeapon = QCLASS(DP25);

        JLTS_friedItem = QCLASS(DP25_Fried);
    };
    class CLASS(DP25_Fried): CLASS(DP25) {
        SCOPE_HIDDEN;

        displayName = "[KC] DP-25 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
        baseWeapon = QCLASS(DP25_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};