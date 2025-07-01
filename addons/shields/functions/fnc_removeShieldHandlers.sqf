#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Removes damage, killed, and deleted EH from a vehicle with a shield.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * objectParent ace_player call BNA_KC_shields_fnc_removeShieldHandlers;
 *
 * Public: No
 */

params ["_vehicle"];
private ["_damageHandler", "_getOutHandler"];
TRACE_1("fnc_addShieldHandlers",_vehicle);

_damageHandler = _vehicle getVariable [QGVAR(damageHandler), -1];
_getOutHandler = _vehicle getVariable [QGVAR(getOutHandler), -1];

_vehicle setVariable [QGVAR(damageHandler), nil, true];
_vehicle setVariable [QGVAR(getOutHandler), nil, true];

_vehicle removeEventHandler ["HandleDamage", _damageHandler];
_vehicle removeEventHandler ["GetOut", _getOutHandler];

nil;
