class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_60rnd_B2Blaster): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] B2 Blaster Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: B2 Blaster";

        model = "\SWLW_droids\smgs\e5\e5_mag.p3d";
        picture = "\SWLW_droids\smgs\e5\data\ui\e5_mag_ui.paa";

        initSpeed = 310;
        mass = 15;

        ammo = QCLASS(Bullet_PlasmaRifle_Red);
        count = 60;
    };
};