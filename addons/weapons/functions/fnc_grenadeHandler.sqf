#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles special scripted grenades
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/events-framework.html#21-fired-event-handlers-ace_common
 *
 * Return Value:
 * None
 *
 * Examples:
 * fired = "_this call BNA_KC_weapons_fnc_grenadeHandler";
 */

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
private ["_grenadeType", "_explodeDelay"];

_grenadeType = [
    configFile >> "CfgAmmo" >> _ammo,
    QGVAR(grenadeType),
    GRENADE_TYPE_NORMAL
] call BIS_fnc_returnConfigEntry;

_explodeDelay = [
    configFile >> "CfgAmmo" >> _ammo,
    "explosionTime",
    0
] call BIS_fnc_returnConfigEntry;

if (_grenadeType isEqualTo GRENADE_TYPE_NORMAL) exitWith {};

[
    {
        params ["_grenadeType", "_explodeDelay", "_unit", "_ammo", "_magazine", "_projectile"];

        switch (_grenadeType) do {
            case GRENADE_TYPE_EMP: {
                [_unit, _ammo, _magazine, _projectile] call FUNC(empGrenade);
            };
            case GRENADE_TYPE_BACTA: {
                [_unit, _ammo, _magazine, _projectile] call FUNC(bactaGrenade);
            };
            default {};
        };
    },
    [_grenadeType, _explodeDelay, _unit, _ammo, _magazine, _projectile],
    _explodeDelay
] call CBA_fnc_waitAndExecute;