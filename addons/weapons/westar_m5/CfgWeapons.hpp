class CfgWeapons {
    class UGL_F;
    class Rifle_Base_F;
    class 3AS_WestarM5_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
        class Single;
        class Burst;
        class FullAuto;
    };
    class 3AS_WestarM5_F: 3AS_WestarM5_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
        };

        class Single: Single {
            class StandardSound;
        };
        class Burst: Burst {
            class StandardSound;
        };
        class FullAuto: FullAuto {
            class StandardSound;
        };
    };
    class CLASS(WestarM5_Base): 3AS_WestarM5_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Westar-M5 (Base)";
        descriptionShort = "Blaster Rifle";
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_ui.paa";
        baseWeapon = QCLASS(WestarM5_Base);

        modes[] = {"Single", "Burst", "FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_100Rnd_WestarM5)};
        magazineWell[] = {};

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        recoil = "recoil_smg_03";

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    CLASS(Optic_WestarM5) = TRUE;
                    ATTACHMENTS_OPTIC_SHORT;
                    ATTACHMENTS_OPTIC_MEDIUM;
                    ATTACHMENTS_OPTIC_LONG;
                    ATTACHMENTS_OPTIC_SIGHTS;
                    3AS_Imp_Optic_1 = TRUE;
                    3AS_Imp_Optic_2 = TRUE;
                    3AS_Imp_Optic_3 = TRUE;
                    3AS_Imp_Optic_4 = TRUE;
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;

                };
            };
        };

        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = QCLASS(Optic_WestarM5);
            };
        };

        class Single: Single {
            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;
            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_WestarM5Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_WestarM5Shot)};
            };
        };
        class Burst: Burst {
            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;
            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_WestarM5Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_WestarM5Shot)};
            };
        };
        class FullAuto: FullAuto {
            maxRange = 450;
            maxRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.5;
            sounds[] = {"StandardSound"};
            aiRateOfFire = 2;
            class StandardSound: StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_WestarM5Shot)};
                soundSetShotWater[] = {QCLASS(SoundSet_WestarM5Shot)};
            };
        };
    };

    class CLASS(WestarM5): CLASS(WestarM5_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Westar-M5";
        baseWeapon = QCLASS(WestarM5);

        JLTS_friedItem = QCLASS(WestarM5_Fried);
    };

    class CLASS(WestarM5_Fried): CLASS(WestarM5) {
        SCOPE_HIDDEN;

        displayName = "[KC] Westar-M5 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(westar_m5\data\ui\WestarM5_Fried_ca.paa);
        baseWeapon = QCLASS(WestarM5_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class CLASS(WestarM5_UGL): CLASS(WestarM5_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Westar-M5 UGL";
        baseWeapon = QCLASS(WestarM5_UGL);

        muzzles[] = {"this", "UGL"};

        model = "\3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";

        class UGL: UGL_F {
            displayName = "Grenade Launcher";
            descriptionShort = "UGL";

            cameraDir = "OP_look";
            discreteDistance[] = {50, 75, 100, 150, 200, 250, 300, 350, 400};
            discreteDistanceCameraPoint[] = {
                "OP_eye_50",
                "OP_eye_75",
                "OP_eye_100",
                "OP_eye_150",
                "OP_eye_200",
                "OP_eye_250",
                "OP_eye_300",
                "OP_eye_350",
                "OP_eye_400"
            };
            discreteDistanceInitIndex = 0;

            useExternalOptic = FALSE;
            useModelOptics = FALSE;

            canShootInWater = FALSE;
            magazines[] = {};
            magazineWell[] = {QCLASS(MagWell_UGL_Common)};

            reloadAction = "GestureReloadMXUGL";
            reloadMagazineSound[] = {"\A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10};
        };
    };

    class CLASS(WestarM5_UGL_Fried): CLASS(WestarM5_UGL) {
        SCOPE_HIDDEN;

        displayName = "[KC] Westar-M5 UGL (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(westar_m5\data\ui\WestarM5_Fried_ca.paa);
        baseWeapon = QCLASS(WestarM5_UGL_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};

        class UGL: UGL {
            displayName = "Grenade Launcher (Fried)";
            magazineWell[] = {};
        };
    };

    class CLASS(Westar_M5): CLASS(WestarM5) {
        SCOPE_HIDDEN;
        descriptionShort = "Blaster Rifle<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
        baseWeapon = QCLASS(Westar_M5);
    };
    class CLASS(Westar_M5_UGL): CLASS(WestarM5_UGL) {
        SCOPE_HIDDEN;
        descriptionShort = "Blaster Rifle<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
        baseWeapon = QCLASS(Westar_M5_UGL);
    };
};
