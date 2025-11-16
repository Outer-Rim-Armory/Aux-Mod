#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Determines if a player can pack up a vehicle's CCP.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * True if player can undeploy CCP, otherwise false <BOOL>
 *
 * Example:
 * [_vehicle, player] call BNA_KC_vehicles_fnc_canUndeployCCP
 *
 * Public: No
 */

params ["_vehicle", "_player"];
TRACE_2("fnc_canUndeployCCP",_vehicle,_player);

alive _vehicle && alive _player && fuel _vehicle > 0 && _vehicle getVariable [QGVAR(deployedCCP), false];
