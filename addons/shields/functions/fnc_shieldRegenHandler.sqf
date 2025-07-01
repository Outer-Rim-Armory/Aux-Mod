#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Creates a PFH to recharge the vehicle's shield
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: Delay between each regen attempt <NUMBER>
 * 2: Health to regenerate on each successful regen <NUMBER>
 *
 * Return Value:
 * The CBA PFH id <NUMBER>
 *
 * Example:
 * [objectParent ace_player, 3, 3] call BNA_KC_shields_shieldRegenHandler;
 *
 * Public: No
 */

params ["_vehicle", "_regenDelay", "_regenAmount"];
private ["_function", "_condition"];
TRACE_3("fnc_shieldRegenHandler",_vehicle,_regenDelay,_regenAmount);

[_vehicle, false, true] call FUNC(getHealth) params ["_health", "_maxHealth"];

_function = {
    params ["", "_vehicle", "_regenDelay", "_regenAmount", "_maxHealth"];
    private ["_currentTime", "_lastHit", "_health", "_newHealth"];

    if (isGamePaused) then {continue;};

    _currentTime = CBA_missionTime;
    _lastHit = _vehicle getVariable [QGVAR(lastHit), _currentTime];
    _health = _vehicle getVariable [QGVAR(health), _maxHealth];
    _newHealth = (_health + _regenAmount) min _maxHealth;

    TRACE_6("Attemping recharge",_vehicle,_regenDelay,_currentTime,_lastHit,_health,_newHealth);

    if (_health < _maxHealth and {
        _currentTime >= (_lastHit + _regenDelay)
    }) then {
        _vehicle setVariable [QGVAR(health), _newHealth, true];
        [QGVAR(shieldHealthChanged), [_vehicle, _health, _newHealth]] call CBA_fnc_localEvent;
    };
};

_condition = {
    params ["", "_vehicle"];
    alive _vehicle;
};

_exitCode = {
    // params ["_handle", "_vehicle", "_regenDelay", "_regenAmount", "_maxHealth"];
};

_regenHandler = [
    _function,
    _condition,
    _exitCode,
    _regenDelay,
    [_vehicle, _regenDelay, _regenAmount, _maxHealth]
] call EFUNC(core,tempPFH);

_regenHandler;
