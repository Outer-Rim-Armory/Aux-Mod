class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class LFP_Valken38x: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
        };

        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class CLASS(Valken38X_Base): LFP_Valken38x {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Valken-38X (Base)";
        baseWeapon = QCLASS(Valken38X_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_25Rnd_Valken38x),QCLASS(Mag_10Rnd_Valken38x_AP)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                class CompatibleItems {
                    3as_bipod_dc15l_f = TRUE;
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

            dispersion = 0.00005;
            reloadTime = 0.5;

            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_Valken38xShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Valken38xShot)};
            };
        };
    };

    class CLASS(Valken38X): CLASS(Valken38X_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Valken-38X";
        baseWeapon = QCLASS(Valken38X);

        JLTS_friedItem = QCLASS(Valken38X_Fried);

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = QCLASS(Optic_DC15X);
            };
        };
    };
    class CLASS(Valken38X_Fried): CLASS(Valken38X) {
        SCOPE_HIDDEN;

        displayName = "[KC] Valken-38X (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
        baseWeapon = QCLASS(Valken38X_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
