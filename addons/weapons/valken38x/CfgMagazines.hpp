class CfgMagazines {
    class CLASS(Mag_25Rnd_DC15X);
    class CLASS(Mag_15Rnd_Valken38x): CLASS(Mag_25Rnd_DC15X) {
        SCOPE_PUBLIC;
        displayName = "[KC] Valken-38x Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: Valken-38x";

        model = "\LF_Weapon_Unit\valken\valken_mag.p3d";
        modelSpecial = "\LF_Weapon_Unit\valken\valken_mag.p3d";
        modelSpecialIsProxy = TRUE;
        ammo = QCLASS(Bullet_PlasmaSniper_Blue3);

        count = 15;
        initSpeed = 1000;
        mass = 15;
    };

    class CLASS(Mag_5Rnd_Valken38x_AP): CLASS(Mag_15Rnd_Valken38x) {
        displayName = "[KC] Valken-38x AP Energy Cell";
        displayNameShort = "Armor Piercing";
        descriptionShort = "Armor Piercing Energy Cell Pack<br/>Rounds: 5<br/>Used In: Valken-38x";

        picture = "\LF_Weapon_Unit\DC17SA\ui\dc17ammo_co.paa";

        ammo = QCLASS(Bullet_PlasmaSniperAP_Yellow);
        count = 5;
        initSpeed = 1300;
        mass = 15;
    };
};
