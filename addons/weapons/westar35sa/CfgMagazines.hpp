class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_7Rnd_Westar35SA): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35SA Energy Cell (7 Rnd)";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 7<br/>Used In: Westar-35SA";

        model = "\SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
        picture = "\SWLW_clones_spec\data\ui\DC15SA_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaPistol_Yellow);
        count = 7;
        mass = 8;
        initspeed = 350;
        maxLeadSpeed = 27.7778;
    };

    class CLASS(Mag_15Rnd_Westar35SA): CLASS(Mag_7Rnd_Westar35SA) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35SA Energy Cell (15 Rnd)";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: Westar-35SA";

        count = 15;
        mass = 13;
    };

    class CLASS(Mag_30Rnd_Westar35SA): CLASS(Mag_7Rnd_Westar35SA) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35SA Energy Cell (30 Rnd)";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 30<br/>Used In: Westar-35SA";

        count = 30;
        mass = 26;
    };
};