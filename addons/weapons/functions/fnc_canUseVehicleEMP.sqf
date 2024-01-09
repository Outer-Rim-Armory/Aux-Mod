#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns whether the vehicle can activate its EMP effect
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * Whether the EMP can be activated <BOOL>
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
TRACE_1("fnc_canUseVehicleEMP",_vehicle);

systemChat str _this;

if (isNull _vehicle or {
	!isEngineOn _vehicle or
	getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> QGVAR(hasVehicleEMP)) == FALSE
}) exitWith {false};

_cooldown = [
	configFile >> "CfgVehicles" >> typeOf _vehicle,
	QGVAR(vehicleEMPCooldown),
	EMP_VEHICLE_COOLDOWN_DEFAULT
] call BIS_fnc_returnConfigEntry;

_lastUsedEMP = _vehicle getVariable [QGVAR(lastUsedEMP), -_cooldown];

if ((CBA_missionTime - _lastUsedEMP) <= _cooldown) exitWith {false};

true;