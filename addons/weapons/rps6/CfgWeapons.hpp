class CfgWeapons
{
    class ls_launcher_base;
    class ls_weapon_rps6: ls_launcher_base
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class CLASS(RPS6_Base): ls_weapon_rps6
    {
        SCOPE_PRIVATE;
        author = "SweMonkey and DartRuffian";

        displayName = "[KC] RPS-6 (Base)";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_1rnd_RPS6_HEAT_Disposable), "Aux12thFleet_Mag_RPS6_HEAT"};
        magazineWell[] = {};

        // JLTS emp system
        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        class EventHandlers;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = MASS_LAUNCHER;
        };

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {QCLASS(SoundSet_RocketShot)};
            };
        };
    };

    class CLASS(RPS6_Disposable): CLASS(RPS6_Base)
    {
        displayName = "[KC] RPS-6";
        descriptionShort = "Single-use Rocket Tube";
        magazineReloadTime = 0.1;

        JLTS_friedItem = QCLASS(RPS6_Fried);

        class EventHandlers: EventHandlers
        {
            fired = QUOTE(_this call CBA_fnc_firedDisposable);
        };
    };

    class CLASS(RPS6_Loaded): CLASS(RPS6_Disposable)
    {
        SCOPE_PUBLIC;

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = MASS_LAUNCHER + MASS_MAGAZINE;
        };
    };

    class CLASS(RPS6_Used): CLASS(RPS6_Disposable)
    {
        SCOPE_HIDDEN;

        displayName = "[KC] RPS-6 (Used)";
        descriptionShort = "Used Rocket Tube";
        magazines[] = {"CBA_FakeLauncherMagazine"};
    };
};