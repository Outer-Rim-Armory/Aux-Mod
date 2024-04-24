#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Create an ACE action for each of a vehicle's intercom channels.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * Array of ACE actions <ARRAY>
 *
 * Examples:
 * ace_player call BNA_KC_vehicles_fnc_intercom_switchChannelExternalInsertChildren;
 *
 * Public: No
 */

params ["_player"];
private ["_vehicle", "_channels", "_actions"];
TRACE_1("fnc_intercom_switchChannelExternalInsertChildren",_player);

_vehicle = _player getVariable ["TFAR_externalIntercomVehicle", objNull];

_channels = "true" configClasses (configOf _vehicle >> "ACE_SelfActions" >> "TFAR_IntercomChannel");
_channels = _channels apply {[getText (_x >> "displayName"), getNumber (_x >> QGVAR(radioCode))]};

_actions = [];
{
    _x params ["_name", "_channel"];
    private ["_childStatement", "_action"];

    _childStatement = {
        params ["_target", "_player", "_params"];
        _params params ["_name", "_channel"];

        [_target, _player, _channel] call FUNC(setChannel);
    };

    _action = [format [QGVAR(setExternalChannel_%1), _x], _name, "", _childStatement, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
    _actions pushBack [_action, [], _target];
} forEach _channels;

_actions;