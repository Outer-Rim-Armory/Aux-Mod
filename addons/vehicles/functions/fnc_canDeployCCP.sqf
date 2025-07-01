#include "..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Determines if a player can deploy a vehicle's CCP.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * True if player can deploy CCP, otherwise false <BOOL>
 *
 * Example:
 * [_vehicle, player] call BNA_KC_vehicles_fnc_canDeployCCP
 *
 * Public: No
 */

params ["_vehicle", "_player"];
TRACE_2("fnc_canDeployCCP",_vehicle,_player);

alive _vehicle && alive _player && fuel _vehicle > 0 && !(_vehicle getVariable [QGVAR(deployedCCP), false]);
