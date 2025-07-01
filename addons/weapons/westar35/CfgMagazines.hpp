class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_35Rnd_Westar35C): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 35<br/>Used In: Westar-35C";

        model = "\SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
        picture = "\SWLW_merc_mando\smgs\westar35c\data\ui\SWLW_westar35c_mag_ui.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Yellow);
        count = 35;

        mass = 8;
        initspeed = 920;
    };

    class CLASS(Mag_35Rnd_Westar35S): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35S Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 35<br/>Used In: Westar-35S";

        model = "\SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
        picture = "\SWLW_merc_mando\smgs\westar35c\data\ui\SWLW_westar35c_mag_ui.paa";

        ammo = QCLASS(Bullet_PlasmaRifle_Yellow);
        count = 35;

        initspeed = 800;
        mass = 8;
    };

    class CLASS(Mag_10Rnd_Westar35S_scatter): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35S Scatter Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 10<br/>Used In: Westar-35S";

        model = "\SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
        picture = "\SWLW_merc_mando\smgs\westar35c\data\ui\SWLW_westar35c_mag_ui.paa";

        ammo = QCLASS(Bullet_PlasmaScatter_Yellow);
        count = 10;

        initspeed = 800;
        mass = 8;
    };
};
