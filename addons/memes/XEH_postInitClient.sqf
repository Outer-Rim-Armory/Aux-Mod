#include "script_component.hpp"

GVAR(buildMusicSoundId) = -1;
GVAR(buildMusic) = ["HomeDepot.ogg", "FortniteBuilding.ogg"];

["CBA_settingsInitialized", {
    #ifdef APRIL_FOOL
    ["acex_fortify_onDeployStart", {
        if (GVAR(playBuildMusic)) then {
            GVAR(buildMusicSoundId) = playSound3D [
                QPATHTOF(data\music\) + selectRandom GVAR(buildMusic),
                objNull, false, getPosASL ace_player, 3, 1, 30, 0,
                !GVAR(playBuildMusicGlobal)
            ];
        };
    }] call CBA_fnc_addEventHandler;

    ["ace_fortify_deployFinished", {
        // Let sound play for a few seconds
        [{
            stopSound GVAR(buildMusicSoundId);
            GVAR(buildMusicSoundId) = -1;
        }, [], 3] call CBA_fnc_waitAndExecute;
    }] call CBA_fnc_addEventHandler;

    ["ace_fortify_onDeployStop", {
        stopSound GVAR(buildMusicSoundId);
        GVAR(buildMusicSoundId) = -1;
    }] call CBA_fnc_addEventHandler;

    ["ace_fortify_deployCanceled", {
        stopSound GVAR(buildMusicSoundId);
        GVAR(buildMusicSoundId) = -1;
    }] call CBA_fnc_addEventHandler;
    #endif
}] call CBA_fnc_addEventHandler;
