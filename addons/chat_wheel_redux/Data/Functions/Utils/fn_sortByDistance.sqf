/*
 * Author: DartRuffian
 * Sorts an array of objects or array in format PositionAGL or Position2D.
 * Uses distance to compare
 *
 * Arguments:
 * posOrObject: Object or Array in format PositionAGL or Position2D - The unit or position to compare to.
 * array: Array of Objects and/or Arrays in format PositionAGL or Position2D - Array of objects and/or array to sort
 * order: Boolean - (Optional, default true) - Sorting order
 *
 * Return Value:
 * Array of objects or positions, sorted by distance
 *
 * Example:
 * [player, [[0,0,0], player]] call CWR_fnc_sortByDistance; // Returns [player, [0,0,0]]
 */


params ["_posOrObject", "_array", ["_order", true]];
private _sortByDistance = _array apply {
    [_posOrObject distance _x, _x];
};
_sortByDistance sort _order;
_array = _sortByDistance apply { _x#1 };
_array;
