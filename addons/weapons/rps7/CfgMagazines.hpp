class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_1Rnd_RPS7): CLASS(Mag_Base) {
        displayName = "[KC] RPS-7 AT Rocket";
        displayNameShort = "Anti-Tank";
        descriptionShort = "Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: RPS-7";

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";

        ammo = QCLASS(Rocket_RPS7);
    };
};