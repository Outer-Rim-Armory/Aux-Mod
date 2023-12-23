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
    class CLASS(DC15A_Base): JLTS_DC15A_plastic
    {
        SCOPE_PRIVATE;

        displayName = "[KC] DC-15A (Base)";

        modes[] = {"Single", "FullAuto"};
        muzzles[] = {"this", "Stun", "EGLM"};
        magazines[] = {"Aux12thFleet_Mag_DC15A"};
        magazineWell[] = {};

        canShootInWater = TRUE;

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

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
                soundSetShot[] = {QCLASS(SoundSet_DC15A_Single)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15A_Single)};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15A_Single)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15A_Single)};
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
            magazineWell[] = {QCLASS(UGL_Common)};
        };
    };

    class CLASS(DC15A): CLASS(DC15A_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15A";
        muzzles[] = {"this", "Stun"};

        JLTS_friedItem = QCLASS(DC15A_Fried);
    };
    class CLASS(DC15A_Fried): CLASS(DC15A)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15A (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: Stun
        {
            displayName = "Stun (Fried)";
            magazines[] = {};
        };
    };

    class CLASS(DC15A_UGL): CLASS(DC15A_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15A UGL";
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

        JLTS_friedItem = QCLASS(DC15A_UGL_Fried);
        JLTS_repairTime = 35;
    };

    class CLASS(DC15A_UGL_Fried): CLASS(DC15A_UGL)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15A UGL (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};

        class EGLM: EGLM
        {
            displayName = "Grenade Launcher (Fried)";
            magazines[] = {};
        };
    };
};