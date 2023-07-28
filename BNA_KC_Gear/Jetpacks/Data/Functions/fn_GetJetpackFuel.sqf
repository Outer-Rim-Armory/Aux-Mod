/*
 * Author: DartRuffian
 * Returns current fuel level of a given jetpack, can optionally return value as percentage of current fuel / max fuel.
 *
 * Arguments:
 * backpack: Object - The backpack object to check
 * returnPercent: Boolean - (Optional, default False) Whether to return the current fuel as a percentage
 *
 * Return Value:
 * Number - Current fuel level, or percentage of current fuel
 *
 * Example:
 * [backpackContainer ace_player] call BNAKC_fnc_GetJetpackFuel; // Returns 100
 */

#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
params ["_backpack", ["_returnPercent", false]];

private _backpackClass = typeOf _backpack;
private _maxFuel = GET_NUMBER(configFile >> "CfgVehicles" >> _backpackClass >> "BNA_KC_Jet_fuel", 100);
private _fuel = _backpack getVariable ["BNA_KC_Jet_currentFuel", _maxFuel];
_backpack setVariable ["BNA_KC_Jet_currentFuel", _fuel]; // sets the value so the variable is defined

if (_returnPercent) then
{
	_fuel = (_fuel / _maxFuel) * 100;
};

_fuel;