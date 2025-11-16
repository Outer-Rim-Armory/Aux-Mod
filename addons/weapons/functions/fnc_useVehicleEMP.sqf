#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates a vehicle's EMP effect
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * objectParent ace_player call FUNC(canUseVehicleEMP);
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_cooldown", "_lastUsedEMP"];
TRACE_1("fnc_useVehicleEMP",_vehicle);

_vehicle setVariable [QGVAR(lastUsedEMP), CBA_missionTime];
_vehicle call FUNC(empGrenade);

nil;
