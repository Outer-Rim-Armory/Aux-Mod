/*
 * Author: DartRuffian
 * Creates an EMP area around a given vehicle. Kills B1 droid units, disables droideka shields, and disables AATs
 *
 * Arguments:
 * vehicle: Object - The vehicle creating the EMP.
 *
 * Return Value:
 * None
 *
 * Example:
 * [tank] call BNAKC_fnc_activateEMP;
 */

#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})

params ["_vehicle"];

_vehicle setVariable ["BNA_KC_EMP_lastUsed", time];

private _position = getPosASL _vehicle;
[_position] remoteExec ["BNAKC_fnc_playDroidPopperSound", [0, -2] select isDedicated];

// Get configurable radiuses
private _vehicleClass = typeOf _vehicle; // ARMA doesn't like doing expressions in macros
private _radiusDroid   = GET_NUMBER(configFile >> "CfgVehicles" >> _vehicleClass >> "BNA_KC_EMP_Radius_Droid", 15);
private _radiusDeka    = GET_NUMBER(configFile >> "CfgVehicles" >> _vehicleClass >> "BNA_KC_EMP_Radius_Deka", 15);
private _radiusVehicle = GET_NUMBER(configFile >> "CfgVehicles" >> _vehicleClass >> "BNA_KC_EMP_Radius_Vehicle", 15);

// Find applicable units/objects
private _nearbyUnits = _position nearEntities ["CAManBase", _radiusDroid];
private _shieldObjects = nearestObjects [_position, ["RD501_Droideka_Shield"], _radiusDeka];
private _tasDekas = nearestObjects [_position, ["3AS_Deka_Static_Base", "3AS_Deka_Static_Sniper_Base"], _radiusDeka];

[currentPilot _vehicle, _nearbyUnits] call BNAKC_fnc_KillDroids; // Kills droids and plays EMP death sound
[_tasDekas, _shieldObjects] call BNAKC_fnc_DisableDekaShields;   // Disables/deletes droideka shields

if (_radiusVehicle > 0) then
{
    private _tanks = nearestObjects [_position, [], _radiusVehicle] select { ((toLowerAnsi typeOf _x find "_aat") > 0) };
    [_tanks, BNA_KC_DroidPopper_DisableTime] spawn BNAKC_fnc_TempDisableVehicles;
};
