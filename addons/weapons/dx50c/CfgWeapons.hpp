class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class JLTS_EPL2: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
        };
        class Single: Mode_SemiAuto {
            class StandardSound;
        };
    };
    class CLASS(DX50C_Base): JLTS_EPL2 {
        SCOPE_PRIVATE;
        displayName = "[KC] DX-50c Base";
        picture = "\MRC\JLTS\weapons\EPL2\data\ui\EPL2_ui_ca.paa";
        model = "\MRC\JLTS\weapons\EPL2\EPL2.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\EPL2\anims\EPL2_handanim.rtm"};
        magazines[] = {QCLASS(Mag_10Rnd_DX50C)};
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            reloadTime = 0.24;
            sounds[] = {"StandardSound"};
            class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: CowsSlot {
                class CompatibleItems {
                    ATTACHMENTS_OPTIC_SHORT;
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
                soundSetShot[] = {QCLASS(SoundSet_DX50CShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DX50CShot)};
            };
        };
    };
        class aicqb: Single
        {
            showToPlayer = 0;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
        };
        class aiclose: aicqb
        {
            dispersion = 0.00105;
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            dispersion = 0.000525;
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 450;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2.5;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar: aicqb
        {
            dispersion = 0.00085;
            minRange = 350;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFire = 3.5;
            aiRateOfFireDistance = 450;
            requiredOpticType = 0;
        };
    };
    class CLASS(DX50C): CLASS(DX50C_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] DX-50c";
        baseWeapon = QCLASS(DX50C);

        JLTS_friedItem = QCLASS(DX50C_Fried);
    };
    class CLASS(DX50C_Fried): CLASS(DX50C) {
        SCOPE_HIDDEN;

        displayName = "[KC] DX-50c (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";
        baseWeapon = QCLASS(DX50C_Fried);
        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};