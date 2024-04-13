class CfgSoundShaders {
    class MBT_01_Engine_RPM0_EXT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM0_EXT): MBT_01_Engine_RPM0_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineExt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - 0))";
        volume = "engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,    3000]) + 0.2*thrust) * (rpm factor [0.15 *1400, (0.15 *1400 + 0.1 *(1400-0.15 *1400))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2000 - 1400)/(3000 - 1400) - (((2000 - 1400)/(3000 - 1400) - 0) - (1.2 * ((2000 - 1400)/(3000 - 1400) - 0)))/2, 0])";
        range = "6*210";
    };

    class MBT_01_Engine_RPM1_EXT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM1_EXT): MBT_01_Engine_RPM1_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineExt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2000 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,    3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[0, (2000 - 1400)/(3000 - 1400) - (((2000 - 1400)/(3000 - 1400) - 0) - (1.2 * ((2000 - 1400)/(3000 - 1400) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2200 - 1400)/(3000 - 1400) - (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2, (2000 - 1400)/(3000 - 1400) + (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2])";
        range = "6*215";
    };

    class MBT_01_Engine_RPM2_EXT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM2_EXT): MBT_01_Engine_RPM2_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineExt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2200 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,    3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2000 - 1400)/(3000 - 1400) + (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2, (2200 - 1400)/(3000 - 1400) - (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2400 - 1400)/(3000 - 1400) - (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2, (2200 - 1400)/(3000 - 1400) + (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2])";
        range = "6*220";
    };

    class MBT_01_Engine_RPM3_EXT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM3_EXT): MBT_01_Engine_RPM3_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineExt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2400 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,    3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2200 - 1400)/(3000 - 1400) + (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2, (2400 - 1400)/(3000 - 1400) - (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2600 - 1400)/(3000 - 1400) - (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2, (2400 - 1400)/(3000 - 1400) + (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2])";
        range = "6*225";
    };

    class MBT_01_Engine_RPM4_EXT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM4_EXT): MBT_01_Engine_RPM4_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineExt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2600 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,    3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2400 - 1400)/(3000 - 1400) + (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2, (2600 - 1400)/(3000 - 1400) - (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2800 - 1400)/(3000 - 1400) - (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2, (2600 - 1400)/(3000 - 1400) + (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2])";
        range = "6*230";
    };

    class MBT_01_Engine_RPM5_EXT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM5_EXT): MBT_01_Engine_RPM5_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineExt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2800 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,    3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2600 - 1400)/(3000 - 1400) + (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2, (2800 - 1400)/(3000 - 1400) - (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(3000 - 1400)/(3000 - 1400) - (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2, (2800 - 1400)/(3000 - 1400) + (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2])";
        range = "6*235";
    };

    class MBT_01_Engine_RPM6_EXT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM6_EXT): MBT_01_Engine_RPM6_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineExt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (3000 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 0.7 * 1.2*(1 + 0.2*(rpm factor[1400,    3000]) + 0.2*thrust) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2800 - 1400)/(3000 - 1400) + (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2, (3000 - 1400)/(3000 - 1400) - (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2])";
        range = "6*240";
    };

    class MBT_01_Engine_RPM0_INT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM0_INT): MBT_01_Engine_RPM0_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineInt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - 0))";
        volume = "engineOn * 1 * 1.2 * (rpm factor [0.15 *1400, (0.15 *1400 + 0.1 *(1400-0.15 *1400))]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2000 - 1400)/(3000 - 1400) - (((2000 - 1400)/(3000 - 1400) - 0) - (1.2 * ((2000 - 1400)/(3000 - 1400) - 0)))/2, 0])";
        range = "6*210";
    };

    class MBT_01_Engine_RPM1_INT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM1_INT): MBT_01_Engine_RPM1_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineInt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2000 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[0, (2000 - 1400)/(3000 - 1400) - (((2000 - 1400)/(3000 - 1400) - 0) - (1.2 * ((2000 - 1400)/(3000 - 1400) - 0)))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2200 - 1400)/(3000 - 1400) - (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2, (2000 - 1400)/(3000 - 1400) + (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2])";
        range = "6*215";
    };

    class MBT_01_Engine_RPM2_INT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM2_INT): MBT_01_Engine_RPM2_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineInt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2200 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2000 - 1400)/(3000 - 1400) + (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2, (2200 - 1400)/(3000 - 1400) - (((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400)) - (1.2 * ((2200 - 1400)/(3000 - 1400) - (2000 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2400 - 1400)/(3000 - 1400) - (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2, (2200 - 1400)/(3000 - 1400) + (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2])";
        range = "6*220";
    };

    class MBT_01_Engine_RPM3_INT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM3_INT): MBT_01_Engine_RPM3_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineInt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2400 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2200 - 1400)/(3000 - 1400) + (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2, (2400 - 1400)/(3000 - 1400) - (((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400)) - (1.2 * ((2400 - 1400)/(3000 - 1400) - (2200 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2600 - 1400)/(3000 - 1400) - (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2, (2400 - 1400)/(3000 - 1400) + (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2])";
        range = "6*225";
    };

    class MBT_01_Engine_RPM4_INT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM4_INT): MBT_01_Engine_RPM4_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineInt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2600 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2400 - 1400)/(3000 - 1400) + (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2, (2600 - 1400)/(3000 - 1400) - (((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400)) - (1.2 * ((2600 - 1400)/(3000 - 1400) - (2400 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(2800 - 1400)/(3000 - 1400) - (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2, (2600 - 1400)/(3000 - 1400) + (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2])";
        range = "6*230";
    };

    class MBT_01_Engine_RPM5_INT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM5_INT): MBT_01_Engine_RPM5_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineInt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (2800 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2600 - 1400)/(3000 - 1400) + (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2, (2800 - 1400)/(3000 - 1400) - (((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400)) - (1.2 * ((2800 - 1400)/(3000 - 1400) - (2600 - 1400)/(3000 - 1400))))/2]) * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor [(3000 - 1400)/(3000 - 1400) - (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2, (2800 - 1400)/(3000 - 1400) + (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2])";
        range = "6*235";
    };

    class MBT_01_Engine_RPM6_INT_SoundShader;
    class CLASS(SoundShader_Blitz_Engine_RPM6_INT): MBT_01_Engine_RPM6_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\blitz\EngineInt.wss), 1}
        };
        frequency = "1.05 * (1 + 0.8 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) - (3000 - 1400)/(3000 - 1400)))";
        volume = "engineOn * 1 * 1.2 * (((1+0.1*(1 + angVelocity factor[0, 0.5]) *thrust) * ((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - (1 + angVelocity factor[0, 0.5]) *thrust)*((1-0.9 ) * (speed factor [0, 16.82]) + 0.9  * (rpm factor [1400,    3000])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [1400,    3000])) factor[(2800 - 1400)/(3000 - 1400) + (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2, (3000 - 1400)/(3000 - 1400) - (((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400)) - (1.2 * ((3000 - 1400)/(3000 - 1400) - (2800 - 1400)/(3000 - 1400))))/2])";
        range = "6*240";
    };

    class APC_Wheeled_01_Engine_RPM0_EXT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM0_EXT): APC_Wheeled_01_Engine_RPM0_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM1_EXT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM1_EXT): APC_Wheeled_01_Engine_RPM1_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM2_EXT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM2_EXT): APC_Wheeled_01_Engine_RPM2_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM3_EXT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM3_EXT): APC_Wheeled_01_Engine_RPM3_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM4_EXT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM4_EXT): APC_Wheeled_01_Engine_RPM4_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM5_EXT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM5_EXT): APC_Wheeled_01_Engine_RPM5_EXT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM0_INT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM0_INT): APC_Wheeled_01_Engine_RPM0_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM1_INT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM1_INT): APC_Wheeled_01_Engine_RPM1_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM2_INT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM2_INT): APC_Wheeled_01_Engine_RPM2_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM3_INT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM3_INT): APC_Wheeled_01_Engine_RPM3_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM4_INT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM4_INT): APC_Wheeled_01_Engine_RPM4_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };

    class APC_Wheeled_01_Engine_RPM5_INT_SoundShader;
    class CLASS(SoundShader_Reek_Engine_RPM5_INT): APC_Wheeled_01_Engine_RPM5_INT_SoundShader {
        samples[] = {
            {QPATHTOF(sounds\data\audio\reek\Engine.wss), 1}
        };
    };
};