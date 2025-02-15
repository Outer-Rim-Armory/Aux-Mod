#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Removes a vehicle's CCP.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [_vehicle, player] call BNA_KC_vehicles_fnc_undeployCCP
 *
 * Public: No
 */

params ["_vehicle", "_player"];
TRACE_2("fnc_undeployCCP",_vehicle,_player);

// CBA_fnc_targetEvent doesn't support machine network ids, so we have to use remoteExecCall
private _owner = _vehicle getVariable [QGVAR(ccpOwner), clientOwner];
if (clientOwner != _owner) exitWith {
    [_vehicle, _player] remoteExecCall [QFUNC(undeployCCP), _owner];
};

_vehicle setVariable [QGVAR(deployedCCP), nil, true];
[_vehicle, "blockEngine", QGVAR(deployedCCP), false] call ace_common_fnc_statusEffect_set;

private _handle = _vehicle getVariable [QGVAR(ccpHandle), -1];
_handle call CBA_fnc_removePerFrameHandler;