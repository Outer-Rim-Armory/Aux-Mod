#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds a UserAction (scrollwheel) to an object. The parameters
 * used are intended for the rank / loadout gonks.
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Action name <STRING>
 * 2: Statement <CODE>
 * 3: Parameters (optional, default: []) <ANY>
 * 4: Condition (optional, default: "true") <STRING>
 * 5: Order (optional, default: 0) <NUMBER>
 * 6: Radius in meters (optional, default: 3) <NUMBER>
 *
 * Return Value:
 * The action id <NUMBER>
 *
 * Example:
 * "Rifleman" call BNA_KC_gonks_fnc_addAction;
 *
 * Public: No
 */

params [
    "_object",
    "_name",
    "_statement",
    ["_parameters", []],
    ["_condition", "true", [""]],
    ["_order", 0, [0]],
    ["_radius", 3, [0]]
];
private ["_actionId"];
TRACE_7("fnc_addAction",_object,_name,_statement,_parameters,_condition,_order,_radius);

if (isNull _object) exitWith {};

_actionId = _object addAction [
    _name,
    _statement,
    _parameters,
    _order,
    false,
    false,
    "",
    _condition,
    _radius
];

_actionId;