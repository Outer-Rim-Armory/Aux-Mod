#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Sorts an array of units based on the number of open wounds they have.
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
 *
 * Public: Yes
 */

params [
    ["_units", []],
    ["_order", false, [true]]
];
private ["_unitsAndWounds"];
TRACE_2("fnc_sortByInjuries",_units,_order);

if !(_units isEqualType []) then {_units = [_units];};
_units = _units select {_x isKindOf "CAManBase"};
if (_units isEqualTo []) exitWith {_units;};

_unitsAndWounds = _units apply {[
    count (_x getVariable ["ace_medical_openWounds", []]),
    _x
]};

_unitsAndWounds sort _order;
_units = _unitsAndWounds apply {_x#1};

_units;
