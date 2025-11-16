#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Gives or removes medic permissions from a unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Medic level <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, 1] call BNA_KC_core_fnc_setMedic;
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_level", 1, [1]]
];
TRACE_2("fnc_setMedic",_unit,_level);

_unit setUnitTrait ["Medic", false];
_unit setVariable ["ace_medical_medicClass", _level, true];
