/*
 * Author: DartRuffian
 * Damage handler for a shielded vehicle.
 *
 * Arguments:
 * vehicle: The vehicle to create the handler for
 *
 * Return Value:
 * None
 *
 * Examples:
 * (vehicle player) call BNAKC_fnc_addShieldHandler;
 */


#include "script_component.sqf"
params [["_vehicle", objNull, [objNull]]];
private ["_hasShield", "_regenTime", "_regenRate"];

_hasShield =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_hasShield",
    0
] call BIS_fnc_returnConfigEntry;

if (isNull _vehicle) exitWith {};
if (_hasShield isEqualTo 0) exitWith {};

_vehicle setVariable
[
    "BNA_KC_Shield_damageHandler",
    _vehicle addEventHandler
    [
        "HandleDamage",
        {
            params ["_vehicle", "_selection", "_damage", "", "", "", "", ""];
            private ["_shieldMaxHealth", "_shieldHealth", "_shieldHealthFormatted", "_message", "_currentTime"];

            _shieldMaxHealth =
            [
                (configFile >> "CfgVehicles" >> typeOf _vehicle),
                "BNA_KC_Shield_maxHealth",
                BASE_SHIELD_HEALTH
            ] call BIS_fnc_returnConfigEntry;
            _shieldHealth = _vehicle call BNAKC_fnc_getShieldHealth;
            _shieldHealth = (_shieldHealth - _damage) max 0;
            _vehicle setVariable ["BNA_KC_Shield_health", _shieldHealth, true];

            if (_damage > 0) then
            {
                _shieldHealthFormatted = format
                [
                    "<t color='%1'>%2</t>",
                    _vehicle call BNAKC_fnc_getShieldHealthColor,
                    [_vehicle, true] call BNAKC_fnc_getShieldHealth
                ];
                _shieldHealthFormatted = _shieldHealthFormatted + "%";
                _message = format ["Strength %1", _shieldHealthFormatted];
                [_message] call ace_common_fnc_displaytextstructured;
            };

            if (_shieldHealth isEqualTo 0) then
            {
                _vehicle call BNAKC_fnc_deactivateShield;
            };

            _currentTime = time max serverTime; // serverTime returns 0 in SP
            _vehicle setVariable ["BNA_KC_Shield_lastHit", _currentTime, true];
            // Re-apply damage to vehicle, prevents being healed when hit
            _vehicle getHit _selection;
        }
    ],
    true
];

_regenTime =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_regenTime",
    BASE_SHIELD_REGEN_TIME
] call BIS_fnc_returnConfigEntry;

_regenRate =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_regenRate",
    BASE_SHIELD_REGEN_RATE
] call BIS_fnc_returnConfigEntry;

_vehicle setVariable
[
    "BNA_KC_Shield_regenHandler",
    [
        {
            _this#0 params ["_vehicle", "_regenTime", "_regenRate"];
            private ["_currentTime", "_lastHit", "_shieldMaxHealth", "_shieldHealth"];

            _currentTime = time max serverTime;
            _lastHit = _vehicle getVariable ["BNA_KC_Shield_lastHit", _currentTime];
            if (_currentTime >= (_lastHit + _regenTime)) then
            {
                _shieldMaxHealth =
                [
                    (configFile >> "CfgVehicles" >> typeOf _vehicle),
                    "BNA_KC_Shield_maxHealth",
                    BASE_SHIELD_HEALTH
                ] call BIS_fnc_returnConfigEntry;
                _shieldHealth = _vehicle call BNAKC_fnc_getShieldHealth;
                _shieldHealth = (_shieldHealth + _regenRate) min _shieldMaxHealth;
                _vehicle setVariable ["BNA_KC_Shield_health", _shieldHealth, true];
            };
        },
        _regenTime,
        [_vehicle, _regenTime, _regenRate]
    ] call CBA_fnc_addPerFrameHandler,
    true
];