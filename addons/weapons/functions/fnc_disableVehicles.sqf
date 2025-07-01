#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Disables an array of vehicles for a given amount of time.
 * Vehicles are disabled by temporarily setting their fuel to 0 and removing all magazines.
 *
 * Arguments:
 * 0: Array of vehicles to disable <ARRAY>
 * 1: Amount of time in seconds to disable the vehicle for <NUMBER>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [[vehicle1, vehicle2], 10] call BNA_KC_weapons_fnc_disableVehicles;
 *
 * Public: Yes
 */

params [
    ["_vehicles", [], [[]]],
    ["_time", 0, [0]]
];

_vehicles = _vehicles select {
    getNumber (configOf _x >> QGVAR(empCanBeDisabled)) isEqualTo TRUE;
};

TRACE_2("fnc_disableVehicles",_vehicles,_time);

if (_vehicles isEqualTo [] or
    {_time <= 0}
) exitWith {};

{
    private ["_vehicle", "_fuel", "_magsDriver", "_magsTurrets"];
    _vehicle = _x;

    _fuel = fuel _vehicle;
    _magsDriver = magazines _vehicle;

    _vehicle setFuel 0;
    {_vehicle removeMagazines _x;} forEach _magsDriver;

    _magsTurrets = [];

    {
        private ["_turretPath", "_magazines"];
        _turretPath = _x;
        _magazines = _vehicle magazinesTurret _turretPath;

        _magsTurrets pushBack [
            _turretPath,
            _magazines
        ];

        // Faster to remove the same magazine multiple times than to
        // remove duplicate values
        {
            _vehicle removeMagazineTurret [_x, _turretPath];
        } forEach _magazines;
    } forEach (allTurrets _vehicle);

    [
        {
            params ["_vehicle", "_fuel", "_magsDriver", "_magsTurrets"];

            _vehicle setFuel _fuel;
            {_vehicle addMagazine _x;} forEach _magsDriver;
            {
                _x params ["_turretPath", "_magazines"];
                {
                    _vehicle addMagazineTurret [_x, _turretPath];
                } forEach _magazines;
            } forEach _magsTurrets;
        },
        [_vehicle, _fuel, _magsDriver, _magsTurrets],
        _time
    ] call CBA_fnc_waitAndExecute;
} forEach _vehicles;
nil;
