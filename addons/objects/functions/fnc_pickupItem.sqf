#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deploys an item from a unit's inventory.
 *
 * Arguments:
 * 0: The unit deploying the item <OBJECT>
 * 1: The object to be picked up <OBJECT>
 * 2: The item to give the unit picking up the item <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "someItem"] call BNA_KC_objects_fnc_deployItem;
 */

params [
    ["_unit", objNull, [objNull]],
    ["_object", objNull, [objNull]],
    ["_item", "", [""]]
];
private ["_objectClass", "_objectName", "_deployTime"];
TRACE_3("fnc_pickupItem",_unit,_object,_item);

if (isNull _unit or {isNull _object or _item isEqualTo ""}) exitWith {};

_objectName = [
    configFile >> "CfgVehicles" >> typeOf _object,
    "displayName",
    "object"
] call BIS_fnc_returnConfigEntry;

_pickupTime = [
    configFile >> "CfgVehicles" >> typeOf _object,
    QGVAR(pickupTime),
    DEPLOYABLES_DEPLOY_ANIMATION_DURATION
] call BIS_fnc_returnConfigEntry;

[
    _pickupTime,
    [_unit, _object, _item],
    {
        // On Success
        _this#0 params ["_unit", "_object", "_item"];
        _unit playAction "PutDown";

        // Check if the player has enough space to store the item, if not, drop it on the ground
        if (_unit canAdd _item) then {
            _unit addItem _item;
        } else {
            cutText ["Not enough inventory space to pick up.", "PLAIN DOWN"];
            private _holder = "groundWeaponHolder" createVehicle [0, 0, 0];
            _holder setPosASL getPosASL _object;
            _holder setDir floor (random 360);

            _holder addItemCargoGlobal [_item, 1];
        };
        deleteVehicle _object;
    },
    {
        // On Failure
    },
    format ["Picking up %1...", _objectName],
    {
        // Condition
        _this#0 params ["_unit", "_object", "_item"];
        alive _unit and {
            lifeState _unit != "INCAPACITATED" and
            [_unit] call ace_common_fnc_isAwake;
        };
    }
] call ace_common_fnc_progressBar;