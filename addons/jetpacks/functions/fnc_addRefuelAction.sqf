#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds a refuel action to an object.
 *
 * Arguments:
 * 0: Object to add the action to <OBJECT>
 * 1: Whether to create an action or not <NUMBER>
 *    - Used when calling the function from 3DEN Attributes
 *
 * Return Value:
 * None
 *
 * Examples:
 * cursorObject call BNA_KC_jetpacks_fnc_addRefuelAction;
 *
 * Public: No
 */

params [
    ["_object", objNull, [objNull]],
    ["_showAction", TRUE, [TRUE]]
];
TRACE_2("fnc_addRefuelAction",_object,_showAction);

if (_showAction != TRUE) exitWith {};

private _action = [QGVAR(refuel), "Refuel Jetpack", "\z\ace\addons\refuel\ui\icon_refuel_interact.paa", {
    params ["_target", "_player", "_params"];
    playSound3D ["\a3\missions_f_oldman\data\sound\refueling\refueling_start.wss", _player];

    private _jetpack = backpackContainer _player;
    private _maxFuel = _jetpack getVariable [QGVAR(maxFuel), getNumber (configOf _jetpack >> QGVAR(fuel))];
    [_player, _maxFuel] call FUNC(setFuel);
}, {
    params ["_target", "_player", "_params"];
    _player call FUNC(hasJetpack) and {[_player, true] call FUNC(getFuel) < 1};
}] call ace_interact_menu_fnc_createAction;


[_object, TYPE_ACE_INTERACT_ACTION, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;