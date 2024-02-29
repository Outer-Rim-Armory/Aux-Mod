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
private ["_ammoType", "_explodeDelay"];

_ammoType = [
    configFile >> "CfgAmmo" >> _ammo,
    QGVAR(ammoType),
    AMMO_TYPE_NORMAL
] call BIS_fnc_returnConfigEntry;

_explodeDelay = [
    configFile >> "CfgAmmo" >> _ammo,
    "explosionTime",
    0
] call BIS_fnc_returnConfigEntry;

if (_ammoType isEqualTo AMMO_TYPE_NORMAL) exitWith {};

[
    {
        params ["_ammoType", "_explodeDelay", "_unit", "_ammo", "_magazine", "_projectile"];

        switch (_ammoType) do {
            case AMMO_TYPE_EMP: {
                if (GVAR(empEnabled)) then {
                    [_unit, _ammo, _magazine, _projectile] call FUNC(empGrenade);
                };
            };
            case AMMO_TYPE_BACTA: {
                if (GVAR(bactaEnabled)) then {
                    [_unit, _ammo, _magazine, _projectile] call FUNC(bactaGrenade);
                };
            };
            default {};
        };
    },
    [_ammoType, _explodeDelay, _unit, _ammo, _magazine, _projectile],
    _explodeDelay
] call CBA_fnc_waitAndExecute;