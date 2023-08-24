/*
 * Author: DartRuffian
 * Sorts an array of units by the number of wounds each unit has.
 *
 * Arguments:
 * units: Array - Array of objects, non-unit objects are discarded.
 *
 * Return Value:
 * None
 *
 * Examples:
 * [player, unit1, unit3, tank1] call BNAKC_fnc_sortUnitsByInjuries; // Returns unit3, player, unit1; tank1 is discarded
 */

params ["_units"];

// Filters non-unit objects
_units = _units select { _x isKindOf "CAManBase"; };

_sortByWounds = _units apply
{
    [
        count (_x getVariable ["ace_medical_openWounds", []]),
        _x
    ]
};
_sortByWounds sort false; // Sort by most wounds (longest array)
_units = _sortByWounds apply { _x#1 };

_units;