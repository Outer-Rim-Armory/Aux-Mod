#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Increases AI skills, primarily used for the Prototype B1 unit.
 *
 * Arguments:
 * 0: The unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * _unit call BNA_KC_droids_fnc_initB1Prototype
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
private [];
TRACE_1("fnc_initB1Prototype",_unit);

if (isNull _unit or {!alive _unit} or {!local _unit}) exitWith {};

_unit setSkill ["aimingAccuracy", 0.8];
_unit setSkill ["aimingShake", 0.8];
_unit setSkill ["aimingSpeed", 0.8];
_unit setSkill ["spotDistance", 0.8];
_unit setSkill ["spotTime", 0.7];
_unit setSkill ["courage", 0.7];
_unit setSkill ["reloadSpeed", 0.7];
_unit setSkill ["general", 0.7];
_unit setUnitAbility 75;
_unit setAnimSpeedCoef 1.35;
