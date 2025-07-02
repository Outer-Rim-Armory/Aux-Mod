class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_40rnd_Arkanian): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Arkanian Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 40<br/>Used In: Arkanian";

        model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
        picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Yellow);
        count = 40;
    };
};
