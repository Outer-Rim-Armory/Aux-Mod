class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_60Rnd_DC17M): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Energy Cell (60 Rnd Blue)";
        displayNameShort = "Medium Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-17M";

        model = "LF_Weapon_Unit\DC17M\DC17M_magazine.p3d";
        picture = "\LF_Weapon_Unit\dc17m\ui\dc17_mag_ui.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "LF_Weapon_Unit\DC17M\DC17M_magazine.p3d";

        ammo = QCLASS(Bullet_PlasmaDC17M_Blaster);
        count = 60; // 6 rounds per 1 mass
        mass = 10;
        initSpeed = 1000;
        maxLeadSpeed = 25;

        GVAR(isBlasterMag) = TRUE;
    };

    class CLASS(Mag_5Rnd_DC17M_Sniper): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Sniper Energy Cell (5Rnd Blue)";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 5<br/>Used In: DC-17M";

        model = "LF_Weapon_Unit\DC17M\DC17M_magazine.p3d";
        picture = "\ls\core\addons\weapons_dcSeries\data\ui\dc17m_mag_sniper_ui_ca.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "LF_Weapon_Unit\DC17M\DC17M_magazine.p3d";

        ammo = QCLASS(Bullet_PlasmaDC17M_Sniper);
        count = 5; // 1 rounds per 2 mass
        mass = 10;
        initSpeed = 2000;

        GVAR(isSniperMag) = TRUE;
    };
    class CLASS(Mag_60Rnd_DC17M_Red): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Energy Cell (60 Rnd Red)";
        displayNameShort = "Medium Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-17M";

        model = "LF_Weapon_Unit\DC17M\DC17M_magazine.p3d";
        picture = "\LF_Weapon_Unit\dc17m\ui\dc17_mag_ui.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "LF_Weapon_Unit\DC17M\DC17M_magazine.p3d";

        ammo = QCLASS(Bullet_PlasmaDC17M_Blaster_Red);
        count = 60; // 6 rounds per 1 mass
        mass = 10;
        initSpeed = 1000;
        maxLeadSpeed = 25;

        GVAR(isBlasterMag) = TRUE;
    };

    class CLASS(Mag_5Rnd_DC17M_Sniper_Red): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Sniper Energy Cell (5Rnd Red)";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 5<br/>Used In: DC-17M";

        model = "LF_Weapon_Unit\DC17M\DC17M_magazine.p3d";
        picture = "\LF_Weapon_Unit\dc17m\ui\dc17_mag_ui.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "LF_Weapon_Unit\DC17M\DC17M_magazine.p3d";

        ammo = QCLASS(Bullet_PlasmaDC17M_Sniper_Red);
        count = 5; // 1 rounds per 2 mass
        mass = 10;
        initSpeed = 2000;

        GVAR(isSniperMag) = TRUE;
    };

    class CLASS(Mag_1Rnd_DC17M_AT): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Anti-Armor Cell (1Rnd)";
        displayNameShort = "Anti-Armor";
        descriptionShort = "Anti-Armor Energy Cell<br/>Rounds: 1<br/>Used In: DC-17M";

        model = "LF_Weapon_Unit\DC17M\DC17M_gl_mag.p3d";
        picture = "\LF_Weapon_Unit\dc17m\ui\dc17_aa_mag_ui.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "LF_Weapon_Unit\DC17M\DC17M_gl_mag.p3d";

        ammo = QCLASS(Bullet_Plasma40mm_AT);
        count = 1; // 1 rounds per 20 mass
        mass = 20;
        initSpeed = 510;

        GVAR(isATMag) = TRUE;
    };
    class CLASS(Mag_3Rnd_DC17M_AT): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Anti-Armor Cell (3Rnd)";
        displayNameShort = "Anti-Armor";
        descriptionShort = "Anti-Armor Energy Cell<br/>Rounds: 1<br/>Used In: DC-17M";

        model = "LF_Weapon_Unit\DC17M\DC17M_gl_mag.p3d";
        picture = "\LF_Weapon_Unit\dc17m\ui\dc17_aa_mag_ui.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "LF_Weapon_Unit\DC17M\DC17M_gl_mag.p3d";

        ammo = QCLASS(Bullet_Plasma40mm_AT);
        count = 3; // 1 rounds per 20 mass
        mass = 60;
        initSpeed = 510;

        GVAR(isATMag) = TRUE;
    };
};
