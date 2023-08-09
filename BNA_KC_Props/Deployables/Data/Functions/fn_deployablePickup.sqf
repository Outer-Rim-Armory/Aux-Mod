/*
 * Author: DartRuffian
 * Deletes a placed object, and gives the player the inventory item corresponding to the object.
 *
 * Arguments:
 * unit: Object - The unit picking up the object.
 * object: Object - The object to be removed.
 *
 * Return Value:
 * None
 *
 * Examples:
 * [player, cusorTarget] call BNAKC_fnc_deployablePickup;
 */


// Rough length of the "PutDown" animation
#define PUT_DOWN_ANIM_TIME 0.925
#define PROP(PATH, DEFVALUE, DATATYPE) [PATH, DEFVALUE, DATATYPE] call BNAKC_fnc_getConfigProperty
params ["_unit", "_object"];

if !(isText (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Deployable_item")) exitWith
{
    format ["%1 is not set up properly for BNAKC deployables", _object] call BNAKC_fnc_devLog;
};

private _objectClass = typeOf _object;
private _name = PROP((configFile >> "CfgVehicles" >> _objectClass >> "displayName"), "item", "text");
private _itemClass = PROP((configFile >> "CfgVehicles" >> _objectClass >> "BNA_KC_Deployable_item"), "", "text");
private _pickupTime = PROP((configFile >> "CfgVehicles" >> _objectClass >> "BNA_KC_Deployable_placeTime"), PUT_DOWN_ANIM_TIME, "number");

[
    _pickupTime,
    [_unit, _object, _itemClass],
    {
        // On Success
        _this#0 params ["_unit", "_object", "_itemClass"];
        _unit playAction "PutDown";

        // Check if the player has enough space to store the item, if not, drop it on the ground
        if (_unit canAdd _itemClass) then
        {
            _unit addItem _itemClass;
        }
        else
        {
            cutText ["Not enough space to pick up.", "PLAIN DOWN"];
            private _holder = "groundWeaponHolder" createVehicle [0, 0, 0];
            _holder setPosASL getPosASL _object;
            _holder setDir floor (random 360);

            _holder addItemCargoGlobal [_itemClass, 1];
        };
        deleteVehicle _object;
    },
    {
        // On Failure
    },
    format ["Picking up %1...", _name],
    {
        // Condition
        _this#0 params ["_unit", "_object", "_itemClass"];
        lifeState _unit != "INCAPACITATED" and // True if unit is uncon
        alive _unit and                        // True if unit is alive
        [_unit] call ace_common_fnc_isAwake    // True if unit is not dead and not unconcious
    }
] call ace_common_fnc_progressBar;