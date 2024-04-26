class CfgMagazines {
    class CLASS(Mag_60Rnd_DC15A);
    class CLASS(Mag_60Rnd_LW38): CLASS(Mag_60Rnd_DC15A) {
        displayName = "[KC] LW-38 Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: LW-38";

        model = "\LF_Weapon_Unit\lw38m\mag.p3d";
        picture = "\LF_Weapon_Unit\lw38m\ui\mag.paa";
    };

    class CLASS(Mag_60Rnd_LW38_Green): CLASS(Mag_60Rnd_LW38) {
        SCOPE_HIDDEN;
        displayName = "[KC] LW-38 Energy Cell (Green)";
        ammo = QCLASS(Bullet_PlasmaRifle_Green);
    };
};