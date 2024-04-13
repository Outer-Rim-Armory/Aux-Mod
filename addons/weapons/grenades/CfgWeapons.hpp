class CfgWeapons {
    class GrenadeLauncher;
    class Throw: GrenadeLauncher {
        muzzles[] += {QCLASS(Muzzle_GrenadeEMP), QCLASS(Muzzle_GrenadeBacta)};

        class ThrowMuzzle;
        class CLASS(Muzzle_GrenadeEMP): ThrowMuzzle {
            magazines[] = {QCLASS(Grenade_EMP)};
        };

        class CLASS(Muzzle_GrenadeBacta): ThrowMuzzle {
            magazines[] = {QCLASS(Grenade_Bacta)};
        };
    };
};