#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a unit can disable their vehicle's shield.
 *
 * Arguments:
 * 0: The unit to check <OBJECT>
 *
 * Return Value:
 * Whether the unit can deactivate their vehicle's shield <BOOL>
 *
 * Example:
 * ace_player call BNA_KC_shields_canDeactivate;
 */

params [
    ["_unit", objNull, [objNull]]
];
private ["_vehicle"];
TRACE_1("fnc_canDeactivate",_unit);

_vehicle = objectParent _unit;

if (isNull _vehicle or {
    !alive _vehicle or
    _unit isNotEqualTo (currentPilot _vehicle) or
    !(_vehicle getVariable [QGVAR(shieldActive), false])
}) exitWith {false};

true;