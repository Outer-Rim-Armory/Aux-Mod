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


params ["_unit", "_itemClass"];

if !(isText (configFile >> "CfgWeapons" >> _itemClass >> "BNA_KC_Deployable_Object")) exitWith
{
    format ["%1 is not set up properly for BNAKC deployables", _itemClass] call BNAKC_fnc_devLog;
};

private _objClass = getText(configFile >> "CfgWeapons" >> _itemClass >> "BNA_KC_Deployable_Object");
_unit removeItem _itemClass;

_unit playAction "PutDown";
[
    {
        params ["_unit", "_objClass"];

        private _direction = getDir _unit;
        private _position = getPosASL _unit vectorAdd [1.5 * sin _direction, 1.5 * cos _direction, 0.02];

        // Position will be off if you just created the object at the location
        private _object = _objClass createVehicle [0, 0, 0];
        _object setPosASL _position;
    },
    [_unit, _objClass],
    0.925
] call CBA_fnc_waitAndExecute;