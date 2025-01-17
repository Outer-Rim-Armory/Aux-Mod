class CfgWeapons {
    class Rifle_Base_F;
    class 3AS_DC15L_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class 3AS_Valken38X_F: 3AS_DC15L_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
        };
        class FullAuto;
    };
    class CLASS(Valken38l_Base): 3AS_Valken38X_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Valken-38l (Base)";
        descriptionShort = "Automatic Blaster Rifle";
        picture = "\3AS\3AS_Weapons\Valken38X\Data\UI\3as_valken.paa";
        baseWeapon = QCLASS(Valken38l_Base);

        modes[] = {"FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_240Rnd_Valken38l)};
        magazineWell[] = {};

        drySound[] = {"\MRC\JLTS\weapons\Core\sounds\weapon_dry.wss", 5, 1, 10};

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;
        flashSize = 0.5;

        recoil = "recoil_SMG_03";

        maxZeroing = 1000;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    ATTACHMENTS_OPTIC_LONG;
                    // Sights
                    3as_optic_dc15l = TRUE;
                };
            };
            class PointerSlot: PointerSlot {
                class CompatibleItems {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
        };

        class FullAuto: FullAuto {
            dispersion = 0.00075;
            reloadTime = 0.06;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";

            maxRange = 80;
            maxRangeProbab = 0.04;
            midRange = 30;
            midRangeProbab = 0.58;
            minRange = 1;
            minRangeProbab = 0.2;

            sounds[] = {"StandardSound"};
            class StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_Valken38lShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Valken38lShot)};
            };
        };
    };

    class CLASS(Valken38l): CLASS(Valken38l_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Valken-38l";
        baseWeapon = QCLASS(Valken38l);
        JLTS_friedItem = QCLASS(Valken38l_Fried);
    };
    class CLASS(Valken38l_Fried): CLASS(Valken38l) {
        SCOPE_HIDDEN;

        displayName = "[KC] Valken-38l (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(dc15l\data\ui\DC15L_Fried_ca.paa);
        baseWeapon = QCLASS(Valken38l_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};