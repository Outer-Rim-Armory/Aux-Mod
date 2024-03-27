class CfgWeapons
{
    class Launcher_Base_F;
    class launch_RPG32_F: Launcher_Base_F
    {
        class Single;
    };
    class CLASS(E60R_AT_Base): launch_RPG32_F
    {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] E-60R (AT, Base)";
        baseWeapon = QCLASS(E60R_AT_Base);
        descriptionShort = "Portable Rocket Launcher";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] =
        {
            QCLASS(Mag_1Rnd_E60R_HE),
            QCLASS(Mag_1Rnd_E60R_AT)
        };
        magazineWell[] = {};

        model = "\MRC\JLTS\weapons\E60R\E60R.p3d";
        hiddenSelections[] = {"camo1", "illum"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\E60R\data\E60R_co.paa"};
        hiddenSelectionsMaterials[] = {"", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"};
        picture = "\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";

        canShootInWater = FALSE;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        ace_overpressure_angle = 30;
        ace_overpressure_damage = 0.5;
        ace_overpressure_offset = 0.85;
        ace_overpressure_priority = 1;
        ace_overpressure_range = 2;

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_E60RShot)};
            };
        };
    };

    class CLASS(E60R_AT): CLASS(E60R_AT_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] E-60R (AT)";
        baseWeapon = QCLASS(E60R_AT);
        JLTS_friedItem = QCLASS(E60R_AT_Fried);
    };
    class CLASS(E60R_AT_Fried): CLASS(E60R_AT)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] E-60R (AT, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(e60r\data\ui\E60R_Fried_ca.paa);
        baseWeapon = QCLASS(E60R_AT_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };

    class launch_Titan_short_base;
    class JLTS_E60R_AT: launch_Titan_short_base
    {
        class Single;
        class TopDown;
    };
    class CLASS(E60R_AA_Base): JLTS_E60R_AT
    {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] E-60R (AA, Base)";
        baseWeapon = QCLASS(E60R_AA_Base);
        descriptionShort = "Portable Missile Launcher";

        modes[] = {"Single", "TopDown"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_1Rnd_E60R_AA)};
        magazineWell[] = {};

        canShootInWater = FALSE;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        ace_overpressure_angle = 30;
        ace_overpressure_damage = 0.5;
        ace_overpressure_offset = 0.85;
        ace_overpressure_priority = 1;
        ace_overpressure_range = 2;

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_E60RShot)};
            };
        };
        class TopDown: TopDown
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_E60RShot)};
            };
        };
    };

    class CLASS(E60R_AA): CLASS(E60R_AA_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] E-60R (AA)";
        baseWeapon = QCLASS(E60R_AA);

        JLTS_friedItem = QCLASS(E60R_AA_Fried);
    };
    class CLASS(E60R_AA_Fried): CLASS(E60R_AA)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] E-60R (AA, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(e60r\data\ui\E60R_Fried_ca.paa);
        baseWeapon = QCLASS(E60R_AA_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};