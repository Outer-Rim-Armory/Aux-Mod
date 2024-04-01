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
 * [vehicle player, "driver", player] call BNA_KC_vehicles_fnc_setIntercomChannel;
 *
 * Public: No
 */

params ["_vehicle", "_role", "_unit"];
private [];
TRACE_3("fnc_setIntercomChannel",_vehicle,_role,_unit);

if !(isMultiplayer and _unit call ace_common_fnc_isPlayer) exitWith {};

switch (_role) do {
    case "driver";
    case "gunner": {
        _vehicle setVariable [format ["TFAR_IntercomSlot_%1", (netID _unit)], 1, true];
    };
    default {
        _vehicle setVariable [format ["TFAR_IntercomSlot_%1", (netID _unit)], 0, true];
    };
};
nil;