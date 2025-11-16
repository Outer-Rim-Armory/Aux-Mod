#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Damage handler for the scripted health system for the AT-RT.
 *
 * Arguments:
 * 0: The AT-RT <OBJECT>
 *
 * Return Value:
 * Zero <NUMBER>
 *
 * Examples:
 * _atrt addEventHandler ["HandleDamage", BNA_KC_vehicles_fnc_atrt_handleDamage];
 *
 * Public: No
 */

params ["_atrt", "", "_damage"];
private ["_atrtHealth"];
TRACE_2("fnc_atrt_handleDamage",_atrt,_damage);

_atrtHealth = _atrt getVariable [QGVAR(health), ATRT_HEALTH];
_atrtHealth = (_atrtHealth - _damage) max 0;
_atrt setVariable [QGVAR(health), _atrtHealth, true];

if (_atrtHealth <= 0) then {
    _atrt call FUNC(atrt_deathEffects);
    _atrt call FUNC(atrt_dismount);
    _atrt setDamage 1;

    _atrt removeEventHandler [_thisEvent, _thisEventHandler];
};

0;
