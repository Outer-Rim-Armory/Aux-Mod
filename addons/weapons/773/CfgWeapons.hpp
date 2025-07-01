class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class LFP_773sr: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };

        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class CLASS(773_Base): LFP_773sr {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] 773 Rifle (Base)";
        baseWeapon = QCLASS(773_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_15Rnd_773), QCLASS(Mag_15Rnd_773_Red)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                class CompatibleItems {
                    bipod_01_f_blk = TRUE;
                };
            };
        };
        class Single: Single {
            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;

            dispersion = 0.0003;
            reloadTime = 1.5;

            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_773Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_773Shot)};
            };
        };
    };

    class CLASS(773): CLASS(773_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] 773 Rifle";
        baseWeapon = QCLASS(773);

        JLTS_friedItem = QCLASS(773_Fried);

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = QCLASS(Optic_DC15X);
            };
        };
    };
    class CLASS(773_Fried): CLASS(773) {
        SCOPE_HIDDEN;

        displayName = "[KC] 773 Rifle (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
        baseWeapon = QCLASS(773_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
