#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"
#include "CfgRscTitles.hpp"

#define QUOTE(CODE) #CODE

class CfgVehicles
{
    class BNA_KC_Backpack;
    class BNA_KC_Jetpack_JT12: BNA_KC_Backpack
    {
        displayName = "[KC] JT-12 Jetpack";

        // Use JLTS model/textures, LS model will be removed
        model = "MRC\JLTS\characters\CloneArmor2\CloneJumppackJT12.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor2\data\Clone_jumppack_jt12_co.paa" };
        picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\Clone_jumppack_jt12_ui_ca.paa";

        BNA_KC_Jet_isJetpack = 1;
        BNA_KC_Jet_fuel = 100;
        BNA_KC_Jet_speed = 2;     // Jetpack speed, effects how fast you move in the air
        BNA_KC_Jet_strength = 15; // Jetpack strength, effects fast the player rises

        // Effects
        BNA_KC_Jet_effectPoints[] = { "effect_left", "effect_right" }; // Points to spawn effects, these come from the JLTS model
        BNA_KC_Jet_effects[] =
        {
            "BNA_KC_Effects_JetpackFire_Blue",
            "BNA_KC_Effects_JetpackSparks_Blue",
            "BNA_KC_Effects_JetpackSmoke"
        };
        BNA_KC_Jet_effectSound  = "BNA_KC_Gear\Jetpacks\Data\Sounds\BNA_KC_Jetpack_Loop.wss";
        BNA_KC_Jet_lightColor[] = {0, 0.1, 0.9};
    };
    class BNA_KC_Jetpack_JT12_LR: BNA_KC_Jetpack_JT12
    {
        displayName = "[KC] JT-12 Jetpack [LR]";
        
        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class BNA_KC_Jetpack_CDV21: BNA_KC_Jetpack_JT12
    {
        displayName = "[KC] CDV-21 Jetpack";

        // Use JLTS model/textures, LS model will be removed
        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppack.p3d";
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_co.paa" };
        picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_ui_ca.paa";
    };

    class BNA_KC_Jetpack_CDV19: BNA_KC_Jetpack_JT12_LR
    {
        displayName = "[KC] CDV-19 Jetpack [LR]";

        model = "MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] = { "MRC\JLTS\characters\CloneArmor\data\Clone_jumppack_mc_co.paa" };
        picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";

        // Jetpack properties
        BNA_KC_Jet_effectPoints[] = { "effect" };
    };

    class Man;
    class CAManBase: Man
    {
        class ACE_Actions
        {
            class ACE_MainActions
            {
                class BNA_KC_Jetpack_RefuelFromBody
                {
                    displayName = "Refuel from jetpack";
                    icon = "\z\ace\addons\refuel\ui\icon_refuel_interact.paa";

                    distance = 1.75;
                    // exceptions[] = { "isNotInside", "isNotSitting", "isNotSwimming", "isNotDragging", "isNotCarrying" };

                    condition = QUOTE(_this call BNAKC_fnc_canRefuelFromBody);
                    statement = QUOTE(_this call BNAKC_fnc_refuelFromBody);
                    modifierFunction = QUOTE(_this call BNAKC_fnc_refuelFromBodyModifier);
                };
            };
        };
    };
};


class CfgCloudlets
{
    // https://community.bistudio.com/wiki/Arma_3:_Particle_Effects
    // Blastcore modifies the original flare effect, causes some issues with the jetpacks
    class Flare2;
    class BNA_KC_Effects_FlareBase: Flare2
    {
        angle = 0;
        angleVar = 360;
        animationName = "";
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        color[] = {{1,1,1,-1.6},{1,1,1,-1.6},{1,1,1,-1.6},{1,1,1,0}};
        colorCoef[] = {0.7,0.7,0.7,0.7};
        colorVar[] = {0,0,0,0};
        interval = 0.0007;
        lifeTime = 0.05;
        lifeTimeVar = 0.01;
        moveVelocity[] = {0,1.5,0};
        MoveVelocityVar[] = {1,0.2,1};
        MoveVelocityVarConst[] = {0,0,0};
        onTimerScript = "";
        particleFSFrameCount = 2;
        particleFSIndex = 3;
        particleFSLoop = 0;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleType = "Billboard";
        position[] = {0,0,0};
        positionVar[] = {0,0,0};
        positionVarConst[] = {0,0,0};
        randomDirectionIntensity = 0.1;
        randomDirectionIntensityVar = 0;
        randomDirectionPeriod = 0.1;
        randomDirectionPeriodVar = 0;
        rotationVelocity = 0;
        rotationVelocityVar = 0;
        rubbing = 0.5;
        size[] = {0.08,0.07};
        sizeCoef = 1;
        sizeVar = 0;
        timerPeriod = 1;
        volume = 0.8;
        weight = 1;
    };
    class BNA_KC_Effects_JetpackFire_Blue: BNA_KC_Effects_FlareBase
    {
        // colorCoef to color the whole particle, not just the middle
        colorCoef[] =
        {
            // R, G, B, A
            0,
            0.1,
            0.9,
            1
        };

        // Direction and speed, [x, z, y]
        moveVelocity[] = {0, -1.5, 0};
        moveVelocityVar[] = {1, 1, 1};
    };

    class AirFireSparks;
    class BNA_KC_Effects_SparksBase: AirFireSparks
    {
        angle = 0;
        angleVar = 360;
        animationName = "";
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        color[] = {{1,0.3,0.3,-6.5},{1,0.3,0.3,-6},{1,0.3,0.3,-5.5},{1,0.3,0.3,-4.5}};
        colorCoef[] = {1,1,1,1};
        colorVar[] = {0,0.15,0.15,0};
        destroyOnWaterSurface = 1;
        interval = 0.05;
        lifeTime = 3.5;
        lifeTimeVar = 2.5;
        moveVelocity[] = {0,1.5,0};
        MoveVelocityVar[] = {0.2,1,0.2};
        MoveVelocityVarConst[] = {0,0,0};
        onTimerScript = "";
        particleFSFrameCount = 2;
        particleFSIndex = 13;
        particleFSLoop = 0;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleType = "Billboard";
        position[] = {0,0,0};
        positionVar[] = {0,0.2,0};
        positionVarConst[] = {0,0,0};
        randomDirectionIntensity = 0.55;
        randomDirectionIntensityVar = 0.15;
        randomDirectionPeriod = 0.5;
        randomDirectionPeriodVar = 0.3;
        rotationVelocity = 1;
        rotationVelocityVar = 2;
        rubbing = 0.17;
        size[] = {0.1,0.1,0.1,0.1,0.1,0.08,0.08,0.08,0.08,0};
        sizeCoef = 1;
        sizeVar = 0.04;
        timerPeriod = 1;
        volume = 1;
        weight = 1.05;
    };
    class BNA_KC_Effects_JetpackSparks_Blue: BNA_KC_Effects_SparksBase
    {
        color[] =
        {
            {0.2, 0.2, 1, -6.5},
            {0.2, 0.2, 1, -6},
            {0.2, 0.2, 1, -5.5},
            {0.2, 0.2, 1, -5}
        };
        colorVar[] = {0, 0.15, 0.15, 0}; // lets the color vary slightly
        colorCoef[] = {1, 1, 1, 1};

        moveVelocity[] = {0, -1.5, 0};
        moveVelocityVar[] = {1, 1, 1};

        size[] = {0.08, 0.08, 0.1, 0.1, 0.1, 0.1, 0.1};
        sizeCoef = 1;
        sizeVar = 1.5;

        volume = 1;
        weight = 1.05;
        interval = 0.01;
        lifeTime = 0.5;
        lifeTimeVar = 1.25;
    };

    // There's probably a better particle to base the smoke off of
    class MediumSmoke;
    class BNA_KC_Effects_SmokeBase: MediumSmoke
    {
        angle = 0;
        angleVar = 1;
        animationName = "";
        animationSpeed[] = {1.5,0.5};
        animationSpeedCoef = 1;
        beforeDestroyScript = "";
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        color[] = {{0.1,0.1,0.1,0.06},{0.2,0.2,0.2,0.04},{0.2,0.2,0.2,0.02},{0.3,0.3,0.3,0.01},{0.4,0.4,0.4,0.005}};
        colorCoef[] = {1.6,1.6,1.6,1.8};
        colorVar[] = {0,0,0,0};
        interval = 0.08;
        lifeTime = 15;
        lifeTimeVar = 4;
        moveVelocity[] = {0,1.2,0};
        MoveVelocityVar[] = {0.15,0.2,0.15};
        MoveVelocityVarConst[] = {0,0,0};
        onTimerScript = "";
        particleFSFrameCount = 48;
        particleFSIndex = 7;
        particleFSLoop = 1;
        particleFSNtieth = 16;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleType = "Billboard";
        position[] = {0,0,0};
        positionVar[] = {0.5,0.3,0.5};
        positionVarConst[] = {0,0,0};
        randomDirectionIntensity = 0.15;
        randomDirectionIntensityVar = 0.05;
        randomDirectionPeriod = 0.4;
        randomDirectionPeriodVar = 0.1;
        rotationVelocity = 0;
        rotationVelocityVar = 10;
        rubbing = 0.1;
        size[] = {1.2,10};
        sizeCoef = 1;
        sizeVar = 0.1;
        timerPeriod = 1;
        volume = 0.04;
        weight = 0.05;
    };
    class BNA_KC_Effects_JetpackSmoke: BNA_KC_Effects_SmokeBase
    {
        color[] =
        {
            {0.9, 0.9, 0.9, 0.08},
            {0.9, 0.9, 0.9, 0.04},
            {0.9, 0.9, 0.9, 0.01},
            {0.9, 0.9, 0.9, 0.001}
        };
        colorCoef[] = {1, 1, 1, 1};

        moveVelocity[] = {0, -1.5, 0};
        moveVelocityVar[] = {1, 1, 1};
        rubbing = 0.17;

        positionVar[] = {0, 0, 0};
        randomDirectionIntensity = 0.05;
        randomDirectionIntensityVar = 0;
        randomDirectionPeriod = 0.1;
        randomDirectionPeriodVar = 0;
        rotationVelocity = 1;
        rotationVelocityVar = 20;

        angleVar = 0.5;

        animationSpeed[] = {1.2};

        size[] = {0.3, 0.7, 1, 1.2, 1.4, 1.6, 1.8};
        sizeCoef = 1;
        sizeVar = 0;

        volume = 1;
        weight = 1.05;
        interval = 0.02;
        lifeTime = 0.8;
        lifeTimeVar = 0;

        blockAIVisibility = 0;

        particleFSFrameCount = 8;
        particleFSIndex = 12;
    };
};