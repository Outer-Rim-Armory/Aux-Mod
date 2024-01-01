#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Gets properties assigned in an object's config and creates an healing area around the given object.
 *
 * Arguments:
 * 0: Source for healing <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _source call BNA_KC_medical_fnc_areaHealerInit;
 */


params [
    ["_object", objNull, [objNull]]
];
private ["_radius", "_rate", "_maxPatients"];
TRACE_1("fnc_areaHealerInit",_object);

if (isNull _object) exitWith {};

_radius = [
    configFile >> "CfgVehicles" >> typeOf _object,
    QGVAR(areaHealRadius),
    -1
] call BIS_fnc_returnConfigEntry;

_rate = [
    configFile >> "CfgVehicles" >> typeOf _object,
    QGVAR(areaHealRate),
    -1
] call BIS_fnc_returnConfigEntry;

_maxPatients = [
    configFile >> "CfgVehicles" >> typeOf _object,
    QGVAR(areaHealMaxPatients),
    0
] call BIS_fnc_returnConfigEntry;

[_object, _radius, _rate, _maxPatients] call FUNC(areaSlowHeal);