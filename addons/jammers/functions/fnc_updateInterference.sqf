#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Updates a player's interference based on their distance to radio jammers.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNA_KC_jammers_fnc_updateInterference;
 *
 * Public: No
 */

private ["_averageInterference"];
if (!hasInterface) exitWith {};

INFO_1("Updating interference for %1",ace_player);

_averageInterference = 1;

{
    (GVAR(activeJammers) get _x) params ["_jammer", "_radius", "_strength"];
    private ["_distance", "_distanceFactor", "_signal", "_interference"];

    if (isNull _jammer) then {
        GVAR(activeJammers) deleteAt _x;
    };

    if !(_jammer getVariable [QGVAR(isActive), false]) then {continue;};

    _distance = ace_player distance _jammer;
    if (_distance < _radius) then {
        _distanceFactor = _distance / _radius;
        _signal =  1/(1 + ((_distanceFactor / (1 -_distanceFactor)) ^ -2.3));
        _interference = _strength * (1 - _signal) * GVAR(interferenceFactor);

        if(_averageInterference != 1) then {
            _averageInterference = _averageInterference max _interference;
            _averageInterference = CLAMP(_averageInterference,1,_strength);
        } else {
            _averageInterference = _interference;
        };
    };
    TRACE_7("updateInterference loop",_radius,_strength,_distance,_distanceFactor,_signal,_interference,_averageInterference);
} forEach keys GVAR(activeJammers);

_averageInterference = 0.1 max _averageInterference;
ace_player setVariable ["tf_receivingDistanceMultiplicator", _averageInterference];
ace_player setVariable ["tf_sendingDistanceMultiplicator", 1/_averageInterference];
nil;
