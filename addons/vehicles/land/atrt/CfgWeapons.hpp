class CfgWeapons {
    class 3AS_ATRT_Base;
    class 3AS_ATRT_Uniform: 3AS_ATRT_Base {
        class ItemInfo;
    };
    class CLASS(Uniform_ATRT): 3AS_ATRT_Uniform {
        displayName = "AT-RT Plating";
        JLTS_hasStunProtection = TRUE;
        picture = QPATHTOF(land\atrt\data\ui\ATRT_ca.paa);

        EGVAR(medical,canBleed) = FALSE;

        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(ATRT);
        };
    };

    class ls_uniform_atrt {
        class ItemInfo;
    };

    class CLASS(Uniform_ATRT_LS): ls_uniform_atrt {
        displayName = "[KC] AT-RT Plating (LS)";
        JLTS_hasStunProtection = TRUE;
        picture = QPATHTOF(land\atrt\data\ui\ATRT_ca.paa);
        EGVAR(medical,canBleed) = FALSE;
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(ATRT_LS);
            uniformModel = "\ls\core\addons\vehicles_atrt\ls_vehicle_atrt.p3d";
        };
    };
    class ls_weapon_atrt_laserCannon;
    class FullAuto;
    class close;
    class short;
    class CLASS(Turret_ATRT): ls_weapon_atrt_laserCannon {
        displayName = "[KC] AT-RT Laser Cannon";
        magazines[] = {QCLASS(Mag_9999Rnd_ATRT)};
        class FullAuto: FullAuto {
            reloadTime = 0.3;
        };
        class close: close {
            reloadTime = 0.3;
        };
        class short: short {
            reloadTime = 0.3;
        };
        };
    };
