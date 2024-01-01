#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit is mostly healed. Not every stat is checked, just common variables such as open wounds, blood volume, etc.
 *
 * Arguments:
 * 0: Array of units <ARRAY>
 * 1: Order to sort units in (optional, default: false) <BOOL
 *    - True: Ascending order (least wounds)
 *    - False: Descending order (most wounds)
 *
 * Return Value:
 * The sorted array <ARRAY>
 *
 * Example:
 * [_units] call BNA_KC_medical_fnc_sortByInjuries;
 */


params [
    ["_units", []],
    ["_order", false, [true]]
];
private ["_unitsAndWounds"];
TRACE_2("fnc_sortByInjuries", _units, _order);

_units = _units select {_x isKindOf "CAManBase"};
if (_units isEqualTo []) exitWith {_units;};

_unitsAndWounds = _units apply {[
    count (_x getVariable ["ace_medical_openWounds", []]),
    _x
]};

_unitsAndWounds sort false;
_units = _unitsAndWounds apply {_x#1};

_units;