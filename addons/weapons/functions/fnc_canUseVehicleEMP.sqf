#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns whether the vehicle can activate its EMP effect.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * True if EMP can be used, otherwise false <BOOL>
 *
 * Examples:
 * objectParent ace_player call BNA_KC_weapons_fnc_canUseVehicleEMP;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_cooldown", "_lastUsedEMP"];
TRACE_1("fnc_canUseVehicleEMP",_vehicle);

if (isNull _vehicle or
    {!isEngineOn _vehicle} or
    {getNumber (configOf _vehicle >> QGVAR(hasVehicleEMP)) != TRUE}
) exitWith {false};

_cooldown = getNumber (configOf _vehicle >> QGVAR(vehicleEMPCooldown));
_lastUsedEMP = _vehicle getVariable [QGVAR(lastUsedEMP), -_cooldown];

if ((CBA_missionTime - _lastUsedEMP) <= _cooldown) exitWith {false};

true;
