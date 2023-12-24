class CfgWeapons
{
    class M2_Flamethrower_01_F;
    class CLASS(X42_Base): M2_Flamethrower_01_F
    {
        SCOPE_PRIVATE;
        author = "Dexus and DartRuffian";

        displayName = "[KC] X-42 Flamethrower (Base)";
        descriptionShort = "BlastTech Flamethrower";
        baseWeapon = QCLASS(X42_Base);
        picture = "\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";

        model = "\3AS\3AS_Weapons\X42\BX42.p3d";
        handAnim[] =
        {
            "OFP2_ManSkeleton",
            "\3AS\3AS_Weapons\Data\Anim\BX42.rtm"
        };


        WBK_BurnEm_RequiredBackpack = "";
        WBK_BurnEm_FlamethrowerParticlePos = "[[-0.32, 0.3, -0.3], 'leftHand']";

        magazines[] = {};
        magazineWell[] = {};
    };

    class CLASS(X42): CLASS(X42_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[KC] X-42 Heavy Flamethrower";
        baseWeapon = QCLASS(X42);
        magazines[] = {QCLASS(Mag_150rnd_X42)};

        WBK_BurnEm_FlamethrowerDistance = 40;
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