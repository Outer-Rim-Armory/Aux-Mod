class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_15Rnd_DX50C): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DX-50C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: DX-50C";

        model = "\MRC\JLTS\weapons\DP23\EPL2_mag.p3d";
        picture = "\ls\core\addons\weapons_dcSeries\data\ui\dc15sa_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue2);
        count = 15;
        mass = 20;
    };
};
