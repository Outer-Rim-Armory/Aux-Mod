class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_1rnd_E60R_HE): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] E-60R HE Rocket";
        displayNameShort = "HE";
        descriptionShort = "High Explosive Rocket<br/>Rounds: 1<br/>Used In: E-60R";

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";

        ammo = QCLASS(Rocket_E60R_HE);
        type = TYPE_MAGAZINE_MISSILE;
        count = 1;
        initSpeed = 140;
        maxLeadSpeed = 23;
        value = 5;

        allowedSlots[] = {TYPE_VEST, TYPE_BACKPACK};
        mass = 40;
        nameSound = "handgrenade";
    };

    // Hidden version for AI to use, used to fix AI not spawning with a rocket loaded
    class CLASS(Mag_1rnd_E60R_HE_AI): CLASS(Mag_1rnd_E60R_HE) {
        SCOPE_HIDDEN;
        allowedSlots[] = {TYPE_UNIFORM, TYPE_VEST, TYPE_BACKPACK};
        mass = 0;
    };

    class CLASS(Mag_1rnd_E60R_AT): CLASS(Mag_1rnd_E60R_HE) {
        displayName = "[KC] E-60R AT Rocket";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: E-60R";

        model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";

        ammo = QCLASS(Rocket_E60R_AT);
        mass = 60;
    };
    class CLASS(Mag_1rnd_E60R_AT_AI): CLASS(Mag_1rnd_E60R_AT) {
        SCOPE_HIDDEN;
        allowedSlots[] = {TYPE_UNIFORM, TYPE_VEST, TYPE_BACKPACK};
        mass = 0;
    };

    class CLASS(Mag_1rnd_E60R_AA): CLASS(Mag_1rnd_E60R_HE) {
        displayName = "[KC] E-60R AA Missile";
        displayNameShort = "AA";
        descriptionShort = "Anti-Air Missile<br/>Rounds: 1<br/>Used In: E-60R";

        model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
        picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";

        ammo = QCLASS(Missile_E60R_AA);
        mass = 60;
        initSpeed = 18;
        maxLeadSpeed = 277.778;
    };

    class CLASS(Mag_1rnd_E60R_AA_AI): CLASS(Mag_1rnd_E60R_AA) {
        SCOPE_HIDDEN;
        allowedSlots[] = {TYPE_UNIFORM, TYPE_VEST, TYPE_BACKPACK};
        mass = 0;
    };
};
