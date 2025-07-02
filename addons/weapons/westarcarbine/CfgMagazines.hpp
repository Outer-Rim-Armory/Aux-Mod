class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_35Rnd_WestarCarbine): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-Carbine Energy Cell (35 Rnd)";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 35<br/>Used In: Westar-Carbine";

        model = "\ls\core\addons\weapons_dcseries\dc15a\ls_magazine_dc15a.p3d";
        picture = "\ls\core\addons\weapons_westar\data\ui\westar35c_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaCarbine_Yellow);
        count = 35;

        mass = 8;
        initspeed = 920;
    };
};
