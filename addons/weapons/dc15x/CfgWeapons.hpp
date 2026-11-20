class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class JLTS_DC15X: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };

        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class 3AS_DC15X_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class 3AS_DC15X_F: 3AS_DC15X_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
            class UnderBarrelSlot;
        };

        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class CLASS(DC15X_Base): JLTS_DC15X {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-15X (Base)";
        baseWeapon = QCLASS(DC15X_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_25Rnd_DC15X),QCLASS(Mag_25Rnd_DC15X_Red), "Aux12thFleet_Mag_DC15X"};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    CLASS(Optic_DC15X) = TRUE;
                    CLASS(Optic_LRPS) = TRUE;
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

            dispersion = 0.00015;
            reloadTime = 0.5;

            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15XShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15XShot)};
            };
        };
    };

    class CLASS(DC15XH_Base): 3AS_DC15X_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-15XH (Base)";
        baseWeapon = QCLASS(DC15XH_Base);
        model = "\3AS\3AS_Weapons\Republic\DC15X\3AS_DC15X_F.p3d";
        picture = "\3AS\3AS_Weapons\Republic\DC15X\Data\UI\3as_dc15x.paa";
        handAnim[] = {"OFP2_ManSkeleton","3as\3AS_Weapons\Republic\DC15X\Data\Anim\New_DC15X_handanim.rtm"};

        modes[] = {"Single"};
        muzzles[] = {"this"};
        initSpeed = 1000;
        magazines[] = {QCLASS(Mag_25Rnd_DC15XH),QCLASS(Mag_25Rnd_DC15XH_Red), "Aux12thFleet_Mag_DC15X"};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    3AS_optic_DC15X_F = TRUE;
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot {
                class CompatibleItems {
                    3AS_bipod_DC15X_F = TRUE;
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

            dispersion = 0.00015;
            reloadTime = 0.5;

            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15XHShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15XHShot)};
            };
        };
    };

    class CLASS(DC15X): CLASS(DC15X_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15X";
        baseWeapon = QCLASS(DC15X);

        JLTS_friedItem = QCLASS(DC15X_Fried);

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = QCLASS(Optic_DC15X);
            };
        };
    };
    class CLASS(DC15X_Fried): CLASS(DC15X) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15X (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC15X_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class CLASS(DC15XH): CLASS(DC15XH_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15XH";
        baseWeapon = QCLASS(DC15XH);

        JLTS_friedItem = QCLASS(DC15XH_Fried);

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = QCLASS(Optic_DC15X);
            };
        };
    };
    class CLASS(DC15XH_Fried): CLASS(DC15XH) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15XH (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC15XH_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
