#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Spawns a ground holder with a hat in it and attaches it to the unit.
 * Offset is designed for a JLTS B1 Battle Droid head.
 *
 * Arguments:
 * 0: The droid unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * _droid call BNA_KC_factions_fnc_cowboyHatB1;
 */

params [
    ["_unit", objNull, [objNull]]
];
private ["_groundHolder", "_yaw", "_pitch", "_roll"];
TRACE_1("fnc_cowboyHatB1",_unit);

#define SCALE 1.2

deleteVehicle (_unit getVariable [QGVAR(hat), objNull]);

_groundHolder = "groundWeaponHolder" createVehicle [0, 0, 0];
_groundHolder setPosASL getPosASL _unit;

_unit setVariable [QGVAR(hat), _groundHolder, true];

_groundHolder addItemCargoGlobal ["ls_misc_gunslinger_helmet", 1];
_groundHolder attachTo [_unit, [-0.15 * SCALE, -0.7 * SCALE, -0.65 * SCALE], "head", true];

_yaw = 0.3; _pitch = 100; _roll = 0;
_groundHolder setVectorDirAndUp [
    [sin _yaw * cos _pitch, cos _yaw * cos _pitch, sin _pitch],
    [[sin _roll, -sin _pitch, cos _roll * cos _pitch], -_yaw] call BIS_fnc_rotateVector2D
];
_groundHolder setObjectScale SCALE;

_unit addEventHandler ["Deleted", {
    params ["_entity"];
    deleteVehicle (_unit getVariable [QGVAR(hat), objNull]);
}];
