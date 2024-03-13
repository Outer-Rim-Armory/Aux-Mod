#include "script_component.hpp"

GVAR(activeJammers) = [];

["CBA_settingsInitialized", {
    [QGVAR(addJammerLocal), {
        TRACE_1("addJammerLocal",_this);
        if (isServer) exitWith {}; // For singleplayer
        GVAR(activeJammers) pushBack _this;
    }] call CBA_fnc_addEventHandler;

    [QGVAR(removeJammerLocal), {
        TRACE_1("removeJammerLocal",_this);
        if (isServer) exitWith {};
        GVAR(activeJammers) deleteAt _this;
    }] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;