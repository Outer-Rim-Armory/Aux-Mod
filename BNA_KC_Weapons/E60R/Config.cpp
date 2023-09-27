#include "CfgPatches.hpp"
#include "CfgParticles.hpp"
#include "..\Macros.hpp"


class CfgWeapons
{
    class launch_Titan_short_base;
    class JLTS_E60R_AT: launch_Titan_short_base
    {
        class Single;
        class TopDown;
    };
    class BNA_KC_E60R_AA_Base: JLTS_E60R_AT
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] E-60R (AA, Base)";
        baseWeapon = "BNA_KC_E60R_AA_Base";
        descriptionShort = "Portable Missile Launcher";

        modes[] = {"Single", "TopDown"};
        muzzles[] = {"this"};
        magazines[] =
        {
            "Aux12thFleet_Mag_E60R_AA"
        };
        magazineWell[] = {};

        canShootInWater = 0;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        // ACE Overpressure/Backblast
        ace_overpressure_angle = 30;
        ace_overpressure_damage = 0.5;
        ace_overpressure_offset = 0.85;
        ace_overpressure_priority = 1;
        ace_overpressure_range = 2;

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_E60R"};
            };
        };
        class TopDown: TopDown
        {
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_E60R"};
            };
        };
    };

    class BNA_KC_E60R_AA: BNA_KC_E60R_AA_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] E-60R (AA)";
        JLTS_friedItem = "BNA_KC_E60R_AA_Fried";
        baseWeapon = "BNA_KC_E60R_AA";
    };
    class BNA_KC_E60R_AA_Fried: BNA_KC_E60R_AA
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_E60R_AA_Fried";

        displayName = "[KC] E-60R (AA, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\BNA_KC_Weapons\E60R\Data\Textures\UI\E60R_Fried_UI.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };

    class Launcher_Base_F;
    class launch_RPG32_F: Launcher_Base_F
    {
        class Single;
    };
    class BNA_KC_E60R_AT_Base: launch_RPG32_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] E-60R (AT, Base)";
        baseWeapon = "BNA_KC_E60R_AT_Base";
        descriptionShort = "Portable Rocket Launcher";

        modes[] = {"Single"};
        muzzles[] = {"this"};
        magazines[] =
        {
            "Aux12thFleet_Mag_E60R_AT",
            "Aux12thFleet_Mag_E60R_HE"
        };
        magazineWell[] = {};

        model = "\MRC\JLTS\weapons\E60R\E60R.p3d";
        hiddenSelections[] = {"camo1", "illum"};
        hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\E60R\data\E60R_co.paa"};
        hiddenSelectionsMaterials[] = {"", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        handAnim[] = {"OFP2_ManSkeleton", "\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"};
        picture = "\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";

        canShootInWater = 0;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        // ACE Overpressure/Backblast
        ace_overpressure_angle = 30;
        ace_overpressure_damage = 0.5;
        ace_overpressure_offset = 0.85;
        ace_overpressure_priority = 1;
        ace_overpressure_range = 2;

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_E60R"};
            };
        };
    };

    class BNA_KC_E60R_AT: BNA_KC_E60R_AT_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] E-60R (AT)";
        JLTS_friedItem = "BNA_KC_E60R_AT_Fried";
        baseWeapon = "BNA_KC_E60R_AT";
    };
    class BNA_KC_E60R_AT_Fried: BNA_KC_E60R_AT
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_E60R_AT_Fried";

        displayName = "[KC] E-60R (AT, Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\BNA_KC_Weapons\E60R\Data\Textures\UI\E60R_Fried_UI.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class RPG32_F;
    class Aux12thFleet_Mag_E60R_AT: RPG32_F
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] E-60R AT Missile";
        displayNameShort = "AT";
        descriptionShort = "Anti-Tank Missile<br/>Rounds: 1<br/>Used In: E-60R";
        ammo = "Aux12thFleet_Ammo_E60R_AT";

        JLTS_hasEMPProtection = 1;

        allowedSlots[] = {VEST_SLOT, BACKPACK_SLOT};
        mass = 60;
    };

    class Aux12thFleet_Mag_E60R_HE: Aux12thFleet_Mag_E60R_AT
    {
        displayName = "[12th Fleet] E-60R HE Missile";
        displayNameShort = "HE";
        descriptionShort = "High Explosive Missile<br/>Rounds: 1<br/>Used In: E-60R";

        ammo = "Aux12thFleet_Ammo_E60R_HE";
        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";

        mass = 40;
    };

    class Titan_AA;
    class Aux12thFleet_Mag_E60R_AA: Titan_AA
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] E-60R AA Missile";
        displayNameShort = "AA";
        descriptionShort = "Anti-Air Missile<br/>Rounds: 1<br/>Used In: E-60R";
        ammo = "Aux12thFleet_Ammo_E60R_AA";

        JLTS_hasEMPProtection = 1;

        allowedSlots[] = {VEST_SLOT, BACKPACK_SLOT};
        mass = 60;
    };
};


class CfgAmmo
{
    class R_PG32V_F;
    class Aux12thFleet_Ammo_E60R_AT: R_PG32V_F
    {
        thrust = 100;
        thrustTime = 5;
        timeToLive = 5;
        effectsMissile = "Aux12thFleet_Particle_E60_Fly";
        soundFly[] = {"swlw_rework\sounds\launcher\E60R_fly.wss", 6, 1.5, 700};
        submunitionAmmo = "Aux12thFleet_Ammo_E60R_AT_SubAmmo";
    };

    class ammo_Penetrator_RPG32V;
    class Aux12thFleet_Ammo_E60R_AT_SubAmmo: ammo_Penetrator_RPG32V
    {
        // Values are the same as ammo_Penetrator_RPG32V, listed here for potential balance tweaking later on
        hit = 480;
        caliber = 43.3333;

        thrust = 210;
        thrustTime = 1.5;
        typicalSpeed = 1000;
    };

    class R_TBG32V_F;
    class Aux12thFleet_Ammo_E60R_HE: R_TBG32V_F
    {
        thrust = 100;
        thrustTime = 5;
        timeToLive = 5;
        effectsMissile = "Aux12thFleet_Particle_E60_Fly";
        soundFly[] = {"swlw_rework\sounds\launcher\E60R_fly.wss", 6, 1.5, 700};
    };

    class M_Titan_AA;
    class Aux12thFleet_Ammo_E60R_AA: M_Titan_AA
    {
        cmImmunity = 0.5;
        effectsMissile = "Aux12thFleet_Particle_E60_Fly";
        soundFly[] = {"swlw_rework\sounds\launcher\E60R_fly.wss", 6, 1.5, 700};
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_E60R: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"swlw_rework\sounds\launcher\E60R_shot.wss", 10, 1, 2000};
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_E60R: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_E60R"};
    };
};