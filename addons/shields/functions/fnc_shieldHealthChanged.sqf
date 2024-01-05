#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Displays a message to the pilot when their vehicle's shield health changes
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: The old health <NUMBER>
 * 2: The new health <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["BNA_KC_shields_shieldHealthChanged", {call BNA_KC_shields_fnc_shieldHealthChanged}];
 *
 * Public: No
 */

params ["_vehicle", "_oldHealth", "_newHealth"];
private ["_maxHealth", "_message"];
TRACE_3("fnc_shieldHealthChanged",_vehicle,_oldHealth,_newHealth);

_maxHealth = ([_vehicle, false, true] call FUNC(getHealth)) select 1;
_message = format [
    "Strength <t color='%1'>%2%3</t>",
    [_health, _maxHealth] call FUNC(healthColor),
    _health,
    "%"
];

[_message, 1.5, currentPilot _vehicle] call ace_common_fnc_displaytextstructured;

nil;