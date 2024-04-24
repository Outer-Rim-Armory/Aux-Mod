#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Sets a unit's intercom to the specified channel.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: The unit <OBJECT>
 * 2: The channel id <NUMBER>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [_vehicle, ace_player, 1] call BNA_KC_vehicles_fnc_intercom_setChannel;
 *
 * Public: No
 */

params ["_vehicle", "_player", "_channel"];
TRACE_3("fnc_intercom_setChannel",_vehicle,_player,_channel);

_vehicle setVariable [format ["TFAR_IntercomSlot_%1", netId _player], _channel, true];
nil;