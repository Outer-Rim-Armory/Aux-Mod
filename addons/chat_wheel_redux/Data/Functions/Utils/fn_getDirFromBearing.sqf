/*
 * Author: DartRuffian
 * Given a bearing, an integer ranging from 0 to 360.
 *
 * Arguments:
 * 0: Bearing <Number>
 *
 * Return Value:
 * String - The correlating direction
 *
 * Example:
 * 90 call CWR_fnc_getDirFromBearing; // Returns "East"
 */

params ["_bearing"];

private _direction = switch (true) do {
    case ((_bearing <= 22.5) OR (_bearing >= 337.5)): { "North" };
    case (_bearing <= 67.5): { "Northeast" };
    case (_bearing <= 112.5): { "East" };
    case (_bearing <= 157.5): { "Southeast" };
    case (_bearing <= 202.5): { "South" };
    case (_bearing <= 247.5): { "Southwest" };
    case (_bearing <= 292.5): { "West" };
    default { "Northwest" };
};

_direction;