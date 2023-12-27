class CfgWeapons
{
    class CLASS(Muzzle_Stun);
    class CLASS(Muzzle_Stun_Fried);
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
    };
    class CLASS(DC15A_Base): JLTS_DC15A_plastic
    {
        SCOPE_PRIVATE;
        author = "Keeli Company Aux Team";

        displayName = "[KC] DC-15A (Base)";
        baseWeapon = QCLASS(DC15A_Base);

        modes[] = {"Single", "FullAuto"};
        muzzles[] = {"this", "Stun", "EGLM"};
        magazines[] = {QCLASS(Mag_60rnd_DC15A), "Aux12thFleet_Mag_DC15A"};
        magazineWell[] = {};

        canShootInWater = TRUE;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                class CompatibleItems
                {
                    // Medium
                    Aux501_cows_MRCO = TRUE;
                    Aux501_cows_MRCO_2 = TRUE;
                    Aux501_cows_MRCO_3 = TRUE;
                    // Sights
                    Aux501_cows_Holoscope = TRUE;
                    Aux501_cows_Holoscope_2 = TRUE;
                    Aux501_cows_Holoscope_3 = TRUE;
                };
            };
            class PointerSlot: PointerSlot
            {
                class CompatibleItems
                {
                    ATTACHMENTS_POINTER_BASE;
                };
            };
        };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15AShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15AShot)};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {QCLASS(SoundSet_DC15AShot)};
                soundSetShotWater[] = {QCLASS(SoundSet_DC15AShot)};
            };
        };
        class Stun: CLASS(Muzzle_Stun) {};

        class EGLM: UGL_F
        {
            displayName = "Grenade Launcher";
            descriptionShort = "UGL";

            cameraDir = "OP_look";
            discreteDistance[] = {100, 200, 300, 400};
            discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
            discreteDistanceInitIndex = 0;

            useExternalOptic = FALSE;
            useModelOptics = FALSE;

            canShootInWater = FALSE;
            magazines[] = {};
            magazineWell[] = {QCLASS(MagWell_UGL_Common)};
        };
    };

    class CLASS(DC15A): CLASS(DC15A_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15A";
        baseWeapon = QCLASS(DC15A);
        muzzles[] = {"this", "Stun"};

        JLTS_friedItem = QCLASS(DC15A_Fried);
    };
    class CLASS(DC15A_Fried): CLASS(DC15A)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15A (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = QCLASS(DC15A_Fried);
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";

        JLTS_isFried = TRUE;
        magazines[] = {};

        class Stun: CLASS(Muzzle_Stun_Fried) {};
    };

    class CLASS(DC15A_UGL): CLASS(DC15A_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] DC-15A UGL";
        baseWeapon = QCLASS(DC15A_UGL);
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

        class Stun: CLASS(Muzzle_Stun) {};
    };

    class CLASS(DC15A_UGL_Fried): CLASS(DC15A_UGL)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] DC-15A UGL (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";
        baseWeapon = QCLASS(DC15A_UGL_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};

        class EGLM: EGLM
        {
            displayName = "Grenade Launcher (Fried)";
            magazines[] = {};
        };

        class Stun: CLASS(Muzzle_Stun_Fried) {};
    };
};