class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_150Rnd_E5C): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] E-5C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 150<br/>Used In: E-5C";

        model = "\MRC\JLTS\weapons\e5c\e5c_mag.p3d";
        picture = "\MRC\JLTS\weapons\e5c\data\ui\e5c_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Red);
        count = 150;
        initSpeed = 920;
        mass = 4;
    };
};