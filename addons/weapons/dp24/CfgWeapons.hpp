class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class OPTRE_CQS48_Bulldog_Automatic: arifle_MX_Base_F {
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
    };
    class CLASS(DP24_Base): OPTRE_CQS48_Bulldog_Automatic {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DP-24 (Base)";
        model = "\OPTRE_Weapons\bulldog\bulldog.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\bulldog\data\anim\bulldog.rtm"};
        baseWeapon = QCLASS(DP24_Base);

        modes[] = {"Single", "FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_40Rnd_DP24), QCLASS(Mag_20Rnd_DP24_HE), QCLASS(Mag_4Rnd_DP24_Flame)};
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
                };
            };
        };

        class Single: Single {
            reloadTime = 0.20;
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DP23Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DP23Shot)};
            };
        };
        class FullAuto: FullAuto {
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DP23Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DP23Shot)};
            };
        };
    };

    class CLASS(DP24): CLASS(DP24_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DP-24";
        baseWeapon = QCLASS(DP24);

        JLTS_friedItem = QCLASS(DP24_Fried);
    };
    class CLASS(DP24_Fried): CLASS(DP24) {
        SCOPE_HIDDEN;

        displayName = "[KC] DP-24 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
        baseWeapon = QCLASS(DP24_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
