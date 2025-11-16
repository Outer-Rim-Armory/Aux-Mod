class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_1Rnd_RPS6_HEAT_Disposable): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] RPS-6 HEAT Disposable Rocket";
        displayNameShort = "HEAT";
        descriptionShort = "High Explosive Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: RPS-6";

        model = "\ls\core\addons\weapons_rps\ls_magazine_rps6.p3d";
        picture = "\ls\core\addons\weapons_rps\data\ui\rps6_mag_ui_ca.paa";

        modelSpecial = "\ls\core\addons\weapons_rps\ls_magazine_rps6.p3d";
        modelSpecialIsProxy = TRUE;

        ammo = QCLASS(Rocket_RPS6);
        count = 1;
        initSpeed = 140;

        allowedSlots[] = {TYPE_BACKPACK};
        mass = MASS_MAGAZINE;
    };

    class Aux12thFleet_Mag_RPS6_HEAT: CLASS(Mag_1Rnd_RPS6_HEAT_Disposable) {
        SCOPE_HIDDEN;
        descriptionShort = "High Explosive Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: RPS-6<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};
