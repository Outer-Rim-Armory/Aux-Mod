#include "CfgPatches.hpp"


class CfgWeapons
{
    class JLTS_DC15A_plastic;
    class BNA_KC_DC15A_Base: JLTS_DC15A_plastic
    {
        class WeaponSlotsInfo;
        class Single;
        class FullAuto;
    };
    class BNA_KC_DC15A: BNA_KC_DC15A_Base
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
        };
        class Single: Single
        {
            class StandardSound;
        };
        class FullAuto: FullAuto
        {
            class StandardSound;
        };
    };
    class BNA_KC_LW38_Base: BNA_KC_DC15A
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] LW-38 (Base)";
        baseWeapon = "BNA_KC_LW38_Base";

        modes[] = {"Single", "FullAuto"};
        muzzles[] = {"this"};
        magazines[] = {"BNA_KC_Mag_LW38"};

        reloadAction = "GestureReloadMX";
        reloadMagazineSound[] = {"\LF_Weapon_Unit\westar45\data\sounds\westar55reload.wss", 3, 1, 10};

        model = "LF_Weapon_Unit\lw38m\lw38m.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        handAnim[] = {"OFP2_ManSkeleton", "LF_Weapon_Unit\lw38m\anims\lw38mhand.rtm"};
        picture = "\LF_Weapon_Unit\lw38m\ui\lw38m.paa";
        // picture = "\BNA_KC_Weapons\LW38M\Data\Textures\UI\LW38M_UI.paa";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] =
                {
                    "LFP_lw38mholo_scope",
                    "lfp_lw38m_scope"
                };
            };
        };

        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_LW38"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_LW38"};
            };
        };
        class FullAuto: FullAuto
        {
            reloadTime = 0.15;
            class StandardSound: StandardSound
            {
                soundBegin[] = {};
                soundBeginWater[] = {};
                soundSetShot[] = {"BNA_KC_SoundSet_LW38"};
                soundSetShotWater[] = {"BNA_KC_SoundSet_LW38"};
            };
        };
    };

    class BNA_KC_LW38: BNA_KC_LW38_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] LW-38";
        baseWeapon = "BNA_KC_LW38";
        JLTS_friedItem = "BNA_KC_LW38_Fried";
    };

    class BNA_KC_LW38_Fried: BNA_KC_LW38
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] LW-38 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        // picture = "\BNA_KC_Weapons\LW38\Data\Textures\UI\LW38_Fried_UI.paa";
        baseWeapon = "BNA_KC_LW38_Fried";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgMagazines
{
    class Aux12thFleet_Mag_DC15A;
    class BNA_KC_Mag_LW38: Aux12thFleet_Mag_DC15A
    {
        displayName = "[KC] LW-38 Energy Cell";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: LW-38";

        model = "LF_Weapon_Unit\lw38m\mag.p3d";
        picture = "\LF_Weapon_Unit\lw38m\ui\mag.paa";
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_LW38: BNA_KC_SoundShader_Weapon_Base
    {
        samples[] =
        {
            {"BNA_KC_Weapons\LW38\Data\Audio\LW38_Fire1.ogg", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_LW38: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_LW38"};
    };
};