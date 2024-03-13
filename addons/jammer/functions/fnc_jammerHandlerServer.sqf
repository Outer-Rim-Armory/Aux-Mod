#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Server PFH for
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
    private ["_jammers", "_toRemove"];
    if (isGamePaused) then {continue;};

    systemChat "running";

    {_x call FUNC(removeJammer)} forEach (GVAR(activeJammers) select {!alive (_x#0)});
};

_condition = {
    GVAR(activeJammers) isNotEqualTo [];
};

_exitCode = {
    INFO("No active jammers left, removing server PFH");
    GVAR(jammerHandler) = -1;
    systemChat "exit";
};

_jammerHandler = [
    _function,
    _condition,
    _exitCode,
    GVAR(updateRate)
] call EFUNC(core,tempPFH);

_jammerHandler;