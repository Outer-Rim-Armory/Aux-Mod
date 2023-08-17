/*
 * Author: DartRuffian
 * Checks if a vehicle is able to load another nearby object that requires a script.
 *
 * Arguments:
 * vehicle: Object - The vehicle loading a nearby object.
 *
 * Return Value:
 * None
 *
 * Example:
 * [heli] call BNAKC_fnc_canSpecialLoad;
 */


#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
#define SPEC_LOAD_DIST 30
params ["_vehicle"];

// _vehicle = vehicle _vehicle; // "this" in vehicle init becomes crew, but is not equal to ace_player
// private _vehicleClass = typeOf _vehicle;

if !(isEngineOn _vehicle) exitWith { false };
if !(ace_player isEqualTo currentPilot _vehicle) exitWith { false };

// Get all nearby objects
private _objects = nearestObjects [_vehicle, [], SPEC_LOAD_DIST];

// Filter by objects that require special load
_objects = _objects select
{
	private _objClass = typeOf _x;
	GET_NUMBER(configFile >> "CfgVehicles" >> _objClass >> "VehicleTransport" >> "Cargo" >> "BNA_KC_SpecialLoad", 0) isEqualTo 1;
};

// No nearby objects require special load
if (count _objects == 0) exitWith { false };

// If the first object can be loaded, return true
// [true, true] for [willFitIntoCurrentVehicle, willFitIntoEmptyVehicle], willFitIntoEmptyVehicle is mostly for checking if it is already in a cargo space
if (_vehicle canVehicleCargo (_objects#0) isEqualTo [true, true]) exitWith { true };