class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_10Rnd_DC20Y): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-20Y Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 10<br/>Used In: DC-20Y";

        // model = "";
        // picture = "";

        ammo = QCLASS(Bullet_PlasmaRifle_Blue);
        count = 10;
    };

    class CLASS(Mag_3Rnd_DC20Y_AP): CLASS(Mag_10Rnd_DC20Y) {
        displayName = "[KC] DC-20Y AP Energy Cell";
        displayNameShort = "High Energy AP";
        descriptionShort = "Armor Piercing Energy Cell Pack<br/>Rounds: 3<br/>Used In: DC-20Y";
    };

    class CLASS(Mag_5Rnd_DC20Y_HE): CLASS(Mag_10Rnd_DC20Y) {
        displayName = "[KC] DC-20Y HE Energy Cell";
        displayNameShort = "High Explosive";
        descriptionShort = "High Explosive Energy Cell Pack<br/>Rounds: 5<br/>Used In: DC-20Y";
    };
};