class CfgMagazines
{
    class CA_Magazine;
    class CLASS(Mag_Base): CA_Magazine
    {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "";
        displayNameShort = "";
        descriptionShort = "";

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        modelSpecial = "";
        modelSpecialIsProxy = FALSE;

        tracersEvery = 1;
        count = 1;
        mass = 0;
        initSpeed = 774;

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE;
    };

    class CLASS(Mag_StunShort): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] Stun Energy Cell (Short)";
        displayNameShort = "Stun (Short)";
        descriptionShort = "Stun Energy Cell<br/>Rounds: 10<br/>Duration: 5 Seconds<br/>Used in: DC-15S, DC-15A, DC-17, DC-17M";

        model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
        picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";

        type = TYPE_MAGAZINE_HANDGUN_AND_GL;
        weaponPoolAvailable = TRUE;
        JLTS_stunDuration = 5;

        ammo = QCLASS(Bullet_PlasmaStun);
        count = 10;
        mass = 6;
    };

    class CLASS(Mag_StunLong): CLASS(Mag_StunShort)
    {
        displayName = "[KC] Stun Energy Cell (Long)";
        displayNameShort = "Stun (Long)";
        descriptionShort = "Stun Energy Cell<br/>Rounds: 5<br/>Duration: 10 Seconds<br/>Used in: DC-15S, DC-15A, DC-17, DC-17M";

        JLTS_stunDuration = 15;
        count = 5;
    };

    class CLASS(Mag_UGL_FlareBase): CLASS(Mag_Base)
    {
        displayName = "[KC] Flare Round (Base)";
        displayNameShort = "Base Flare";
        descriptionShort = "Type: Flare Round - Base <br />Rounds: 1<br />Used in: UGLs, Flare Guns";

        type = TYPE_MAGAZINE_HANDGUN_AND_GL;

        initSpeed = 80;
        mass = 4;
        count = 1;

        model = "\A3\Weapons_F\Ammo\UGL_Flare.p3d";
        picture = "\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";

        nameSound = "";
    };

    class CLASS(Mag_UGL_FlareBlue): CLASS(Mag_UGL_FlareBase)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] Flare Round (Blue)";
        displayNameShort = "Blue Flare";
        descriptionShort = "Type: Flare - Blue <br />Rounds: 1 <br />Used in: UGLs, Flare Guns";
        picture = QPATHTOF(data\ui\Mag_FlareBlue_ca.paa);

        weaponPoolAvailable = TRUE;

        ammo = QCLASS(Flare_Blue);
    };
    class CLASS(Mag_UGL_3Rnd_FlareBlue): CLASS(Mag_UGL_FlareBlue)
    {
        displayName = "[KC] 3Rnd Flare Round (Blue)";
        displayNameShort = "3Rnd Blue Flare";
        descriptionShort = "Type: Flare - Blue <br />Rounds: 3 <br />Used in: UGLs, Flare Guns";
        mass = 12;
        count = 3;
    };


    class CLASS(Mag_Grenade_Base): CLASS(Mag_Base)
    {
        mass = 10;
        initSpeed = 18;
        maxLeadSpeed = 6.94444;

        nameSound = "handgrenade";
        count = 1;
    };


    // ! LEGACY CLASSES
    class Aux12thFleet_Mag_StunShort: CLASS(Mag_StunShort)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Stun Energy Cell<br/>Rounds: 10<br/>Duration: 5 Seconds<br/>Used in: DC-15S, DC-15A, DC-17, DC-17M<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };

    class Aux12thFleet_Mag_StunLong: CLASS(Mag_StunLong)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Stun Energy Cell<br/>Rounds: 5<br/>Duration: 15 Seconds<br/>Used in: DC-15S, DC-15A, DC-17, DC-17M<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };

    class CLASS(UGL_FlareBlue): CLASS(Mag_UGL_FlareBlue)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Type: Flare - Blue <br />Rounds: 1 <br />Used in: EGLM, 3GL<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };

    class CLASS(3Rnd_UGL_FlareBlue): CLASS(Mag_UGL_3Rnd_FlareBlue)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Type: Flare Rounds - Blue <br />Rounds: 3 <br />Used in: EGLM, 3GL <br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};