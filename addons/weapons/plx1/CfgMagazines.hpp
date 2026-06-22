class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_3Rnd_PLX1_AT): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] MK43 AT Missile Pack";
        displayNameShort = "AT";
        descriptionShort = "MK43 AT Missiles<br/>Rounds: 3<br/>Used In: PLX-1";

        model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
        picture = "\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";

        modelSpecial = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
        modelSpecialIsProxy = TRUE;

        ammo = QCLASS(MK43_AT);
        count = 3;
        initSpeed = 18;

        allowedSlots[] = {TYPE_BACKPACK};
        mass = MASS_MAGAZINE;
        maxLeadSpeed = 27.7778;
    };

    class CLASS(Mag_3Rnd_PLX1_AA): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] MK39 AA Missile Pack";
        displayNameShort = "MK39";
        descriptionShort = "MK39 AA Missiles<br/>Rounds: 3<br/>Used In: PLX-1";

        model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
        picture = "\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";

        modelSpecial = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
        modelSpecialIsProxy = TRUE;

        ammo = QCLASS(MK39_AA);
        count = 3;
        initSpeed = 18;

        allowedSlots[] = {TYPE_BACKPACK};
        mass = MASS_MAGAZINE;
        maxLeadSpeed = 277.778;
    };

    class CLASS(Mag_3Rnd_PLX1_HE): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] MK39 HE Missile Pack";
        displayNameShort = "MK44";
        descriptionShort = "MK44 HE Missiles<br/>Rounds: 3<br/>Used In: PLX-1";

        model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
        picture = "\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";

        modelSpecial = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
        modelSpecialIsProxy = TRUE;

        ammo = QCLASS(MK44_HE);
        count = 3;
        initSpeed = 18;

        allowedSlots[] = {TYPE_BACKPACK};
        mass = MASS_MAGAZINE;
        maxLeadSpeed = 27.7778;
    };
};
