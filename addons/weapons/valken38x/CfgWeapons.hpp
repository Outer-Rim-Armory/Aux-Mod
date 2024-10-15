class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;

class CfgWeapons {
    class LFP_rifle_base;
    class LFP_Valken38x: LFP_rifle_base {
        class WeaponSlotsInfo;
        class Single: Mode_SemiAuto {
            class StandardSound;
        };
        class OpticsModes {
            class DC15Xscope_sights;
            class DC15Xscope_scope;
        };
    };
    class CLASS(Valken38x_Base): LFP_Valken38x {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Valken-38x (Base)";
        baseWeapon = QCLASS(Valken38x_Base);
        picture = QPATHTOF(valken38x\data\ui\Valken38x_ca.paa);

        modes[] = {"Single","aicqb","aiclose","aimedium","aifar","aiopticmode1","aiopticmode2"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_25Rnd_Valken38x), QCLASS(Mag_10Rnd_Valken38x_AP), QCLASS(Mag_Valken38x), QCLASS(Mag_Valken38x_AP)};
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
                    3as_bipod_dc15l_f = TRUE;
                };
            };
        };

        class Single: Single {
            class StandardSound: StandardSound {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundShader_Valken38xShot)};
                soundSetShotWater[] = {QCLASS(SoundShader_Valken38xShot)};
            };
        };
        class aicqb: Single
        {
            showToPlayer = 0;
            dispersion = 0.00073;
            minRange = 25;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
        };
        class aiclose: aicqb
        {
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFireDistance = 150;
        };
        class aimedium: aicqb
        {
            minRange = 150;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 1;
            maxRange = 350;
            maxRangeProbab = 0.1;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar: aicqb
        {
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 350;
            requiredOpticType = 0;
        };
        class aiopticmode1: aicqb
        {
            minRange = 400;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 700;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 500;
            requiredOpticType = 1;
        };
        class aiopticmode2: aicqb
        {
            minRange = 500;
            minRangeProbab = 0.5;
            midRange = 700;
            midRangeProbab = 1;
            maxRange = 900;
            maxRangeProbab = 0.5;
            aiRateOfFireDistance = 700;
            requiredOpticType = 1;
        };


        class OpticsModes: OpticsModes {
            class Sights: DC15Xscope_sights {};
            class Scope: DC15Xscope_scope {
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {WHOT};
            };
        };
    };

    class CLASS(Valken38x): CLASS(Valken38x_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Valken-38x";
        baseWeapon = QCLASS(Valken38x);
        JLTS_friedItem = QCLASS(Valken38x_Fried);
    };
    class CLASS(Valken38x_Fried): CLASS(Valken38x) {
        SCOPE_HIDDEN;

        displayName = "[KC] Valken-38x (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(valken38x\data\ui\Valken38x_Fried_ca.paa);
        baseWeapon = QCLASS(Valken38x_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};