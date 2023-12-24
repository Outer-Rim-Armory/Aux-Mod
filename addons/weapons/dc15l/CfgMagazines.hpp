class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_240rnd_DC15L): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15L Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 240<br/>Used In: DC-15L";

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";

        ammo = QCLASS(Bullet_PlasmaAutoRifle_Blue);
        count = 240;
    };

    class Aux12thFleet_Mag_DC15L: CLASS(Mag_240rnd_DC15L)
    {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 240<br/>Used In: DC-15L<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};