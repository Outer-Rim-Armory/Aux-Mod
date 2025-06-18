class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_1200rnd_Z8): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-8 Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Drum Magazine<br/>Rounds: 1,200<br/>Used In: Z-8";

        model = "\SWLW_clones\machineguns\Z7\Z7_mag.p3d";
        picture = "\SWLW_clones\machineguns\Z7\data\ui\SWLW_Z7_mag_ui.paa";

        allowedSlots[] = {TYPE_BACKPACK};

        initSpeed = 900;
        type = AMMO_USAGE_ARMORED_VEHICLES;

        ammo = QCLASS(Bullet_Plasma_Z8);
        count = 1200;
        mass = 27;
    };
    class CLASS(Mag_1200rnd_Z8_Red): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-8 Energy Cell (Red)";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Drum Magazine<br/>Rounds: 1,200<br/>Used In: Z-8";

        model = "\SWLW_clones\machineguns\Z7\Z7_mag.p3d";
        picture = "\SWLW_clones\machineguns\Z7\data\ui\SWLW_Z7_mag_ui.paa";

        allowedSlots[] = {TYPE_BACKPACK};

        initSpeed = 900;
        type = AMMO_USAGE_ARMORED_VEHICLES;

        ammo = QCLASS(Bullet_Plasma_Z8_Red);
        count = 1200;
        mass = 27;
    };
};