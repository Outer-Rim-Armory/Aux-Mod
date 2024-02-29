#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Activates a vehicle's shield
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * Whether the vehicle's shield was activated <BOOL>
 *
 * Example:
 * objectParent ace_player call BNA_KC_shields_fnc_activate;
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_hasShield", "_shieldHealth"];
TRACE_1("fnc_activate",_vehicle);

_hasShield = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> QGVAR(hasShield));

if (isNull _vehicle or
    {!alive _vehicle} or
    {_hasShield isEqualTo FALSE} or
    {_vehicle getVariable [QGVAR(isActive), false]}
) exitWith {false};


_vehicle setVariable [QGVAR(isActive), true, true];
{_x allowDamage false;} forEach crew _vehicle;

if (_vehicle getVariable [QGVAR(health), -1] isEqualTo -1) then {
    _shieldHealth = [
        configFile >> "CfgVehicles" >> typeOf _vehicle,
        QGVAR(health),
        SHIELD_HEALTH_DEFAULT
    ] call BIS_fnc_returnConfigEntry;
    _vehicle setVariable [QGVAR(health), _shieldHealth, true];
};

_vehicle call FUNC(addShieldHandlers);

[QGVAR(shieldToggled), [
    _vehicle,
    true,
    _vehicle getVariable QGVAR(health)
]] call CBA_fnc_localEvent;

true;