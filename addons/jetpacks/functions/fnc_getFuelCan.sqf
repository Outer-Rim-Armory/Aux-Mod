#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns the first fuel can found in a unit's inventory. Can exclude full / empty fuel cans.
 *
 * Arguments:
 * 0: Unit to check <OBJECT>
 * 1: Ignore full fuel cans (optional, default: false) <BOOL>
 * 2: Ignore empty fuel cans (optional, default: false) <BOOL>
 *
 * Return Value:
 * The fuel can in format [class name, fuel level] <ARRAY>
 *
 * Examples:
 * player call BNA_KC_jetpacks_fnc_getFuelCan;
 */


params [
    ["_unit", objNull, [objNull]],
    ["_ignoreFull", false, [false]],
    ["_ignoreEmpty", false, [false]]
];
TRACE_3("fnc_getFuelCan",_unit,_ignoreFull,_ignoreEmpty);

private _canClass = "";
private _fuelLevel = 0;

// Find partial cans
{
    _x params ["_magazine", "_ammoCount"];

    private _isCan = getNumber (configFile >> "CfgMagazines" >> _magazine >> QGVAR(isFuelCan));
    if (_ignoreFull) then {
        private _maxFuel = [
            configFile >> "CfgMagazines" >> _magazine,
            "count",
            _ammoCount
        ] call BIS_fnc_returnConfigEntry;

        if (_ammoCount == _maxFuel) then {continue};
    };

    if (_isCan isEqualTo TRUE) exitWith {
        _canClass = _magazine;
        _fuelLevel = _ammoCount
    };
} forEach magazinesAmmo _unit;

// Prefer partially full cans by returning early
if (_canClass isNotEqualTo "") exitWith {
    [_canClass, _fuelLevel];
};

// Search for empty fuel cans
if !(_ignoreEmpty) then {
    {
        _isCan = getNumber (configFile >> "CfgWeapons" >> _x >> QGVAR(isFuelCan));
        if (_isCan isEqualTo 1) exitWith {
            _canClass = _x;
        };
    } forEach items _unit;
};

[_canClass, _fuelLevel];