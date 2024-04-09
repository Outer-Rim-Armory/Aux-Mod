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
        author = AUTHOR;

        displayName = "[KC] RPS-6 (Base)";
        baseWeapon = QCLASS(RPS6_Base);

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {QCLASS(Mag_1Rnd_RPS6_HEAT_Disposable), "Aux12thFleet_Mag_RPS6_HEAT"};
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
        SCOPE_HIDDEN;
        displayName = "[KC] RPS-6";
        descriptionShort = "Single-use Rocket Tube";
        baseWeapon = QCLASS(RPS6_Disposable);

        magazineReloadTime = 0.1;

        JLTS_friedItem = QCLASS(RPS6_Disposable_Fried);
        JLTS_repairTime = 10;

        class EventHandlers: EventHandlers
        {
            fired = QUOTE(_this call CBA_fnc_firedDisposable);
        };
    };

    class CLASS(RPS6_Loaded): CLASS(RPS6_Disposable)
    {
        SCOPE_PUBLIC;

        baseWeapon = QCLASS(RPS6_Loaded);
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
        baseWeapon = QCLASS(RPS6_Used);

        magazines[] = {"CBA_FakeLauncherMagazine"};

        JLTS_hasEMPProtection = TRUE; // No point in making a fried version
    };

    class CLASS(RPS6_Disposable_Fried): CLASS(RPS6_Disposable)
    {
        SCOPE_HIDDEN;
        displayName = "[KC] RPS-6 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(rps6\data\ui\RPS6_Fried_ca.paa);
        baseWeapon = QCLASS(RPS6_Disposable_Fried);

        JLTS_isFried = TRUE;
        JLTS_baseWeapon = QCLASS(RPS6_Disposable);
    };
};