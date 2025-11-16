#include "script_component.hpp"

GVAR(jammerHandlerClient) = -1;
GVAR(interferenceFactor) = 0.625;

["CBA_settingsInitialized", {
    [QGVAR(addJammerLocal), {
        params ["_hash", "_jammer", "_radius", "_strength"];
        TRACE_4("addJammerLocal",_hash,_jammer,_radius,_strength);

        GVAR(activeJammers) set [_hash, [_jammer, _radius, _strength]];

        if (GVAR(jammerHandlerClient) < 0) then {
            GVAR(jammerHandlerClient) = [] call FUNC(jammerHandlerClient);
        };
    }] call CBA_fnc_addEventHandler;

    [QGVAR(removeJammerLocal), {
        params ["_hash"];
        TRACE_1("removeJammerLocal",_hash);

        GVAR(activeJammers) deleteAt _hash;
    }] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
