#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns current fuel level of a given jetpack, can optionally return value as percentage of current fuel / max fuel (range from 0..1).
 *
 * Arguments:
 * jetpackOrUnit: Object - The backpack object to check or a unit, uses backpackContainer if unit is passed
 * returnPercent: Boolean - (Optional, default False) Whether to return the current fuel as a percentage
 *
 * Return Value:
 * Number - Current fuel level, or percentage of current fuel
 *
 * Example:
 * backpackContainer ace_player call BNA_KC_Jetpacks_fnc_getJetpackFuel; // Returns 100
 * [ace_player, true] call BNA_KC_Jetpacks_fnc_getJetpackFuel; // Returns 1
 */

#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
params ["_jetpackOrUnit", ["_returnPercent", false]];

// Determine if given object is a unit or a backpack object
private _jetpack = objNull;
private _jetpackClass = "";
if (_jetpackOrUnit isKindOf "CAManBase") then
{
    _jetpack = backpackContainer _jetpackOrUnit;
    _jetpackClass = backpack _jetpackOrUnit;
}
else
{
    _jetpack = _jetpackOrUnit;
    _jetpackClass = typeOf _jetpack;
};

private _maxFuel = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpackClass >> "BNA_KC_Jet_fuel",100);
private _fuel = _jetpack getVariable ["BNA_KC_Jet_currentFuel", _maxFuel];
_jetpack setVariable ["BNA_KC_Jet_currentFuel", _fuel, true]; // sets the value so the variable is defined

if (_returnPercent) then
{
    _fuel = _fuel / _maxFuel;
};

_fuel;