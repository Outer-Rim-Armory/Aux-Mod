class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_800rnd_Z7): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-7 Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Drum Magazine<br/>Rounds: 800<br/>Used In: Z-7";

        model = "\SWLW_clones\machineguns\Z7\Z7_mag.p3d";
        picture = "\SWLW_clones\machineguns\Z7\data\ui\SWLW_Z7_mag_ui.paa";

        allowedSlots[] = {TYPE_BACKPACK};

        initSpeed = 900;
        type = AMMO_USAGE_ARMORED_VEHICLES;

        ammo = QCLASS(Bullet_Plasma_Z7);
        count = 800;
        mass = 27;
    };
    class CLASS(Mag_800rnd_Z7_Red): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-7 Energy Cell (Red)";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Drum Magazine<br/>Rounds: 800<br/>Used In: Z-7";

        model = "\SWLW_clones\machineguns\Z7\Z7_mag.p3d";
        picture = "\SWLW_clones\machineguns\Z7\data\ui\SWLW_Z7_mag_ui.paa";

        allowedSlots[] = {TYPE_BACKPACK};

        initSpeed = 900;
        type = AMMO_USAGE_ARMORED_VEHICLES;

        ammo = QCLASS(Bullet_Plasma_Z7_Red);
        count = 800;
        mass = 27;
    };
};