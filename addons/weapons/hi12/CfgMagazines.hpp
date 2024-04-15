class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_30Rnd_HI12): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] HI-12 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 30<br/>Used In: HI-12";

        model = "\LF_Weapon_Unit\hi12\hi12_mag.p3d";
        picture = "\LF_Weapon_Unit\DC17SA\ui\dc17ammo_co.paa";

        initSpeed = 900;
        mass = 10;

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 30;
    };
};