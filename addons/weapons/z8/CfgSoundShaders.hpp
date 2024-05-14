class CfgSoundShaders {
    class CLASS(soundShader_weaponShot_base);
    class CLASS(soundShader_Z8_shot): CLASS(soundShader_weaponShot_base) {
        samples[] = {
            {QPATHTOF(subAddonName\data\audio\Fire1.wss), 1, 1},
            {QPATHTOF(subAddonName\data\audio\Fire2.wss), 1, 1},
            {QPATHTOF(subAddonName\data\audio\Fire3.wss), 1, 1},
            {QPATHTOF(subAddonName\data\audio\Fire4.wss), 1, 1}
        };
    };
};