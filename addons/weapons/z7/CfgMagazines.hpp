class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_800rnd_Z7): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-7 Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Drum Magazine<br/>Rounds: 800<br/>Used In: Z-7";

        model = "\ls\core\addons\weapons_zseries\z7\ls_magazine_z7.p3d";
        picture = "\ls\core\addons\weapons_zseries\data\ui\z7_mag_ui_ca.paa";

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

        model = "\ls\core\addons\weapons_zseries\z7\ls_magazine_z7.p3d";
        picture = "\ls\core\addons\weapons_zseries\data\ui\z7_mag_ui_ca.paa";

        allowedSlots[] = {TYPE_BACKPACK};

        initSpeed = 900;
        type = AMMO_USAGE_ARMORED_VEHICLES;

        ammo = QCLASS(Bullet_Plasma_Z7_Red);
        count = 800;
        mass = 27;
    };
};
