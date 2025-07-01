class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_240Rnd_Valken38l): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Valken-38l Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 240<br/>Used In: Valken-38l";

        picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";

        ammo = QCLASS(Bullet_PlasmaAutoRifle_Blue);
        count = 240;
        mass = 23;
        initSpeed = 417;
    };
};
