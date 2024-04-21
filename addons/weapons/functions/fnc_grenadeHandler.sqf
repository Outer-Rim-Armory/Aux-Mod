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
private ["_ammoType"];
TRACE_7("fnc_grenadeHandler",_unit,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile);

_ammoType = getNumber (configOf _projectile >> QGVAR(ammoType));
if (_ammoType isEqualTo AMMO_TYPE_NORMAL) exitWith {};

_projectile addEventHandler ["Explode", {
    params ["_projectile", "_positionASL"];
    private ["_ammoType"];

    _ammoType = getNumber (configOf _projectile >> QGVAR(ammoType));
    switch (_ammoType) do {
        case AMMO_TYPE_EMP: {
            _projectile call FUNC(empGrenade);
        };
        case AMMO_TYPE_BACTA: {
            _projectile call FUNC(bactaGrenade);
        };
        default {};
    };
}];

nil;