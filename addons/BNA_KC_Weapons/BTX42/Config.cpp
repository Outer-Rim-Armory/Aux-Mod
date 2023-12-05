#include "CfgPatches.hpp"


class CfgWeapons
{
    class 41_Flammenwerfer_02_F;
    class BNA_KC_BTX42_Base: 41_Flammenwerfer_02_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "Dexus and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] BlastTech X-42 Flamethrower (Base)";

        // Model
        model = "3AS\3AS_Weapons\X42\BX42.p3d";
        picture = "\3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
        handAnim[] =
        {
            "OFP2_ManSkeleton",
            "3AS\3AS_Weapons\Data\Anim\BX42.rtm"
        };

        // Burn 'Em Redux Properties
        WBK_BurnEm_RequiredBackpack = ""; // "" = no required backpack
        WBK_BurnEm_FlamethrowerParticlePos = [ [-0.32,0.3,-0.3], 'leftHand' ]; // Particle Position
        WBK_BurnEm_FlamethrowerDistance = 20; // Distance of flame in meters

        magazines[] = {};
        magazineWell[] = {};
    };

    class BNA_KC_BTX42: BNA_KC_BTX42_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] BlastTech X-42 Flamethrower";
        magazines[] = { "BNA_KC_Mag_300Rnd_BTX42" };
    };

    class BNA_KC_BTX45_Heavy: BNA_KC_BTX42
    {
        displayName = "[KC] BlastTech X-45 Heavy Flamethrower";
        magazines[] = { "BNA_KC_Mag_150Rnd_BTX42" };

        WBK_BurnEm_FlamethrowerDistance = 40;
    };
};


class CfgMagazines
{
    class M2_Fuel_Tank;
    class BNA_KC_Mag_300Rnd_BTX42: M2_Fuel_Tank
    {
        author = "DartRuffian and Dexus";
        displayName = "[KC] BT X-42 Fuel Tank";
        picture = "\3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        UiPicture = "\3AS\3AS_Weapons\data\textures\Energy_Cell_Arsenal.paa";
        mass = 50;

        JLTS_hasEMPProtection = 1;
    };

    class BNA_KC_Mag_150Rnd_BTX42: BNA_KC_Mag_300Rnd_BTX42
    {
        displayName = "[KC] BT X-45 Heavy Fuel Tank";
        count = 150;
        mass = 150;
    };
};