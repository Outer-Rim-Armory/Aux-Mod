#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["ace_unconscious", {
        params ["_unit", "_state"];
        private ["_atrt"];
        TRACE_2("ace_unconscious",_unit,_state);

        _atrt = _unit getVariable [QGVAR(atrt_riding), objNull];
        _atrt call FUNC(atrt_dismount);
    }] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;
