#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds damage, killed, and deleted EH to a vehicle with a shield.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * objectParent ace_player call BNA_KC_shields_fnc_addShieldHandlers;
 *
 * Public: No
 */

params ["_vehicle"];
private ["_damageHandler", "_getOutHandler"];
TRACE_1("fnc_addShieldHandlers",_vehicle);

_damageHandler = _vehicle addEventHandler ["HandleDamage", {
    call FUNC(handleDamage);
}];
_vehicle setVariable [QGVAR(damageHandler), _damageHandler, true];

_getOutHandler = _vehicle addEventHandler ["GetOut", {
    params ["", "", "_unit"];
    _unit allowDamage true;
}];
_vehicle setVariable [QGVAR(getOutHandler), _getOutHandler, true];

_regenDelay =
[
    configFile >> "CfgVehicles" >> typeOf _vehicle,
    QGVAR(regenDelay),
    SHIELD_REGEN_DELAY_DEFAULT
] call BIS_fnc_returnConfigEntry;

_regenAmount =
[
    configFile >> "CfgVehicles" >> typeOf _vehicle,
    QGVAR(regenAmount),
    SHIELD_REGEN_AMOUNT_DEFAULT
] call BIS_fnc_returnConfigEntry;

_regenHandler = [_vehicle, _regenDelay, _regenAmount] call FUNC(shieldRegenHandler);
_vehicle setVariable [QGVAR(regenHandler), _regenHandler];

nil;