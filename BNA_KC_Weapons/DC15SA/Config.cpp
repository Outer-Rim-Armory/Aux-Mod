#include "CfgPatches.hpp"


class CfgWeapons
{
    class Pistol_Base_F;
    class SWLW_DC15SA: Pistol_Base_F
    {
        class Single;
    };
    class BNA_KC_DC15SA_Base: SWLW_DC15SA
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] DC-15SA (Base)";

        modes[] = {"Single", "FullAuto"};
        muzzles[] = {"this"};
        magazines[] =
        {
            "Aux12thFleet_Mag_7Rnd_DC15SA"
        };
        magazineWell[] = {};

        canShootInWater = 1;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 1;

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_DC15SA"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_DC15SA"};
            };
        };
        class FullAuto: Single
        {
            autoFire = 1;
            textureType = "fullAuto";
            dispersion = 0.001;
            reloadTime = 0.08;
        };
    };

    class BNA_KC_DC15SA: BNA_KC_DC15SA_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] DC-15SA";
    };
};


class CfgMagazines
{
    class SWLW_DC15SA_Mag;
    class Aux12thFleet_Mag_7Rnd_DC15SA: SWLW_DC15SA_Mag
    {
        author = "DartRuffian and SweMonkey";
        displayName = "[12th Fleet] DC-15SA Energy Cell (7 Rnd)";
        displayNameShort = "Low Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 7<br/>Used In: DC-15SA";

        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\SWLW_clones_spec\data\ui\DC15SA_mag_ui_ca.paa";

        ammo = "Aux12thFleet_Ammo_Pistol_Blue";
        count = 7; // 0.875 per round
        mass = 8;

        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 1;
    };
    class Aux12thFleet_Mag_15Rnd_DC15SA: Aux12thFleet_Mag_7Rnd_DC15SA
    {
        displayName = "[12th Fleet] DC-15SA Energy Cell (15 Rnd)";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 15<br/>Used In: DC-15SA";
        count = 15;
        mass = 13;
    };
    class Aux12thFleet_Mag_30Rnd_DC15SA: Aux12thFleet_Mag_7Rnd_DC15SA
    {
        displayName = "[12th Fleet] DC-15SA Energy Cell (30 Rnd)";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 30<br/>Used In: DC-15SA";
        count = 30;
        mass = 26;
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_DC15SA: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"\BNA_KC_Weapons\DC15SA\Data\Audio\DC15SA_Fire1.wss", 1, 1},
            {"\BNA_KC_Weapons\DC15SA\Data\Audio\DC15SA_Fire2.wss", 1, 1},
            {"\BNA_KC_Weapons\DC15SA\Data\Audio\DC15SA_Fire3.wss", 1, 1},
            {"\BNA_KC_Weapons\DC15SA\Data\Audio\DC15SA_Fire4.wss", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_DC15SA: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_DC15SA"};
    };
};