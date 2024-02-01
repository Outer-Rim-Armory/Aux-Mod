class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;

class CfgWeapons
{
    class LFP_rifle_base;
    class LFP_Valken38x: LFP_rifle_base
    {
        class WeaponSlotsInfo;
        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
        class OpticsModes
        {
            class DC15Xscope_sights;
            class DC15Xscope_scope;
        };
    };
    class CLASS(Valken38x_Base): LFP_Valken38x
    {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Valken-38x (Base)";
        baseWeapon = QCLASS(Valken38x_Base);
        picture = QPATHTOF(valken38x\data\ui\Valken38x_ca.paa);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_25Rnd_Valken38x), QCLASS(Mag_10Rnd_Valken38x_AP), QCLASS(Mag_Valken38x), QCLASS(Mag_Valken38x_AP)};
        magazineWell[] = {};

        canShootInWater = TRUE;
        fireLightDiffuse[] = {0, 0, 1};
        fireLightDuration = 0.05;
        fireLightIntensity = 0.2;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class PointerSlot: PointerSlot
            {
                class CompatibleItems
                {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                class CompatibleItems
                {
                    3as_bipod_dc15l_f = TRUE;
                };
            };
        };

        class Single: Single
        {
            dispersion = 0;
            reloadTime = 2;

            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_Valken38xShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_Valken38xShot)};
            };
        };

        class OpticsModes: OpticsModes
        {
            class Sights: DC15Xscope_sights {};
            class Scope: DC15Xscope_scope
            {
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {WHOT};
            };
        };
    };

    class CLASS(Valken38x): CLASS(Valken38x_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] Valken-38x";
        baseWeapon = QCLASS(Valken38x);
        JLTS_friedItem = QCLASS(Valken38x_Fried);
    };
    class CLASS(Valken38x_Fried): CLASS(Valken38x)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] Valken-38x (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(valken38x\data\ui\Valken38x_Fried_ca.paa);
        baseWeapon = QCLASS(Valken38x_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};