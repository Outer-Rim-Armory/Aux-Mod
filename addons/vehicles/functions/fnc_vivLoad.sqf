#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks nearby objects to see if they can be loaded with vehicle-in-vehicle. The closest compatible object will be set as the "target", which will be loaded with fnc_vivLoad.
 *
 * Arguments:
 * 0: The carrier vehicle <OBJECT>
 * 1: Loading range (optional, default: VIV_PICKUP_RANGE) <NUMBER>
 *
 * Return Value:
 * Whether the carrier vehicle can load another object in range.
 *
 * Examples:
 * vehicle player call BNA_KC_vehicles_fnc_vivCanLoad;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_object"];
TRACE_1("fnc_vivLoad",_vehicle);

_object = _vehicle getVariable [QGVAR(vivLoadTarget), objNull];

if (!isNull _object) then {
    playSound "TAS_Clamps";
    _vehicle setVehicleCargo _object;
};

_vehicle setVariable [QGVAR(vivLoadTarget), nil];
nil;
