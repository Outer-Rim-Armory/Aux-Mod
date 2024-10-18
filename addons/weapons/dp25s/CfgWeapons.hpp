class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class OPTRE_M45: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };
        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class CLASS(DP25S_Base): OPTRE_M45 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DP-25s (Base)";
        baseWeapon = QCLASS(DP25s_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_12Rnd_DP25S), QCLASS(Mag_12Rnd_DP25S_SLUG), QCLASS(Mag_20Rnd_DP25S_HP), QCLASS(Mag_8Rnd_DP25S_HE), QCLASS(Mag_4Rnd_DP25S_Flame)};
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
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DP23Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DP23Shot)};
            };
        };
    };

    class CLASS(DP25S): CLASS(DP25S_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DP-25s";
        baseWeapon = QCLASS(DP25s);

        JLTS_friedItem = QCLASS(DP25s_Fried);
    };
    class CLASS(DP25S_Fried): CLASS(DP25S) {
        SCOPE_HIDDEN;

        displayName = "[KC] DP-25s (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
        baseWeapon = QCLASS(DP23_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};