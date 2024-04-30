#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Sets a player's intercom channel based on their role.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: The unit's role <STRING>
 * 2: The unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [vehicle player, "driver", player] call BNA_KC_intercom_fnc_autoSetChannell;
 *
 * Public: No
 */

params ["_vehicle", "_role", "_unit"];
private [];
TRACE_3("fnc_autoSetChannel",_vehicle,_role,_unit);

if !(GVAR(autoSetChannel_enabled)) exitWith {};

switch (_role) do {
    case "driver";
    case "gunner": {
        [_vehicle, _unit, 1] call FUNC(setChannel);
    };
    default {
        [_vehicle, _unit] call FUNC(setChannel);
    };
};
nil;