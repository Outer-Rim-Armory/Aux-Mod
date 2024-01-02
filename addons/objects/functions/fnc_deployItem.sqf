#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deploys an item from a unit's inventory.
 *
 * Arguments:
 * 0: The unit deploying the item <OBJECT>
 * 1: The item class name to deploy <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "someItem"] call BNA_KC_objects_fnc_deployItem;
 */

params [
    ["_unit", objNull, [objNull]],
    ["_item", "", [""]]
];
private ["_objectClass", "_objectName", "_deployTime"];
TRACE_2("fnc_deployItem",_unit,_item);

_objectClass = [
    configFile >> "CfgWeapons" >> _item,
    QGVAR(deployedObject),
    ""
] call BIS_fnc_returnConfigEntry;

if (isNull _unit or {_item isEqualTo "" or _objectClass isEqualTo ""}) exitWith {};

_objectName = [
    configFile >> "CfgVehicles" >> _objectClass,
    "displayName",
    "object"
] call BIS_fnc_returnConfigEntry;

_deployTime = [
    configFile >> "CfgWeapons" >> _item,
    QGVAR(deployTime),
    DEPLOYABLES_DEPLOY_ANIMATION_DURATION
] call BIS_fnc_returnConfigEntry;

[
    _deployTime,
    [_unit, _objectClass, _item],
    {
        // On Success
        _this#0 params ["_unit", "_objectClass", "_item"];
        private ["_direction", "_positionASL", "_object", "_action"];
        _unit playAction "PutDown";

        _unit removeItem _item;

        _direction = getDir _unit;
        _positionASL = getPosASL _unit vectorAdd [1.5 * sin _direction, 1.5 * cos _direction, 0.02];

        _object = _objectClass createVehicle [0, 0, 0];
        _object setPosASL _positionASL;

        _action = [
            format [QUOTE(GVAR(pickup_%1)), _x],
            "Pick Up",
            "",
            {
                params ["_target", "_player", "_params"];
                _params params ["_object", "_item"];
                [_player, _object, _item] call FUNC(pickupItem);
            },
            {true},
            {},
            [_object, _item],
            [0, 0, 1],
            2.5
        ] call ace_interact_menu_fnc_createAction;

        [_object, TYPE_ACE_INTERACT_ACTION, [], _action] call ace_interact_menu_fnc_addActionToObject;
    },
    {
        // On Failure
    },
    format ["Placing %1...", _objectName],
    {
        // Condition
        _this#0 params ["_unit", "_objectClass", "_item"];
        alive _unit and {
            lifeState _unit != "INCAPACITATED" and
            [_unit] call ace_common_fnc_isAwake;
        };
    }
] call ace_common_fnc_progressBar;