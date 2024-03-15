#include "script_component.hpp"

GVAR(activeJammers) = [] call CBA_fnc_hashCreate;
GVAR(interferenceFactor) = 0.625;

["CBA_settingsInitialized", {
    [QGVAR(addJammerLocal), {
        params ["_jammer", "_radius", "_strength"];
        TRACE_3("addJammerLocal",_jammer,_radius,_strength);
        if (isServer) exitWith {}; // For singleplayer
        [GVAR(activeJammers), _jammer, [_radius, _strength]] call CBA_fnc_hashSet;
    }] call CBA_fnc_addEventHandler;

    [QGVAR(removeJammerLocal), {
        params ["_jammer"];
        TRACE_1("removeJammerLocal",_jammer);
        if (isServer) exitWith {};
        [GVAR(activeJammers), _jammer] call CBA_fnc_hashRem;
    }] call CBA_fnc_addEventHandler;

    [QGVAR(updateInterference), LINKFUNC(updateInterference)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;