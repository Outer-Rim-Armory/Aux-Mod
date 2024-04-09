class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_150rnd_B2Blaster_flamer): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Wrist Flamethrower Fuel Tank";
        descriptionShort = "Flamethrower Fuel Tank<br/>Burn Time: 2.5 minutes<br/>Used In: Wrist Mounted Flamethrower";

        initSpeed = 50;
        mass = 130;

        model = "\MRC\JLTS\contraband\Credits\icecream.p3d";
        picture = "\MRC\JLTS\contraband\Credits\data\ui\icecream_ui_ca.paa";

        ammo = "Flamethrower_Fuel";
        count = 150;
    };
};