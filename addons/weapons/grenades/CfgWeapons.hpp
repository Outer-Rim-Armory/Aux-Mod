class CfgWeapons
{
    class GrenadeLauncher;
    class Throw: GrenadeLauncher
    {
        muzzles[] += {QCLASS(Muzzle_GrenadeEMP), QCLASS(Muzzle_GrenadeBacta)};

        class ThrowMuzzle;
        class CLASS(Muzzle_GrenadeEMP): ThrowMuzzle
        {
            displayName = "[KC] Droid Popper";
            magazines[] = {QCLASS(Grenade_EMP)};
        };
        class CLASS(Muzzle_GrenadeBacta): ThrowMuzzle
        {
            displayName = "[KC] Bacta Grenade";
            magazines[] = {QCLASS(Grenade_Bacta)};
        };
    };
};