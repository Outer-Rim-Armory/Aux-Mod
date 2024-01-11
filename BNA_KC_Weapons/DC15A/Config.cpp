#include "CfgPatches.hpp"


class CfgWeapons
{
    class UGL_F;
    class arifle_MX_Base_F;
    class JLTS_DC15A: arifle_MX_Base_F
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class JLTS_DC15A_plastic: JLTS_DC15A
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
            class PointerSlot;
        };

        class Single: Single
        {
            class StandardSound;
        };
        class FullAuto: FullAuto
        {
            class StandardSound;
        };
        class Stun;
    };
    class BNA_KC_DC15A_Base: JLTS_DC15A_plastic
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15A (Base)";
        baseWeapon = "BNA_KC_DC15A_Base";

        modes[] = {"Single", "FullAuto"};
        muzzles[] = {"this", "Stun", "EGLM"};
        magazines[] = {"Aux12thFleet_Mag_DC15A"};
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] =
                {
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Sights
                    "Aux501_cows_Holoscope",
                    "Aux501_cows_Holoscope_2",
                    "Aux501_cows_Holoscope_3"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[]  =
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "jlts_dc17sa_flashlight"
                };
            };
        };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_DC15A_Single"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC15A_Single"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_DC15A_FullAuto"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC15A_FullAuto"};
            };
        };
        class Stun: Stun
        {
            displayName = "Stun";
            magazines[] = {};
            magazineWell[] = {"BNA_KC_Stuns"};
        };

        class EGLM: UGL_F
        {
            displayName = "Grenade Launcher";
            descriptionShort = "UGL";

            cameraDir = "OP_look";
            discreteDistance[] = {100, 200, 300, 400};
            discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
            discreteDistanceInitIndex = 0;

            useExternalOptic = 0;
            useModelOptics = 0;

            canShootInWater = 0;
            magazines[] = {};
            magazineWell[] = {"BNA_KC_UGL_Common"};
        };
    };

    class BNA_KC_DC15A: BNA_KC_DC15A_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15A";
        baseWeapon = "BNA_KC_DC15A";
        muzzles[] = {"this", "Stun"};

        JLTS_friedItem = "BNA_KC_DC15A_Fried";
    };
    class BNA_KC_DC15A_Fried: BNA_KC_DC15A
    {
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15A (Fried)";
        baseWeapon = "BNA_KC_DC15A_Fried";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};

        class Stun: Stun
        {
            displayName = "Stun (Fried)";
            magazines[] = {};
        };
    };

    class BNA_KC_DC15A_UGL: BNA_KC_DC15A_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15A UGL";
        baseWeapon = "BNA_KC_DC15A_UGL";
        muzzles[] = {"this", "EGLM"};

        // Model & Textures
        model = "\MRC\JLTS\weapons\DC15A\DC15A_ugl.p3d";
        hiddenSelections[] = {"camo1", "camo2", "illum"};
        hiddenSelectionsMaterials[] = {"", "", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        hiddenSelectionsTextures[] =
        {
            "\MRC\JLTS\weapons\DC15A\data\DC15A_plastic_co.paa",
            "\MRC\JLTS\weapons\DC15A\data\DC15A_ugl_co.paa"
        };
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ugl_plastic_ui_ca.paa";

        irDistance = 0;
        irLaserEnd = "";
        irLaserPos = "";

        JLTS_friedItem = "BNA_KC_DC15A_UGL_Fried";
        JLTS_repairTime = 35;
    };

    class BNA_KC_DC15A_UGL_Fried: BNA_KC_DC15A_UGL
    {
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15A UGL (Fried)";
        baseWeapon = "BNA_KC_DC15A_UGL_Fried";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};

        class EGLM: EGLM
        {
            displayName = "Grenade Launcher (Fried)";
            magazines[] = {};
        };
    };
};


class CfgMagazines
{
    class JLTS_DC15A_mag;
    class Aux12thFleet_Mag_DC15A: JLTS_DC15A_mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] DC-15A Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-15A";
        ammo = "Aux12thFleet_Ammo_Rifle_Blue";

        JLTS_hasEMPProtection = 1;
    };
};

class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_DC15A_Single: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"BNA_KC_Weapons\DC15A\Data\Audio\DC15A_Fire1.wss", 1, 1},
            {"BNA_KC_Weapons\DC15A\Data\Audio\DC15A_Fire2.wss", 1, 1},
            {"BNA_KC_Weapons\DC15A\Data\Audio\DC15A_Fire3.wss", 1, 1},
            {"BNA_KC_Weapons\DC15A\Data\Audio\DC15A_Fire4.wss", 1, 1}
        };
    };
    class BNA_KC_SoundShader_DC15A_FullAuto: BNA_KC_SoundShader_DC15A_Single
    {
        samples[] =
        {
            {"BNA_KC_Weapons\DC15A\Data\Audio\DC15A_Fire1.wss", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_DC15A_Single: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC15A_Single"};
    };
    class BNA_KC_SoundSet_DC15A_FullAuto: BNA_KC_SoundSet_DC15A_Single
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC15A_FullAuto"};
    };
};