class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons {
    class LFP_rifle_base;
    class LFP_hi12: LFP_rifle_base {
        class WeaponSlotsInfo;
        class Single;

        class OpticsModes {
            class hi12scope_sights;
            class hi12scope_scope;
        };
    };
    class CLASS(HI12_Base): LFP_hi12 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] HI-12 (Base)";
        baseWeapon = QCLASS(HI12_Base);
        picture = QPATHTOF(hi12\data\ui\HI12_ca.paa);

        modes[] = {
            "Single",
            "Burst",
            "close",
            "short",
            "medium"
        };
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_30Rnd_HI12)};
        magazineWell[] = {};

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;

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
                    bipod_01_F_blk = TRUE;
                };
            };
        };

        class Single: Single {
            class BaseSoundModeType {
                closure1[] = {};
                closure2[] = {};
                soundClosure[] = {};
            };
            class StandardSound: BaseSoundModeType {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_HI12Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_HI12Shot)};
            };
            dispersion = 0.00037815439999;
        };
        class Burst: Single {
            displayName = "Burst";
            textureType = "burst";
            burst = 3;
            reloadTime = 0.09;
            soundSetShot[] = {QCLASS(SoundSet_HI12Shot)};
            soundSetShotWater[] = {QCLASS(SoundSet_HI12Shot)};
        };

        class OpticsModes: OpticsModes {
            class Sights: hi12scope_sights {};
            class Scope: hi12scope_scope {
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {WHOT};
            };
        };
    };

    class CLASS(HI12): CLASS(HI12_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] HI-12";
        baseWeapon = QCLASS(HI12);

        JLTS_friedItem = QCLASS(HI12_Fried);
    };

    class CLASS(HI12_Fried): CLASS(HI12) {
        SCOPE_HIDDEN;

        displayName = "[KC] HI-12 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(hi12\data\ui\HI12_Fried_ca.paa);
        baseWeapon = QCLASS(HI12_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};