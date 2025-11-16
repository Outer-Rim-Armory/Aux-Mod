class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class Rifle_Long_Base_F;
    class ls_rifle_base: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
    };
    class ls_weapon_westar35c_base: ls_rifle_base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
        };

        class Single: Mode_SemiAuto {
        };
        class FullAuto: Mode_FullAuto {
        };
    };
    class CLASS(Westar35C_base): ls_weapon_westar35c_base {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Westar-35C (Base)";
        descriptionShort = "Blaster carbine";
        baseWeapon = QCLASS(Westar35C_base);

        magazines[] = {QCLASS(Mag_35Rnd_Westar35C)};
        magazineWell[] = {};

        canShootInWater = TRUE;
    };

    class CLASS(Westar35C): CLASS(Westar35C_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35C";
        baseWeapon = QCLASS(Westar35C);

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE; // make fried weapons eventually
    };

    class UGL_F;
    class ls_weapon_westar35s_base: Rifle_Long_Base_F {
        class Scatter: UGL_F {
            class Single;
        };
    };
    class ls_weapon_westar35s_primary: ls_weapon_westar35s_base {};
    class CLASS(Westar35S_base): ls_weapon_westar35s_primary {
        SCOPE_PRIVATE;
        author = AUTHOR;

        displayName = "[KC] Westar-35S (Base)";
        descriptionShort = "Blaster rifle";
        baseWeapon = QCLASS(Westar35S_base);

        magazines[] = {QCLASS(Mag_35Rnd_Westar35S)};
        magazineWell[] = {};

        canShootInWater = TRUE;

        class Scatter: Scatter {
            magazines[] = {QCLASS(Mag_10Rnd_Westar35S_scatter)};
            recoil = "JLTS_scatter_recoil";
            recoilProne = "JLTS_scatter_recoil";

            class Single: Single {
                recoil = "M240Recoil";
                recoilProne = "M240Recoil";
            };
        };
    };

    class CLASS(Westar35S): CLASS(Westar35S_base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Westar-35S";
        baseWeapon = QCLASS(Westar35S);

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = TRUE; // make fried weapons eventually
    };
};
