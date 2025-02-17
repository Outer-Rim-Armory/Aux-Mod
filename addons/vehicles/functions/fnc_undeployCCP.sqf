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

private _owner = _vehicle getVariable [QGVAR(ccpOwner), clientOwner];
[QGVAR(removeCCP), _vehicle, _owner] call CBA_fnc_ownerEvent;

_vehicle setVariable [QGVAR(deployedCCP), nil, true];
[_vehicle, "blockEngine", QGVAR(deployedCCP), false] call ace_common_fnc_statusEffect_set;
[QEGVAR(core,forceSay3D), [_vehicle, QCLASS(Undeploy), 50]] call CBA_fnc_globalEvent;

{
    (_x select 0) setVariable [QEGVAR(medical,canBeHealed), false, true]; // Variable is reset when the PFH is removed
} forEach (_vehicle getVariable [QEGVAR(medical,currentPatients), []]);