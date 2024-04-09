class CfgWeapons
{
    class M2_Flamethrower_01_F;
    class CLASS(X42_Base): M2_Flamethrower_01_F
    {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] X-42 Flamethrower (Base)";
        descriptionShort = "BlastTech Flamethrower";
        picture = "\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
        baseWeapon = QCLASS(X42_Base);

        model = "\3AS\3AS_Weapons\X42\BX42.p3d";
        handAnim[] =
        {
            "OFP2_ManSkeleton",
            "\3AS\3AS_Weapons\Data\Anim\BX42.rtm"
        };


        WBK_BurnEm_RequiredBackpack = "";
        WBK_BurnEm_FlamethrowerParticlePos = "[[-0.32, 0.3, -0.3], 'leftHand']";

        magazines[] = {QCLASS(Mag_150Rnd_X42)};
        magazineWell[] = {};

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;
    };

    class CLASS(X42): CLASS(X42_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] X-42 Heavy Flamethrower";
        baseWeapon = QCLASS(X42);

        WBK_BurnEm_FlamethrowerDistance = 40;
        JLTS_friedItem = QCLASS(X42_Fried);
    };

    class CLASS(X42_Fried): CLASS(X42)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] X-42 Heavy Flamethrower (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = QCLASS(X42_Fried);
        picture = QPATHTOF(x42\data\ui\X42_Fried_ca.paa);

        magazines[] = {};

        JLTS_isFried = TRUE;
    };

    class CLASS(BTX42): CLASS(X42)
    {
        SCOPE_HIDDEN;
        descriptionShort = "BlastTech Flamethrower<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
    class CLASS(BTX45_Heavy): CLASS(X42)
    {
        SCOPE_HIDDEN;
        descriptionShort = "BlastTech Flamethrower<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};