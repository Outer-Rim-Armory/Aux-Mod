#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if a unit can switch a vehicle's intercom to a specific channel.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 * 1: The unit <OBJECT>
 * 2: The channel id <NUMBER>
 *
 * Return Value:
 * True if channel can be switched, otherwise false <BOOL>
 *
 * Examples:
 * [_vehicle, ace_player, 1] call BNA_KC_intercom_fnc_canSwitchChannel;
 *
 * Public: No
 */

params ["_vehicle", "_player", "_channel"];
private ["_intercom"];
TRACE_3("fnc_canSwitchChannel",_vehicle,_player,_channel);

_intercom = _vehicle getVariable [format ["TFAR_IntercomSlot_%1", netId ace_player], -2];

if (_intercom == -2) then {
    _intercom = _vehicle getVariable ["TFAR_defaultIntercomSlot", TFAR_defaultIntercomSlot];
};

_intercom != _channel;
