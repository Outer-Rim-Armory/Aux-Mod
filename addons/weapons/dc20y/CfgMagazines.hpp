class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_10Rnd_DC20Y): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-20Y Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 10<br/>Used In: DC-20Y";

        model = "\OPTRE_Weapons\Sniper\SRS99C_Mag.p3d";
        picture = "\OPTRE_weapons\ar\icons\magazine.paa";

        ammo = QCLASS(Bullet_PlasmaDC20Y);
        count = 10;
        mass = 15;
    };

    class CLASS(Mag_3Rnd_DC20Y_AP): CLASS(Mag_10Rnd_DC20Y) {
        displayName = "[KC] DC-20Y AP Energy Cell";
        displayNameShort = "High Energy AP";
        descriptionShort = "Armor Piercing Energy Cell Pack<br/>Rounds: 3<br/>Used In: DC-20Y";

        ammo = QCLASS(Bullet_PlasmaDC20Y_AP);
        count = 3;
        mass = 30;
    };

    class CLASS(Mag_5Rnd_DC20Y_HE): CLASS(Mag_10Rnd_DC20Y) {
        displayName = "[KC] DC-20Y HE Energy Cell";
        displayNameShort = "High Explosive";
        descriptionShort = "High Explosive Energy Cell Pack<br/>Rounds: 5<br/>Used In: DC-20Y";

        model = "\OPTRE_Weapons\Sniper\SRS99C_Mag.p3d";
        picture = "\OPTRE_Weapons\Sniper\icons\srsC_mag.paa";

        ammo = QCLASS(Bullet_PlasmaDC20Y_HE);
        count = 5;
        mass = 25;
    };
};