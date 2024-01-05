#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Displays a message to the pilot when a vehicle's shield it toggled.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: Whether the shield is enabled <BOOL>
 * 2: The current health of the shield <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["BNA_KC_shields_shieldToggled", {call BNA_KC_shields_fnc_shieldToggled}];
 */

params ["_vehicle", "_isActive", "_health"];
private ["_message"];
TRACE_3("fnc_onShieldToggle",_vehicle,_isActive,_health);

_message = switch (_isActive) do {
    case true: {
        [_vehicle, true, true] call FUNC(getHealth) params ["_health", "_maxHealth"];
        format [
            "Shield <t color='#00FF00'>Enabled</t> | Strength <t color='%1'>%2%3</t>",
            [_health, _maxHealth] call FUNC(healthColor),
            _health,
            "%"
        ];
    };
    default {
        "Shield <t color='#FF0000'>Disabled</t>";
    };
};

[_message, 1.5, currentPilot _vehicle] call ace_common_fnc_displaytextstructured;

nil;