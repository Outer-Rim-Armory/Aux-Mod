#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Small utility function to temporarily disable damage on an object for a set time or until a condition is met.
 *
 * Arguments:
 * 0: The object <OBJECT>
 * 1: Time in seconds until re-enabling damage <NUMBER>
 * 2: Condition to check, overwrites timer (optional: default {true}) <CODE>
 *      Passed Data: [_object]
 * 3: Timeout in seconds for condition (optional, default: 30) <NUMBER>
 * 4: Timeout code (optional, default: {_this#0 allowDamage true;}) <CODE>
 *      Responsibility is on you to re-enable damage in the timeout.
 *      Passed Data: [_object]
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, 5] call BNA_KC_core_fnc_tempDisableDamage;
 *
 * Public: Yes
 */

params [
    ["_object", objNull, [objNull]],
    ["_timer", -1, [0]],
    ["_condition", {true}, [{}]],
    ["_timeout", 30, [0]],
    ["_timeoutCode", {_this#0 allowDamage true;}, [{}]]
];
TRACE_5("fnc_tempDisableDamage",_object,_timer,_condition,_timeout,_timeoutCode);

if (!alive _object) exitWith {};

// Disable damage in the then block so invalid params don't disable damage
if (_timer > 0) then {
    _object allowDamage false;
    [{_this#0 allowDamage true;}, [_object], _timer] call CBA_fnc_waitAndExecute;
};

if (_condition isNotEqualTo {true}) then {
    _object allowDamage false;
    [_condition, {_this#0 allowDamage true;}, [_object], _timeout, _timeoutCode] call CBA_fnc_waitUntilAndExecute;
};

nil;
