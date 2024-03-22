#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds actions to spawn vehicles on a given object.
 *
 * Arguments:
 * 0: The object to add the actions to <OBJECT>
 * 1: The object to spawn the vehicles on <OBJECT>
 * 2: Type of vehicles to add actions for <STRING>
 *    All: All vehicle types
 *    Air: Air vehicles
 *    Land: Land vehicles
 *
 * Return Value:
 * None
 *
 * Examples:
 * [_console, _spawnPad] call BNA_KC_vehicles_fnc_vehicleSpawner;
 *
 * Public: Yes
 */

params [
    ["_console", objNull, [objNull]],
    ["_spawnPad", objNull, [objNull]],
    ["_type", "all", [""]]
];
private ["_vehicles"];
TRACE_2("fnc_vehicleSpawner",_console,_spawnPad);

if (isNull _console or {isNull _spawnPad}) exitWith {};

systemChat str VEHICLE_LIST_AIR;
// systemChat str VEHICLE_LIST_LAND;

_vehicles = switch (toLowerANSI _type) do {
    case "all": {
        VEHICLE_LIST_AIR + VEHICLE_LIST_LAND;
    };
    case "air": {VEHICLE_LIST_AIR;};
    case "land": {VEHICLE_LIST_LAND;};
    default {[]};
};

systemChat str _vehicles;

_console addAction [
    "<t font='RobotoCondensedBold' color='#FF0000'>Delete Last Vehicle</t>", {
        params ["_target", "_caller", "_actionId", "_arguments"];
        if (isNull GVAR(lastVehicle)) then {
            ["No vehicle has been spawned yet."] call ace_common_fnc_displayText;
        } else {
            [format ["Deleted %1 (%2).", GVAR(lastVehicle), typeOf GVAR(lastVehicle)]] call ace_common_fnc_displayText;
            deleteVehicle GVAR(lastVehicle);
        };
    }, nil, 100, false, true, "", QUOTE(isNull (objectParent _this)), 5
];

{
    private ["_vehicleName"];
    _vehicleName = getText (configFile >> "CfgVehicles" >> _x >> "displayName");
    _console addAction [
        format ["<t color='#FFFFFF'>Spawn %1</t>", _vehicleName], {
            params ["_target", "_caller", "_actionId", "_arguments"];
            _arguments params ["_vehicleClass", "_spawnPad"];
            private ["_spawnPos"];
            _spawnPos = getPosATL _spawnPad;
            _spawnPos set [2, _spawnPos#2 + 2];
            GVAR(lastVehicle) = createVehicle [_vehicleClass, _spawnPos, [], 0, "CAN_COLLIDE"];
        }, [_x, _spawnPad], 99 - _forEachIndex, false, true, "", QUOTE(isNull (objectParent _this)), 5
    ];
} forEach _vehicles;