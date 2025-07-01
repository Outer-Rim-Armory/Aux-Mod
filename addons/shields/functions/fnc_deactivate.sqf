#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deactivates a vehicle's shield
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * True if shield was deactivated, otherwise false <BOOL>
 *
 * Example:
 * objectParent ace_player call BNA_KC_shields_fnc_deactivate;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_hasShield", "_shieldHealth"];
TRACE_1("fnc_deactivate",_vehicle);

_hasShield = getNumber (configOf _vehicle >> QGVAR(hasShield));

if (isNull _vehicle or
    {_hasShield isEqualTo FALSE} or
    {!(_vehicle getVariable [QGVAR(isActive), false])}
) exitWith {false};


_vehicle setVariable [QGVAR(isActive), false, true];
{_x allowDamage true;} forEach crew _vehicle;

_vehicle call FUNC(removeShieldHandlers);

[QGVAR(shieldToggled), [
    _vehicle, false, _vehicle getVariable QGVAR(health)
]] call CBA_fnc_localEvent;

true;
