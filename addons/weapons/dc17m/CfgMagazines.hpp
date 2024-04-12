class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_60Rnd_DC17M): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Energy Cell (60 Rnd)";
        displayNameShort = "Medium Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-17M";

        model = "\SWLW_clones_spec\DC17M_magazine_blaster.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(dc17m\data\DC17M_camo1_co.paa)};
        picture = "\SWLW_clones_spec\data\ui\DC17M_mag_blaster_ui_ca.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "\SWLW_clones_spec\DC17M_magazine_blaster.p3d";

        ammo = QCLASS(Bullet_PlasmaDC17M_Blaster);
        count = 60; // 6 rounds per 1 mass
        mass = 10;
        initSpeed = 310;
        maxLeadSpeed = 25;

        GVAR(isBlasterMag) = TRUE;
    };
    class CLASS(Mag_90Rnd_DC17M): CLASS(Mag_60Rnd_DC17M) {
        displayName = "[KC] DC-17M Energy Cell (90 Rnd)";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 90<br/>Used In: DC-17M";
        count = 90;
        mass = 15;
    };

    class CLASS(Mag_5Rnd_DC17M_Sniper): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Sniper Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 5<br/>Used In: DC-17M";

        model = "\SWLW_clones_spec\DC17M_magazine_sniper.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(dc17m\data\DC17M_camo1_co.paa)};
        picture = "\SWLW_clones_spec\data\ui\DC17M_mag_sniper_ui_ca.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "\SWLW_clones_spec\DC17M_magazine_sniper.p3d";

        ammo = QCLASS(Bullet_PlasmaDC17M_Sniper);
        count = 5; // 1 rounds per 2 mass
        mass = 10;
        initSpeed = 1250;

        GVAR(isSniperMag) = TRUE;
    };

    class CLASS(Mag_1Rnd_DC17M_AT): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DC-17M Anti-Armor Cell";
        displayNameShort = "Anti-Armor";
        descriptionShort = "Anti-Armor Energy Cell<br/>Rounds: 1<br/>Used In: DC-17M";

        model = "\SWLW_clones_spec\DC17M_magazine_at.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(dc17m\data\DC17M_camo1_co.paa)};
        picture = "\SWLW_clones_spec\data\ui\DC17M_mag_at_ui_ca.paa";

        modelSpecialIsProxy = TRUE;
        modelSpecial = "\SWLW_clones_spec\DC17M_magazine_at.p3d";

        ammo = QCLASS(Bullet_Plasma40mm_AT);
        count = 1; // 1 rounds per 20 mass
        mass = 20;
        initSpeed = 510;

        GVAR(isATMag) = TRUE;
    };

    class Aux12thFleet_Mag_60Rnd_DC17M: CLASS(Mag_60Rnd_DC17M) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: DC-17M<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
    class Aux12thFleet_Mag_90Rnd_DC17M: CLASS(Mag_90Rnd_DC17M) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 90<br/>Used In: DC-17M<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
    class Aux12thFleet_Mag_5Rnd_DC17M_Sniper: CLASS(Mag_5Rnd_DC17M_Sniper) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 5<br/>Used In: DC-17M<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
    class Aux12thFleet_Mag_1Rnd_DC17M_AT: CLASS(Mag_1Rnd_DC17M_AT) {
        SCOPE_HIDDEN;
        descriptionShort = "Anti-Armor Energy Cell<br/>Rounds: 1<br/>Used In: DC-17M<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};