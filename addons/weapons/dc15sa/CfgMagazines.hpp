class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_7Rnd_DC15SA): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15SA Energy Cell (7 Rnd)";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 7<br/>Used In: DC-15SA";

        model = "\SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
        picture = "\SWLW_clones_spec\data\ui\DC15SA_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaPistol_Blue);
        count = 7;
        mass = 8;
        initspeed = 350;
        maxLeadSpeed = 27.7778;
    };

    class CLASS(Mag_15Rnd_DC15SA): CLASS(Mag_7Rnd_DC15SA) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15SA Energy Cell (15 Rnd)";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: DC-15SA";

        count = 15;
        mass = 13;
    };

    class CLASS(Mag_30Rnd_DC15SA): CLASS(Mag_7Rnd_DC15SA) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-15SA Energy Cell (30 Rnd)";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 30<br/>Used In: DC-15SA";

        count = 30;
        mass = 26;
    };
};