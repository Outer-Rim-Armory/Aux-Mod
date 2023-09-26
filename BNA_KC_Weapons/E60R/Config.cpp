#include "CfgPatches.hpp"


class CfgWeapons
{
    class launch_Titan_short_base;
    class JLTS_E60R_AT: launch_Titan_short_base
    {
        class Single;
        class TopDown;
    };
    class BNA_KC_E60R_Base: JLTS_E60R_AT
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] E-60R (Base)";
        baseWeapon = "BNA_KC_E5C_Base";
        descriptionShort = "Portible Missile Launcher";

        muzzles[] = {"this"};
        magazines[] = {"JLTS_E60R_AT_mag","JLTS_E60R_AP_mag"};
        magazineWell[] = {};

        canShootInWater = 0;

        // JLTS emp system
        JLTS_hasElectronics = 1;
        JLTS_hasEMPProtection = 0;

        class Single: Single
        {
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_E60R_Shot"};
            };
        };
        class TopDown: TopDown
        {
            class StandardSound
            {
                soundSetShot[] = {"BNA_KC_SoundSet_E60R_Shot"};
            };
        };
    };

    class BNA_KC_E60R: BNA_KC_E60R_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] E-60R";
        JLTS_friedItem = "BNA_KC_E60R_Fried";
        baseWeapon = "BNA_KC_E60R";
    };
    class BNA_KC_E60R_Fried: BNA_KC_E60R
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;

        baseWeapon = "BNA_KC_E60R_Fried";

        displayName = "[KC] E-60R (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = "\BNA_KC_Weapons\E60R\Data\Textures\UI\E60R_Fried_UI.paa";

        JLTS_isFried = 1;
        magazines[] = {};
    };
};


class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_E60R_Shot: BNA_KC_SoundShader_Weapon_Base
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
    class BNA_KC_SoundSet_E60R_Shot: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_E60R"};
    };
};