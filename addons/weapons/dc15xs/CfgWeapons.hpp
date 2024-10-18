class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class CLASS(Muzzle_Stun);
    class CLASS(Muzzle_Stun_Fried);

    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class LFP_DC15xs: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
        };

        class Single: Mode_SemiAuto {
            class StandardSound;
        };
        class FullAuto: Mode_FullAuto {
            class StandardSound;
        };
        class Stun;
    };
    class CLASS(DC15XS_Base): LFP_DC15xs {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-15XS (Base)";
        baseWeapon = QCLASS(DC15XS_Base);

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this", "Stun"};
        magazines[] = {QCLASS(Mag_50Rnd_DC15XS)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
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
            class UnderBarrelSlot;
        };
        class Single: Single {
            reloadTime = 0.16;

            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15XSShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15XSShot)};
            };
        };
        class FullAuto: FullAuto {
            reloadTime = 0.16;

            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15XSShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15XSShot)};
            };
        };
        class Stun: CLASS(Muzzle_Stun) {};
    };

    class CLASS(DC15XS): CLASS(DC15XS_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15XS";
        baseWeapon = QCLASS(DC15XS);
        JLTS_friedItem = QCLASS(DC15XS_Fried);
    };
    class CLASS(DC15XS_Fried): CLASS(DC15XS) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15XS (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC15XS_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried) {};
    };
};