class CfgWeapons {
    class launch_RPG32_F;
    class LFP_RPS6: launch_RPG32_F {
        class WeaponSlotsInfo;
        class Single;
    };
    class CLASS(RPS8_Base): LFP_RPS6 {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] RPS-8 (Base)";
        baseWeapon = QCLASS(RPS8_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_1Rnd_RPS8_AT), QCLASS(Mag_1Rnd_RPS8_HE)};
        magazineWell[] = {};

        modelOptics = "\ls\core\addons\weapons_rps\ls_optic_rps6.p3d";

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

    class CLASS(RPS8): CLASS(RPS8_Base) {
        SCOPE_PUBLIC;

        displayName = "[KC] RPS-8";
        baseWeapon = QCLASS(RPS8);
        JLTS_friedItem = QCLASS(RPS8_Fried);
    };

    class CLASS(RPS8_Fried): CLASS(RPS8) {
        SCOPE_HIDDEN;

        displayName = "[KC] RPS-8 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";
        baseWeapon = QCLASS(RPS8_Fried);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};
