class CfgMagazines {
    class CLASS(mag_base);
    class CLASS(mag_1200rnd_Z8): CLASS(mag_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-8 Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Drum Magazine<br/>Rounds: 1,200<br/>Used In: Z-8";

        model = "\SWLW_clones\machineguns\Z7\Z7_mag.p3d";
        picture = "\SWLW_clones\machineguns\Z7\data\ui\SWLW_Z7_mag_ui.paa";

        allowedSlots[] = {TYPE_BACKPACK};

        initSpeed = 200;
        type = AMMO_USAGE_ARMORED_VEHICLES;

        ammo = QCLASS(bullet_plasma_Z8_yellow);
        count = 1200;
        mass = __EVAL(0.3*1200);
    };

    MAGAZINE_AI(mag_1200rnd_Z8);
};