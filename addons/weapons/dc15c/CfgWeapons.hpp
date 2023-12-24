class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons
{
    class Rifle_Base_F;
    class 3AS_DC15C_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class 3AS_DC15C_F: 3AS_DC15C_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };

        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
        };
    };
    class CLASS(DC15C_Base): 3AS_DC15C_F
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        displayName = "[KC] DC-15C (Base)";
        baseWeapon = QCLASS(DC15C_Base);
        descriptionShort = "Blaster Rifle";
        picture = QPATHTOF(dc15c\data\ui\DC15C_ca.paa);

        modes[] = {"FullAuto", "Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_40rnd_DC15C), "Aux12thFleet_Mag_DC15C"};
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

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                class CompatibleItems
                {
                    // Short
                    Aux501_cows_RCO = TRUE;
                    Aux501_cows_RCO_2 = TRUE;
                    Aux501_cows_RCO_3 = TRUE;
                    // Medium
                    Aux501_cows_MRCO = TRUE;
                    Aux501_cows_MRCO_2 = TRUE;
                    Aux501_cows_MRCO_3 = TRUE;
                    // Sights
                    Aux501_cows_Holosight = TRUE;
                    Aux501_cows_Holosight_2 = TRUE;
                    Aux501_cows_Holosight_3 = TRUE;
                    Aux501_cows_reflex_optic = TRUE;
                };
            };
            class PointerSlot: PointerSlot
            {
                class CompatibleItems
                {
                    acc_pointer_ir = TRUE;
                    ace_acc_pointer_green = TRUE;
                    jlts_dc17sa_flashlight = TRUE;
                };
            };
        };

        class Single: Single
        {
            dispersion = 0.00087;

            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15SShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15SShot)};
            };
        };
        class FullAuto: FullAuto
        {
            dispersion = 0.00087;

            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15SShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15SShot)};
            };
        };
    };

    class CLASS(DC15C): CLASS(DC15C_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15C";
        baseWeapon = QCLASS(DC15C);
        JLTS_friedItem = QCLASS(DC15C_Fried);
    };
    class CLASS(DC15C_Fried): CLASS(DC15C)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15C (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = QCLASS(DC15C_Fried);
        picture = QPATHTOF(dc15c\data\DC15C_Fried_ca.paa);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};