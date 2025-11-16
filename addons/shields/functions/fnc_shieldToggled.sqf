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
 * [QGVAR(shieldToggled), LINKFUNC(shieldToggled)];
 *
 * Public: No
 */

params ["_vehicle", "_isActive", "_health"];
private ["_message"];
TRACE_3("fnc_onShieldToggle",_vehicle,_isActive,_health);

_message = "";

if (_isActive) then {
    [_vehicle, true, true] call FUNC(getHealth) params ["_health", "_maxHealth"];
    _message = format [
        "Shield <t color='#00FF00'>Enabled</t> | Strength <t color='%1'>%2%3</t>",
        [_health, _maxHealth] call FUNC(healthColor),
        _health,
        "%"
    ];
} else {
    _message = "Shield <t color='#FF0000'>Disabled</t>";
};

["ace_common_displayTextStructured", [_message, 1.5, currentPilot _vehicle], currentPilot _vehicle] call CBA_fnc_targetEvent;

nil;
