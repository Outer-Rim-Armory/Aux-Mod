#include "script_component.hpp"

["CBA_settingsInitialized", {
    [QGVAR(autoEject), {
        params ["_unit"];
        if (_unit isNotEqualTo ace_player) exitWith {};
        INFO_1("Ejecting player from vehicle",_unit);

        if (GVAR(autoEject_invincibleTimer) > 0) then {
            _unit allowDamage false;
            [{_this allowDamage true;}, _unit, GVAR(autoEject_invincibleTimer)] call CBA_fnc_waitAndExecute;
        };

        if (alive _unit and {(_unit getVariable ["ace_isUnconscious", false])}) then {
            "You have been ejected." call ace_common_fnc_displayTextStructured;
            moveOut _unit;
        };
    }] call CBA_fnc_addEventHandler;

    ["ace_unconscious", {
        params ["_unit", "_state"];
        private ["_atrt"];
        TRACE_2("ace_unconscious",_unit,_state);

        _atrt = _unit getVariable [QGVAR(atrt_riding), objNull];
        _atrt call FUNC(atrt_dismount);
    }] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;