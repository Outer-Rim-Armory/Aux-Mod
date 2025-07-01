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
 * call BNA_KC_jammers_fnc_jammerHandlerServer;
 *
 * Public: No
 */

private ["_function", "_condition", "_exitCode", "_jammerHandler"];
TRACE_1("fnc_jammerHandlerServer",CBA_missionTime);

if (!isServer) exitWith {};

_function = {
    if (isGamePaused) then {continue;};

    {
        _y params ["_jammer"];
        if (isNull _jammer or {!alive _jammer}) then {
            [_x, _jammer] call FUNC(removeJammerServer);
            GVAR(activeJammers) deleteAt _x; // Manual removal for null objects
        };
    } forEach GVAR(activeJammers);
};

_condition = {
    count GVAR(activeJammers) > 0;
};

_exitCode = {
    INFO("No active jammers left, removing server PFH.");
    GVAR(jammerHandlerServer) = -1;
};

_jammerHandler = [
    _function,
    _condition,
    _exitCode,
    GVAR(updateRate)
] call EFUNC(core,tempPFH);

_jammerHandler;
