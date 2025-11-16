#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles damage while a vehicle has a shield
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#HandleDamage
 *
 * Return Value:
 * Damage state of the given selection <NUMBER>
 *
 * Example:
 * objectParent ace_player addEventHandler ["HandleDamage", {call BNA_KC_shields_handleDamage;}];
 *
 * Public: No
 */

params ["_vehicle", "_selection", "_damage"];
private ["_health", "_newHealth", "_currentTime", "_lastHit"];
TRACE_3("fnc_handleDamage",_vehicle,_selection,_damage);

_health = _vehicle call FUNC(getHealth);
_newHealth = (_health - _damage) max 0;
_vehicle setVariable [QGVAR(health), _newHealth, true];

if (_damage > 0) then {
    [QGVAR(shieldHealthChanged), [_vehicle, _health, _newHealth]] call CBA_fnc_localEvent;
};

if (_newHealth isEqualTo 0) then {
    _vehicle call FUNC(deactivate);
};

_currentTime = CBA_missionTime;
_lastHitSound = _vehicle getVariable [QGVAR(lastHitSound), -SHIELD_HIT_SOUND_COOLDOWN];

if ((_currentTime - _lastHitSound) >= SHIELD_HIT_SOUND_COOLDOWN) then {
    playSound3D [
        format ["\lsb_sounds\deflector\shield_hit%1.wss", floor (random 7) + 1],
        _vehicle
    ];
    _vehicle setVariable [QGVAR(lastHitSound), _currentTime];
};
_vehicle setVariable [QGVAR(lastHit), _currentTime];

// Set damage on selection
_vehicle getHit _selection;
