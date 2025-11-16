#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns an array of all nearby units, including units in vehicles.
 *
 * Arguments:
 * See https://github.com/acemod/ACE3/blob/master/addons/medical_blood/functions/fnc_createBlood.sqf
 *
 * Return Value:
 * None
 *
 * Examples:
 * ["ace_medical_blood_bloodDropCreated", LINKFUNC(bloodDropCreated)] call CBA_fnc_addEventHandler;
 *
 * Public: No
 */

params [
    ["_bloodDrop", objNull, [objNull]],
    ["_source", objNull, [objNull]]
];
private ["_canBleed"];
TRACE_2("fnc_bloodDropCreated",_bloodDrop,_source);

if (isNull _bloodDrop or {
    isNull _source
}) exitWith {};

_canBleed = [
    configFile >> "CfgWeapons" >> uniform _source,
    QGVAR(canBleed),
    TRUE
] call BIS_fnc_returnConfigEntry;

if (_canBleed isEqualTo FALSE) then {deleteVehicle _bloodDrop};

nil;
