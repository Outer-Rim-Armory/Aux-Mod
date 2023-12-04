class CfgSoundShaders
{
    class BNA_KC_SoundShader_Weapon_Base;
    class BNA_KC_SoundShader_RPS6: BNA_KC_SoundShader_Weapon_Base
    {
        // Will eventually recieve it's own sound effects
        volumeFactor = 5;
        samples[] =
        {
            {"\BNA_KC_Weapons\RPS6\data\audio\RPS7_Fire1.wss", 1, 1},
            {"\BNA_KC_Weapons\RPS6\data\audio\RPS7_Fire2.wss", 1, 1},
            {"\BNA_KC_Weapons\RPS6\data\audio\RPS7_Fire3.wss", 1, 1}
        };
    };

    class BNA_KC_SoundShader_RPS7: BNA_KC_SoundShader_Weapon_Base
    {
        volumeFactor = 5;
        samples[] =
        {
            {"\BNA_KC_Weapons\RPS6\data\audio\RPS7_Fire1.wss", 1, 1},
            {"\BNA_KC_Weapons\RPS6\data\audio\RPS7_Fire2.wss", 1, 1},
            {"\BNA_KC_Weapons\RPS6\data\audio\RPS7_Fire3.wss", 1, 1}
        };
    };
};

class CfgSoundSets
{
    class BNA_KC_SoundSet_Weapon_Base;
    class BNA_KC_SoundSet_RPS6: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_RPS6"};
    };

    class BNA_KC_SoundSet_RPS7: BNA_KC_SoundSet_Weapon_Base
    {
        soundShaders[] = {"BNA_KC_SoundShader_RPS7"};
    };
};