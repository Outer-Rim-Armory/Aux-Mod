class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class 3AS_DC15C_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class 3AS_DC15C_F: 3AS_DC15C_Base_F {
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
    class CLASS(DC15C_Base): 3AS_DC15C_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-15C (Base)";
        descriptionShort = "Blaster Rifle";
        picture = QPATHTOF(dc15c\data\ui\DC15C_ca.paa);
        baseWeapon = QCLASS(DC15C_Base);

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_40Rnd_DC15C), "Aux12thFleet_Mag_DC15C"};
        magazineWell[] = {};
        reloadAction = "3AS_GestureReloadDC15S";

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;

        maxZeroing = 1000;
        dispersion = 0.00029;

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
        };

        class Single: Single {
            dispersion = 0.00087;
            reloadTime = 0.096;

            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15SShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15SShot)};
            };
        };
        class FullAuto: FullAuto {
            dispersion = 0.00087;
            reloadTime = 0.096;

            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15SShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15SShot)};
            };
        };
    };

    class CLASS(DC15C): CLASS(DC15C_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15C";
        baseWeapon = QCLASS(DC15C);
        JLTS_friedItem = QCLASS(DC15C_Fried);
    };
    class CLASS(DC15C_Fried): CLASS(DC15C) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15C (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = QCLASS(DC15C_Fried);
        picture = QPATHTOF(dc15c\data\DC15C_Fried_ca.paa);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};