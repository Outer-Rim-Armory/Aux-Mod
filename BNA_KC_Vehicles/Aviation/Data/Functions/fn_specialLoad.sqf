/*
 * Author: DartRuffian
 * Loads the closest object that requires a custom script.
 *
 * Arguments:
 * vehicle: Object - The vehicle loading a nearby object.
 *
 * Return Value:
 * None
 *
 * Example:
 * [heli] call BNAKC_fnc_specialLoad;
 */

#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
#define SPEC_LOAD_DIST 30
params ["_vehicle"];

private _objects = nearestObjects [_vehicle, [], SPEC_LOAD_DIST];

_objects = _objects select
{
	private _objClass = typeOf _x;
	GET_NUMBER(configFile >> "CfgVehicles" >> _objClass >> "VehicleTransport" >> "Cargo" >> "BNA_KC_SpecialLoad", 0) isEqualTo 1;
};

_vehicle setVehicleCargo (_objects#0);