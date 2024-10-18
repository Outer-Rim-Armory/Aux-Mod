class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_15Rnd_DX50C): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DX-50C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: DC-50C";

        model = "\MRC\JLTS\weapons\DP23\EPL2_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\EPL2_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue2);
        count = 15;
        mass = 20;
    };
};
