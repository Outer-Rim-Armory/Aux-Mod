class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_100rnd_E5): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] E-5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 100<br/>Used In: E-5";

        model = "\MRC\JLTS\weapons\E5\E5_mag.p3d";
        picture = "\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Red);
        count = 100;
    };

    class Aux12thFleet_Mag_E5: CLASS(Mag_100rnd_E5)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 100<br/>Used In: E-5<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};