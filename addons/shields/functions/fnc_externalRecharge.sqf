#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Starts to fully recharge a vehicle's shield
 *
 * Arguments:
 * 0: The vehicle to recharge <OBJECT>
 * 1: The unit recharging the vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, ace_player] call BNA_KC_shields_fnc_externalRecharge;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]],
    ["_unit", objNull, [objNull]]
];
private ["_hasShield", "_shieldHealth"];
TRACE_2("fnc_canExternalRecharge",_vehicle,_unit);

_regenDelay = getNumber (configOf _vehicle >> QGVAR(regenDelay));

_vehicle setVariable [QGVAR(isRecharging), true, true];
_vehicle call FUNC(deactivate);

[_regenDelay * 1.5, [_vehicle, _unit], {
    // Finished
    _this#0 params ["_vehicle", "_unit"];
    private ["_maxHealth"];

    _maxHealth = getNumber (configOf _vehicle >> QGVAR(health));

    _vehicle setVariable [QGVAR(health), _maxHealth];
    _vehicle setVariable [QGVAR(isRecharging), nil, true];

    ["ace_common_displayTextStructured", ["Recharge complete", 1.5, _unit], _unit] call CBA_fnc_targetEvent;
}, {
    // Failed
    _this#0 params ["_vehicle", "_unit"];

    _vehicle setVariable [QGVAR(isRecharging), nil, true];
    ["ace_common_displayTextStructured", ["Recharge cancelled", 1.5, _unit], _unit] call CBA_fnc_targetEvent;
}, "Recharging shield", {
    // Condition
    _this#0 params ["_vehicle", "_unit"];
    [_vehicle, _unit] call FUNC(canExternalRecharge);
}] call ace_common_fnc_progressBar;

nil;
