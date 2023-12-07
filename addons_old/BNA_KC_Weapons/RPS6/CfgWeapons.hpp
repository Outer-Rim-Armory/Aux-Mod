class CfgWeapons
{
    class ls_launcher_base;
    class ls_weapon_rps6: ls_launcher_base
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class BNA_KC_RPS6_Base: ls_weapon_rps6
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-6 (Base)";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {"Aux12thFleet_Mag_RPS6_HEAT"};
        magazineWell[] = {};

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class EventHandlers;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = RPS6_MASS_LAUNCHER;
        };

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_RPS6"};
            };
        };
    };

    class BNA_KC_RPS6_Disposable: BNA_KC_RPS6_Base
    {
        displayName = "[KC] RPS-6";
        descriptionShort = "Single-use Rocket Tube";
        JLTS_friedItem = "BNA_KC_RPS6_Fried";
        magazineReloadTime = 0.1;

        class EventHandlers: EventHandlers
        {
            fired = "_this call CBA_fnc_firedDisposable";
        };
    };

    class BNA_KC_RPS6_Loaded: BNA_KC_RPS6_Disposable
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = RPS6_MASS_LAUNCHER + RPS6_MASS_MAGAZINE;
        };
    };

    class BNA_KC_RPS6_Used: BNA_KC_RPS6_Disposable
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-6 (Used)";
        descriptionShort = "Used Rocket Tube";
        magazines[] = {"CBA_FakeLauncherMagazine"};
    };

    class BNA_KC_RPS6_Disposable_Fried: BNA_KC_RPS6_Disposable
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-6 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\BNA_KC_Weapons\RPS6\data\ui\RPS6_Fried_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };

    class launch_RPG32_F;
    class JLTS_RPS6: launch_RPG32_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class BNA_KC_RPS7_Base: JLTS_RPS6
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-7 (Base)";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] = {"Aux12thFleet_Mag_RPS7_AT", "Aux12thFleet_Mag_RPS7_HE"};
        magazineWell[] = {};

        modelOptics = "\ls_weapons\tertiary\rps6\ls_scope_rps6.p3d";

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = RPS7_MASS_LAUNCHER;
        };

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_RPS7"};
            };
        };
    };

    class BNA_KC_RPS7: BNA_KC_RPS7_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] RPS-7";
        JLTS_friedItem = "BNA_KC_RPS7_Fried";
    };

    class BNA_KC_RPS7_Fried: BNA_KC_RPS7
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] RPS-7 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};