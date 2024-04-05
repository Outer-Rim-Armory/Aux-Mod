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
 * call BNA_KC_jammers_fnc_jammerHandlerClient;
 *
 * Public: No
 */

private ["_function", "_condition", "_exitCode", "_jammerHandler"];
TRACE_1("fnc_jammerHandlerClient",CBA_missionTime);

if (!hasInterface) exitWith {};

_function = {
    if (isGamePaused) then {continue;};

    {
        _y params ["_jammer"];
        if (isNull _jammer) then {
            GVAR(activeJammers) deleteAt _x;
        };
    } forEach GVAR(activeJammers);
    [] call FUNC(updateInterference);
};

_condition = {
    count GVAR(activeJammers) > 0;
};

_exitCode = {
    INFO("No active jammers left, removing client PFH.");
    GVAR(jammerHandlerClient) = -1;
    ace_player setVariable ["tf_receivingDistanceMultiplicator", 1];
    ace_player setVariable ["tf_sendingDistanceMultiplicator", 1];
};

_jammerHandler = [
    _function,
    _condition,
    _exitCode,
    GVAR(updateRate)
] call EFUNC(core,tempPFH);

_jammerHandler;