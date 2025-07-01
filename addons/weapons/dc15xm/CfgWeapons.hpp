class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class LFP_DC15xm: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };

        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class CLASS(DC15XM_Base): LFP_DC15xm {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-15XM (Base)";
        baseWeapon = QCLASS(DC15XM_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_10Rnd_DC15XM)};
        magazineWell[] = {};

        canShootInWater = TRUE;
        initSpeed = 2500;

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
            reloadTime = 1;

            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15XMShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15XMShot)};
            };
        };
    };

    class CLASS(DC15XM): CLASS(DC15XM_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15XM";
        baseWeapon = QCLASS(DC15XM);

        JLTS_friedItem = QCLASS(DC15XM_Fried);

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
            };
        };
    };
    class CLASS(DC15XM_Fried): CLASS(DC15XM) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15XM (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC15XM_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
