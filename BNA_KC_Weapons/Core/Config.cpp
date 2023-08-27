#include "CfgPatches.hpp"


class CfgMagazines
{
    class UGL_FlareWhite_F;
    class BNA_KC_UGL_FlareBlue: UGL_FlareWhite_F
    {
        displayName = "[KC] Flare Round (Blue)";
        displayNameShort = "Blue Flare";
        descriptionShort = "Type: Flare - Blue <br />Rounds: 1 <br />Used in: EGLM, 3GL";
        picture = "\BNA_KC_Weapons\Core\Data\Textures\UI\BNA_KC_Mag_FlareBlue_UI.paa";

        ammo = "BNA_KC_Flare_Blue";
        count = 1;
    };

    class BNA_KC_3Rnd_UGL_FlareBlue: BNA_KC_UGL_FlareBlue
    {
        displayName = "[KC] 3Rnd 3GL Flares (Blue)";
        displayNameShort = "3Rnd Blue Flare";
        descriptionShort = "Type: Flare Rounds - Blue <br />Rounds: 3 <br />Used in: EGLM, 3GL";
        mass = 12;
        count = 3;
    };
};


class CfgAmmo
{
    class F_40mm_White;
    class BNA_KC_Flare_Blue: F_40mm_White
    {
        lightColor[] = { 0.25, 0.25, 0.5, 0.5 };
    };
};