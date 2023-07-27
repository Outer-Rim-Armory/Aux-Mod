#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


class CfgVehicles
{
    class BNA_KC_Backpack;
    class BNA_KC_Jetpack_JT12: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper JT-12 Jetpack";

        // Use JLTS model/textures, LS model will be removed
        model = "MRC\JLTS\characters\CloneArmor2\CloneJumppackJT12.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor2\data\Clone_jumppack_jt12_co.paa" };
        picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\Clone_jumppack_jt12_ui_ca.paa";

        BNA_KC_Jet_IsJetpack = 1;
        BNA_KC_Jet_speed = 2;     // Jetpack speed, effects how fast you move in the air
        BNA_KC_Jet_strength = 15; // Jetpack strength, effects fast the player rises

        // Effects
        BNA_KC_Jet_effectPoints[] = { "effect_left", "effect_right" }; // Points to spawn effects, these come from the JLTS model
        BNA_KC_Jet_effectFire  = "BNA_KC_Jetpack_Fire";
        BNA_KC_Jet_effectSmoke = "JLTS_jumppack_smoke";
        BNA_KC_Jet_effectSound = "3AS\3AS_Weapons\X42\SFX\flamer.ogg";
    };

    class BNA_KC_Jetpack_CDV21: BNA_KC_Jetpack_JT12
    {
        displayName = "[KC] Clone Trooper CDV-21 Jetpack";

        // Use JLTS model/textures, LS model will be removed
        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_co.paa" };
        picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_ui_ca.paa";
    };

    class BNA_KC_Backpack_Radio;
    class BNA_KC_Jetpack_CDV19: BNA_KC_Backpack_Radio
    {
        displayName = "[KC] Clone Commander CDV-19 Jumppack";

        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_mc_co.paa" };
        picture = "MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";

        BNA_KC_Jet_IsJetpack = 1;
        BNA_KC_Jet_speed = 2;     // Jetpack speed, effects how fast you move in the air
        BNA_KC_Jet_strength = 15; // Jetpack strength, effects fast the player rises

        // Effects
        BNA_KC_Jet_effectPoints[] = { "effect" }; // Points to spawn effects, comes from the JLTS model
        BNA_KC_Jet_effectFire  = "BNA_KC_Jetpack_Fire";
        BNA_KC_Jet_effectSmoke = "JLTS_jumppack_smoke";
        BNA_KC_Jet_effectSound = "3AS\3AS_Weapons\X42\SFX\flamer.ogg";
    };
};


class CfgCloudlets
{
    // https://community.bistudio.com/wiki/Arma_3:_Particle_Effects
    class Flare2;
    class BNA_KC_Jetpack_Fire: Flare2
    {
        colorCoef[] =
        {
            // R, G, B, A
            0,
            0.1,
            0.9,
            1
        };
    };
};