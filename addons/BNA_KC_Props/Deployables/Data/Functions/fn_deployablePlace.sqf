/*
 * Author: DartRuffian
 * Deletes a placed object, and gives the player the inventory item corresponding to the object.
 *
 * Arguments:
 * unit: Object - The unit picking up the object.
 * itemClass: String - Class name of the inventory item to place.
 *
 * Return Value:
 * None
 *
 * Examples:
 * [player, 'BNA_KC_Deployable_MedicalDroid_Item'] call BNAKC_fnc_deployablePlace;
 */


// Rough length of the "PutDown" animation
#define PUT_DOWN_ANIM_TIME 0.925
#define PROP(PATH, DEFVALUE, DATATYPE) [PATH, DEFVALUE, DATATYPE] call BNAKC_fnc_getConfigProperty
params ["_unit", "_itemClass"];

if !(isText (configFile >> "CfgWeapons" >> _itemClass >> "BNA_KC_Deployable_object")) exitWith
{
    format ["%1 is not set up properly for BNAKC deployables", _itemClass] call BNAKC_fnc_devLog;
};

private _objectClass = PROP((configFile >> "CfgWeapons" >> _itemClass >> "BNA_KC_Deployable_object"), "", "text");
private _name = PROP((configFile >> "CfgVehicles" >> _objectClass >> "displayName"), "item", "text");
private _placedownTime = PROP((configFile >> "CfgVehicles" >> _objectClass >> "BNA_KC_Deployable_placeTime"), PUT_DOWN_ANIM_TIME, "number");

[
    _placedownTime,
    [_unit, _objectClass, _itemClass],
    {
        // On Success
        _this#0 params ["_unit", "_objectClass", "_itemClass"];
        _unit playAction "PutDown";

        _unit removeItem _itemClass;

        private _direction = getDir _unit;
        private _position = getPosASL _unit vectorAdd [1.5 * sin _direction, 1.5 * cos _direction, 0.02];

        // Position will be off if you just created the object at the location
        private _object = _objectClass createVehicle [0, 0, 0];
        _object setPosASL _position;
    },
    {
        // On Failure
        // _this#0 params ["_unit", "_objectClass", "_itemClass"];
    },
    format ["Placing %1...", _name],
    {
        // Condition
        _this#0 params ["_unit", "_objectClass", "_itemClass"];
        lifeState _unit != "INCAPACITATED" and // True if unit is uncon
        alive _unit and                        // True if unit is alive
        [_unit] call ace_common_fnc_isAwake    // True if unit is not dead and not unconcious
    }
] call ace_common_fnc_progressBar;