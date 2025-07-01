/*
 * Authors: DartRuffian
 * Returns an array of players near a given position.
 *
 * Arguments:
 * position: Array in format PositionATL - Center of the area to check
 * radius: Number - Radius of the area to check
 * includeRemoteControlled: Boolean - (Optional, default true) Include remote controlled units
 *
 * Return Value:
 * Array of players
 *
 * Example:
 * [getPosATL player, 30] call CWR_fnc_getNearbyPlayers; // [player, unit1, remoteControlledUnit2]
 * [getPosATL player, 30, false] call CWR_fnc_getNearbyPlayers; // [player, unit1]
 */


params ["_position", "_radius", "_includeRemoteControlled"];

private _nearbyUnits = _position nearEntities ["CAManBase", _radius];
_nearbyUnits = _nearbyUnits select { [_x, _includeRemoteControlled] call CWR_fnc_isPlayer; };

_nearbyUnits;
