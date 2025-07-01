class CfgWeapons {
    class JLTS_DC17SA;
    class CLASS(DC17_Base): JLTS_DC17SA {
        class Launcher;
    };
    class CLASS(GR20): CLASS(DC17_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] GR-20";
        baseWeapon = QCLASS(GR20);

        muzzles[] = {"Launcher"};
        magazines[] = {};

        JLTS_canHaveShield = FALSE;
        canShootInWater = FALSE;

        class Launcher: Launcher {
            displayName = "Bacta Launcher";
            magazines[] = {QCLASS(Mag_1Rnd_GR20), QCLASS(Mag_GR20)};
            magazineWell[] = {};
        };
    };

    class CLASS(GR20_Fried): CLASS(GR20) {
        SCOPE_HIDDEN;

        displayName = "[KC] GR-20 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        baseWeapon = QCLASS(GR20_Fried);

        JLTS_isFried = TRUE;

        class Launcher: Launcher {
            displayName = "Bacta Launcher (Fried)";
            magazines[] = {};
        };
    };
};
