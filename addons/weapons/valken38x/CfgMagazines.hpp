class CfgMagazines {
    class CLASS(Mag_15Rnd_DC15X);
    class CLASS(Mag_25Rnd_Valken38x): CLASS(Mag_15Rnd_DC15X) {
        SCOPE_PUBLIC;
        displayName = "[KC] Valken-38x Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 25<br/>Used In: Valken-38x";

        model = "\LF_Weapon_Unit\valken\valken_mag.p3d";
        modelSpecial = "\LF_Weapon_Unit\valken\valken_mag.p3d";
        modelSpecialIsProxy = TRUE;

        count = 25;
        initSpeed = 910;
    };

    class CLASS(Mag_10Rnd_Valken38x_AP): CLASS(Mag_25Rnd_Valken38x) {
        displayName = "[KC] Valken-38x AP Energy Cell";
        displayNameShort = "Armor Piercing";
        descriptionShort = "Armor Piercing Energy Cell Pack<br/>Rounds: 10<br/>Used In: Valken-38x";

        picture = "\LF_Weapon_Unit\DC17SA\ui\dc17ammo_co.paa";

        ammo = QCLASS(Bullet_PlasmaSniperAP_Yellow);
        count = 10;
        initSpeed = 1300;
        mass = 15;
    };

    class CLASS(Mag_Valken38X): CLASS(Mag_25Rnd_Valken38x) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 25<br/>Used In: Valken-38x<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };

    class CLASS(Mag_Valken38X_AP): CLASS(Mag_10Rnd_Valken38x_AP) {
        SCOPE_HIDDEN;
        descriptionShort = "Armor Piercing Energy Cell Pack<br/>Rounds: 10<br/>Used In: Valken-38x<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};