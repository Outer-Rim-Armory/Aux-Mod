class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_1Rnd_RPS8_HE): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] RPS-8 HE Rocket";
        displayNameShort = "High Explosive";
        descriptionShort = "High Explosive Rocket<br/>Rounds: 1<br/>Used In: RPS-8";

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";

        ammo = QCLASS(Rocket_RPS8_HE);
        count = 1;
        initSpeed = 140;

        allowedSlots[] = {TYPE_BACKPACK};
        mass = MASS_MAGAZINE;
    };

    class CLASS(Mag_1Rnd_RPS8_AT): CLASS(Mag_1Rnd_RPS8_HE) {
        displayName = "[KC] RPS-8 AT Rocket";
        displayNameShort = "Anti-Tank";
        descriptionShort = "Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: RPS-8";

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";

        ammo = QCLASS(Rocket_RPS8_AT);
    };
};
