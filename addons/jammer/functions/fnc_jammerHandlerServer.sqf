#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Server PFH for tracking radio jammers.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * The CBA PFH id <NUMBER>
 *
 * Example:
 * call BNA_KC_jammer_fnc_jammerHandlerServer;
 *
 * Public: No
 */

private ["_function", "_condition", "_exitCode", "_jammerHandler"];
TRACE_1("fnc_jammerHandlerServer",CBA_missionTime);

if (!isServer) exitWith {};

_function = {
    if (isGamePaused) then {continue;};

    [GVAR(activeJammers), {
        if (!alive _key) then {
            _key call FUNC(removeJammerServer);
        };
        alive _key;
    }] call CBA_fnc_hashFilter;
    [QGVAR(updateInterference)] call CBA_fnc_globalEvent;
};

_condition = {
    [GVAR(activeJammers)] call CBA_fnc_hashSize > 0;
};

_exitCode = {
    INFO("No active jammers left, removing server PFH");
    GVAR(jammerHandler) = -1;
};

_jammerHandler = [
    _function,
    _condition,
    _exitCode,
    GVAR(updateRate)
] call EFUNC(core,tempPFH);

_jammerHandler;