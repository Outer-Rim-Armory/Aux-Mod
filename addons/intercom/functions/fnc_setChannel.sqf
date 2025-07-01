#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Sets a unit's intercom to the specified channel.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: The unit <OBJECT>
 * 2: The channel id (optional, default: -2) <NUMBER>
 *    - If -2, will use vehicle or setting's default intercom channel
 *
 * Return Value:
 * None
 *
 * Examples:
 * [_vehicle, ace_player, 1] call BNA_KC_intercom_fnc_setChannel;
 *
 * Public: No
 */

params ["_vehicle", "_player", ["_channel", -2]];
TRACE_3("fnc_setChannel",_vehicle,_player,_channel);

if (_channel == -2) then {
    _channel = _vehicle getVariable ["TFAR_defaultIntercomSlot", TFAR_defaultIntercomSlot];
};

_vehicle setVariable [format ["TFAR_IntercomSlot_%1", netId _player], _channel, true];
nil;
