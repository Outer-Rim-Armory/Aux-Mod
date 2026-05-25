class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_FusionCutter): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Welding Wire";
        descriptionShort = "Welding Wire<br/>Rounds: 500<br/>Used In: Fusion Cutter";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\3AS\3AS_Weapons\Data\UI\3as_fc_ww.paa";
        mass = 2;
        ammo = "3AS_FusionCutter_Ammo";
        count = 500;
    };
};
