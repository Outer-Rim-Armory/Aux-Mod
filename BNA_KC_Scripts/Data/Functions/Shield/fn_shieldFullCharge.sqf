/*
* Author: DartRuffian
* Recharges a vehicle's shield to full
*
* Arguments:
* vehicle: Object - The vehicle to recharge
* engineer: Object - The person repairing the vehicle
*
* Return Value:
* None
*
* Examples:
* [vehicle player, player] call BNAKC_fnc_shieldFullCharge;
*/


#include "script_component.sqf"
params [["_vehicle", objNull, [objNull]], ["_engineer", objNull, [objNull]], ["_instant", false, [false]]];
private ["_shieldMaxHealth", "_oldHealth", "_rechargeTime"];

if (isNull _vehicle) exitWith {};
if (_instant) exitWith
{
    _shieldMaxHealth =
    [
        (configFile >> "CfgVehicles" >> typeOf _vehicle),
        "BNA_KC_Shield_maxHealth",
        BASE_SHIELD_HEALTH
    ] call BIS_fnc_returnConfigEntry;
    _oldHealth = _vehicle call BNAKC_fnc_getShieldHealth;
    _vehicle setVariable ["BNA_KC_Shield_health", _shieldMaxHealth, true];
    ["BNA_KC_shieldHealthChanged", [_vehicle, _oldHealth, _shieldMaxHealth]] call CBA_fnc_localEvent;
};

if (isNull _engineer) exitWith {};

_rechargeTime =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_regenTime",
    BASE_SHIELD_REGEN_TIME
] call BIS_fnc_returnConfigEntry;

[
    _rechargeTime * 1.5,
    [_vehicle, _engineer],
    {
        // Finished
        _this#0 params ["_vehicle", "_engineer"];
        private ["_shieldMaxHealth", "_oldHealth"];
        _shieldMaxHealth =
        [
            (configFile >> "CfgVehicles" >> typeOf _vehicle),
            "BNA_KC_Shield_maxHealth",
            BASE_SHIELD_HEALTH
        ] call BIS_fnc_returnConfigEntry;
        _oldHealth = _vehicle call BNAKC_fnc_getShieldHealth;
        _vehicle setVariable ["BNA_KC_Shield_health", _shieldMaxHealth];
        ["BNA_KC_shieldHealthChanged", [_vehicle, _oldHealth, _shieldMaxHealth]] call CBA_fnc_localEvent;

        ["Recharge Complete"] remoteExecCall ["ace_common_fnc_displaytextstructured", _engineer];
    },
    {
        // Failed
        _this#0 params ["_vehicle", "_engineer"];
        ["Recharge Cancelled"] remoteExecCall ["ace_common_fnc_displaytextstructured", _engineer];
    },
    "Recharging Shields",
    {
        // Condition
        _this#0 params ["_vehicle", "_engineer"];
        _vehicle call BNAKC_fnc_deactivateShield;
        isTouchingGround _vehicle and _vehicle distance _engineer <= 8 and (_engineer call ace_repair_fnc_isEngineer or _engineer call ace_repair_fnc_isNearRepairVehicle or _engineer call ace_repair_fnc_isInRepairFacility);
    }
] call ace_common_fnc_progressBar;