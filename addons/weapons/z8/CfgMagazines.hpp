class CfgMagazines {
    class CLASS(mag_base);
    class CLASS(mag_1200rnd_Z8): CLASS(mag_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-8 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 1,200<br/>Used In: Z-8";

        // model = "";
        // picture = "";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 1200;
    };
};