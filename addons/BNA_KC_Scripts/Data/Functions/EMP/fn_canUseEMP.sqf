#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
params ["_vehicle"];

_vehicle = vehicle _vehicle; // "this" in vehicle init becomes crew, but is not equal to ace_player

private _vehicleClass = typeOf _vehicle;
private _cooldown = GET_NUMBER(configFile >> "CfgVehicles" >> _vehicleClass >> "BNA_KC_EMP_cooldown", 25);

if !(isEngineOn _vehicle) exitWith { false };
if !(ace_player isEqualTo currentPilot _vehicle) exitWith { false };

// Default to negative cooldown to work from start of mission
private _lastUsed = _vehicle getVariable ["BNA_KC_EMP_lastUsed", -_cooldown];

if !((time - _lastUsed) > _cooldown) exitWith { false };

true;