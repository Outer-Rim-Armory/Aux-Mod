#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds actions to spawn vehicles on a given object.
 *
 * Arguments:
 * 0: The object to add the actions to <OBJECT>
 * 1: The object to spawn the vehicles on <OBJECT>
 * 2: The direction spawned vehicles will face <NUMBER>
 *    - Will be clamped between 0 and 360.
 * 3: Type of vehicles to add actions for <STRING>
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

#define SPAWN_OFFSET 3

params [
    ["_console", objNull, [objNull]],
    ["_spawnPad", objNull, [objNull]],
    ["_direction", 0, [0]],
    ["_type", "all", [""]]
];
private ["_vehicles"];
TRACE_2("fnc_vehicleSpawner",_console,_spawnPad);

if (isNull _console or {isNull _spawnPad}) exitWith {};
_direction = CLAMP(_direction,0,360);

_vehicles = switch (toLowerANSI _type) do {
    case "all": {
        VEHICLE_LIST_AIR + VEHICLE_LIST_LAND;
    };
    case "air": {VEHICLE_LIST_AIR;};
    case "land": {VEHICLE_LIST_LAND;};
    default {[]};
};

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
            _arguments params ["_vehicleClass", "_spawnPad", "_direction"];
            private ["_spawnPos"];
            _spawnPos = getPosATL _spawnPad;
            _spawnPos set [2, _spawnPos#2 + SPAWN_OFFSET];

            if (_vehicleClass isKindOf "CAManBase") then {
                private _group = createGroup [side _caller, true];
                GVAR(lastVehicle) = _group createUnit [_vehicleClass, _spawnPos, [], 0, "CAN_COLLIDE"];
            } else {
                GVAR(lastVehicle) = createVehicle [_vehicleClass, _spawnPos, [], 0, "CAN_COLLIDE"];
            };
            GVAR(lastVehicle) setDir _direction;

            GVAR(lastVehicle) allowDamage false;
            [{GVAR(lastVehicle) allowDamage true;}, [], 10] call CBA_fnc_waitAndExecute;
        }, [_x, _spawnPad, _direction], 99 - _forEachIndex, false, true, "", QUOTE(isNull (objectParent _this)), 5
    ];
} forEach _vehicles;
