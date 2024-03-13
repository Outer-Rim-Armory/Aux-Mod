#include "script_component.hpp"

GVAR(buildMusicSoundId) = -1;

["CBA_settingsInitialized", {
    ["acex_fortify_onDeployStart", {
        GVAR(buildMusicSoundId) = playSound3D [
            QPATHTOF(data\music\HomeDepot.ogg),
            objNull,
            false,
            getPosASL ace_player,
            1,
            1,
            30,
            0,
            !GVAR(playBuildMusicGlobal)
        ];
    }] call CBA_fnc_addEventHandler;

    // Not implemented until ACE update
    ["ace_fortify_onDeployStop", {
        stopSound GVAR(buildMusicSoundId);
        GVAR(buildMusicSoundId) = -1;
    }] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;