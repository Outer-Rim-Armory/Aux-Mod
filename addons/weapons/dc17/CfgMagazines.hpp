class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_20rnd_DC17): CLASS(Mag_Base)
    {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17 Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 20<br/>Used In: DC-17";

        model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
        picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaPistol_Blue);
        count = 20;
    };
};