#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a unit can enable their vehicle's shield.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 *
 * Return Value:
 * Whether the unit can activate their vehicle's shield <BOOL>
 *
 * Example:
 * ace_player call BNA_KC_shields_fnc_canActivate;
 */

params [
    ["_unit", objNull, [objNull]]
];
private ["_vehicle", "_hasShield"];
TRACE_1("fnc_canActivate",_unit);

_vehicle = objectParent _unit;
_hasShield = [
    configFile >> "CfgVehicles" >> typeOf _vehicle,
    QGVAR(hasShield),
    FALSE
];

if (isNull _vehicle or {
    !alive _vehicle or
    _unit isNotEqualTo (currentPilot _vehicle) or
    _hasShield isEqualTo FALSE or
    _vehicle getVariable [QGVAR(isActive), false] or
    _vehicle getVariable [QGVAR(isRecharging), false]
}) exitWith {false};

true;