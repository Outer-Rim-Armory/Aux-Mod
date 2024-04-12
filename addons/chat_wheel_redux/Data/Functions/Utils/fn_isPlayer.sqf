/*
 * Authors: DartRuffian
 * Checks if a given unit is a player, includes remote controlled units by default.
 *
 * Arguments:
 * unit: Object - The unit to check
 * includeRemoteControlled: Boolean - (Optional, default true) Include remote controlled units
 *
 * Return Value:
 * Boolean
 *
 * Example:
 * player call CWR_fnc_isPlayer; // true
 * [remoteControlledUnit, false] call CWR_fnc_isPlayer; // false
 */


params ["_unit", ["_includeRemoteControlled", true]];

isPlayer _unit or {
    _includeRemoteControlled && {
        !isNull (_unit getVariable ["bis_fnc_moduleRemoteControl_owner", objNull])
    }
};