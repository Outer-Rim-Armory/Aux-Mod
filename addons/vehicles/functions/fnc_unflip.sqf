#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Unflips a vehicle.
 *
 * Arguments:
 * 0: The object to unflip <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * _vehicle call BNA_KC_vehicles_fnc_unflip;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_posATL"];
TRACE_1("fnc_unflip",_vehicle);

if (!alive _vehicle) exitWith {};

_posASL = getPosASL _vehicle;
_postASL set [2, _posASL#2 + 4];
_vehicle setVectorUp [0, 0, 1];
_vehicle setPosASL _posASL;

_vehicle setDamage 0;
nil;
