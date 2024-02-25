#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a given unit has a fuel can in their inventory, and returns the class name fuel level.
 * If a unit does not have a fuel container, an array of ["", 0] will be returned.
 *
 * Arguments:
 * unit: Object - The unit to check
 *
 * Return Value:
 * Array format [className, fuelLevel]
 *
 * Examples:
 * player call BNAKC_Jetpacks_fnc_getFuelCan;
 */


params ["_unit", ["_ignoreFull", true], ["_ignoreEmpty", false]];

private _canClass = "";
private _fuelLevel = 0;
// Search for partially filled cans
{
    _x params ["_magazine", "_ammoCount"];
    private _isCan = [(configFile >> "CfgMagazines" >> _magazine), "BNA_KC_Jet_isFuelCan", 0] call BIS_fnc_returnConfigEntry;
    if (_ignoreFull) then
    {
        private _maxFuel =
        [
            (configFile >> "CfgMagazines" >> _magazine),
            "count",
            _ammoCount
        ] call BIS_fnc_returnConfigEntry;

        if (_ammoCount == _maxFuel) then { continue };
    };

    if (_isCan isEqualTo 1) exitWith { _canClass = _magazine; _fuelLevel = _ammoCount };
} forEach magazinesAmmo _unit;

// Prefer partially full cans by returning early
if !(_canClass isEqualTo "") exitWith { [_canClass, _fuelLevel]; };

if !(_ignoreEmpty) then
{
    // Search for empty fuel cans
    {
        private _isCan = [(configFile >> "CfgWeapons" >> _x), "BNA_KC_Jet_isFuelCan", 0] call BIS_fnc_returnConfigEntry;
        if (_isCan isEqualTo 1) exitWith { _canClass = _x; };
    } forEach items _unit;
};

[_canClass, _fuelLevel];