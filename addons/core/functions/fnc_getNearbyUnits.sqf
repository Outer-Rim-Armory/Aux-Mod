#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns an array of all nearby units, including units in vehicles.
 *
 * Arguments:
 * 0: Position in format PositionAGL <ARRAY>
 * 1: Include crewed units (optional, default: true) <BOOL>
 *
 * Return Value:
 * Array of nearby units <ARRAY>
 *
 * Examples:
 * [ASLToAGL getPosASL player, 10, true] call BNA_KC_core_fnc_getNearbyUnits;
 */

params [
    ["_positionAGL", [], [], 3],
    ["_radius", 0, [0]],
    ["_includeCrewed", true, [true]]
];
private [];
TRACE_3("fnc_getNearbyUnits",_positionAGL,_radius,_includeCrewed);

if (!(_positionAGL isEqualTypeParams [0,0,0]) and _radius <= 0) exitWith {};

_nearbyUnits = [];

if (_includeCrewed) then {
    _nearbyUnits = _positionAGL nearEntities [["CAManBase", "LandVehicle", "Air"], _radius];
    _nearbyUnits = flatten (_nearbyUnits apply {crew _x});
} else {
    _nearbyUnits = _positionAGL nearEntities ["CAManBase", _radius];
};

_nearbyUnits arrayIntersect _nearbyUnits;
