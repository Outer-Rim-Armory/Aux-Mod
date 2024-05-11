#include "..\script_component.hpp"
/*
 * Author: WebKnight
 * Rewritten by DartRuffian
 * Initalizes a B2 Super Battle Droid type unit.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#HandleDamage
 *
 * Return Value:
 * Always returns 0
 *
 * Examples:
 * _unit addEventHandler ["HandleDamage", BNA_KC_droids_fnc_handleDamage]
 *
 * Public: No
 */

params ["_unit", "", "_damage", "", "", "", "_instigator"];
private ["_health", "_hitCount", "_hitAnimation", "_idleAnimation", "_random"];
TRACE_3("fnc_handleDamage",_unit,_damage,_instigator);

_health = (_unit getVariable [QGVAR(health), -1]) - _damage;
_hitCount = (_unit getVariable [QGVAR(hitCount), -1]) - 1;

// No lazy eval gives roughly same performance
if (_health <= 0 and {_hitCount <= 0}) exitWith {
    _unit allowDamage true;
    [_unit, "#scripted", _instigator] call ace_medical_status_fnc_setDead;
    0;
};

_unit setVariable [QGVAR(health), _health, true];
_unit setVariable [QGVAR(hitCount), _hitCount, true];

systemChat format ["health: %1", _health];
systemChat format ["hitCount: %1", _hitCount];

_hitAnimation = _unit getVariable [QGVAR(hitAnim), ""];
_idleAnimation = _unit getVariable [QGVAR(idleAnim), ""];

_random = random 1;
if (_random >= 0 and {animationState _unit != _hitAnim}) then {
    _unit disableAI "ALL";
    _unit switchMove _hitAnim;

    [{
        params ["_unit", "_animation"];
        _unit enableAI "ALL";
        _unit switchMove _animation;
    }, [_unit, _idleAnim], 1.21] call CBA_fnc_waitAndExecute;
};

0;