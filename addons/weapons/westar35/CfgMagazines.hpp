class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_35Rnd_Westar35C): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35C Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 35<br/>Used In: Westar-35C";

        model = "\SWLW_clones\smgs\DC15s\DC15s_mag.p3d";
        picture = "\SWLW_merc_mando\smgs\westar35c\data\ui\SWLW_westar35c_mag_ui.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Yellow);
        count = 35;
    };
};