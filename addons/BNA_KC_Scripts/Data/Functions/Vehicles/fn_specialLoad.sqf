/*
 * Author: DartRuffian
 * Loads the object saved to the vehicle's 'BNA_KC_SpecialLoadTarget' variable.
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

private _vehicleToLoad = _vehicle getVariable ["BNA_KC_SpecialLoadTarget", objNull];

if !(isNull _vehicleToLoad) then
{
	_vehicle setVehicleCargo _vehicleToLoad;
};
_vehicle setVariable ["BNA_KC_SpecialLoadTarget", nil, true];