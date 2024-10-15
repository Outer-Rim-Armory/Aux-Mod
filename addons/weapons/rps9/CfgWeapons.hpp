class CfgWeapons {
    class launch_RPG32_F;
    class 3AS_RPS6_HP: launch_RPG32_F {
        class WeaponSlotsInfo;
        class Single;
    };
    class CLASS(RPS9_Base): 3AS_RPS6_HP {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] RPS-9 (Base)";
        baseWeapon = QCLASS(RPS9_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_1Rnd_RPS9_AT), QCLASS(Mag_1Rnd_RPS9_HE)};
        magazineWell[] = {};

        modelOptics = "\ls_weapons\tertiary\rps6\ls_scope_rps6.p3d";

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = MASS_LAUNCHER;
        };

        class Single: Single {
            class StandardSound {
                soundSetShot[] = {QCLASS(SoundSet_RocketShot)};
            };
        };
    };

    class CLASS(RPS9): CLASS(RPS9_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] RPS-9";
        baseWeapon = QCLASS(RPS9);
        JLTS_friedItem = QCLASS(RPS9_Fried);
    };

    class CLASS(RPS9_Fried): CLASS(RPS9) {
        SCOPE_HIDDEN;

        displayName = "[KC] RPS-9 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";
        baseWeapon = QCLASS(RPS9_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};