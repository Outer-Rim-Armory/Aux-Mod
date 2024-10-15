class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_10Rnd_DX50C): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DX-50c Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Explosive Energy Cell";

        model = "\MRC\JLTS\weapons\DP23\EPL2_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\EPL2_mag_ui_ca.paa";

        ammo = QCLASS(Grenade_B2Blaster);
        count = 10;
        mass = 20;
    };

    class CLASS(Mag_15Rnd_DX50C): CLASS(Mag_10Rnd_DX50C) {
        SCOPE_PUBLIC;
        displayName = "[KC] DX-50c Canister";
        displayNameShort = "15rn High Energy Cell";
        descriptionShort = "Explosive Energy Cell";

        model = "\MRC\JLTS\weapons\DP23\EPL2_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\EPL2_mag_ui_ca.paa";

        ammo = QCLASS(Grenade_B2Blaster);
        count = 10;
        mass = 20;
    };
};
