class CfgWeapons {
    class Rifle_Base_F;
    class 3AS_DC15L_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class 3AS_DC15L_F: 3AS_DC15L_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot;
            class PointerSlot;
        };
        class FullAuto;
    };
    class CLASS(DC15L_Base): 3AS_DC15L_F {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] DC-15L (Base)";
        descriptionShort = "Automatic Blaster Rifle";
        picture = QPATHTOF(dc15l\data\ui\DC15L_ca.paa);
        baseWeapon = QCLASS(DC15L_Base);

        modes[] = {"FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_240Rnd_DC15L), "Aux12thFleet_Mag_DC15L"};
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
                    3AS_optic_DC15L_F = TRUE;
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
            reloadTime = 0.07;
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
                soundSetShot[] = {QCLASS(SoundSet_DC15LShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15LShot)};
            };
        };
    };

    class CLASS(DC15L): CLASS(DC15L_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15L";
        baseWeapon = QCLASS(DC15L);
        JLTS_friedItem = QCLASS(DC15L_Fried);
    };
    class CLASS(DC15L_Fried): CLASS(DC15L) {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15L (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(dc15l\data\ui\DC15L_Fried_ca.paa);
        baseWeapon = QCLASS(DC15L_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};