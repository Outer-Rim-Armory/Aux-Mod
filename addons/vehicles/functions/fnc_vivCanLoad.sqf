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
    ["_vehicle", objNull, [objNull]],
    ["_range", VIV_PICKUP_RANGE, [0]]
];
private ["_objects", "_configPath", "_canLoad"];
TRACE_2("fnc_vivCanLoad",_vehicle,_range);

if (isNull _vehicle or {_range <= 0}) exitWith {false};

_objects = nearestObjects [_vehicle, [], _range];

_objects = _objects select {
    _configPath = configOf _x >> "VehicleTransport" >> "Cargo";
    getNumber (_configPath >> "canBeTransported") + getNumber (_configPath >> QGVAR(vivOverride)) >= 1;
};

_canLoad = false;
{
    if ((_vehicle canVehicleCargo _x) isEqualTo [true, true]) exitWith {
        _vehicle setVariable [QGVAR(vivLoadTarget), _x];
        _canLoad = true;
    };
} forEach _objects;

_canLoad;
