class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_1rnd_E60R_HE): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] E-60R HE Rocket";
        displayNameShort = "HE";
        descriptionShort = "High Explosive Rocket<br/>Rounds: 1<br/>Used In: E-60R";

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";

        ammo = QCLASS(Rocket_E60R_HE);
        count = 1;

        allowedSlots[] = {TYPE_VEST, TYPE_BACKPACK};
        mass = 40;
    };

    class CLASS(Mag_1rnd_E60R_AT): CLASS(Mag_1rnd_E60R_HE)
    {
        displayName = "[KC] E-60R AT Rocket";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: E-60R";

        model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";

        ammo = QCLASS(Rocket_E60R_AT);
        mass = 60;
    };

    class CLASS(Mag_1rnd_E60R_AA): CLASS(Mag_1rnd_E60R_HE)
    {
        displayName = "[KC] E-60R AA Missile";
        displayNameShort = "AA";
        descriptionShort = "Anti-Air Missile<br/>Rounds: 1<br/>Used In: E-60R";

        model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
        picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";

        ammo = QCLASS(Rocket_E60R_AA);
        mass = 60;
    };
};