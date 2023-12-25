#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Called when a unit fires a weapon or throws a grenade.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/events-framework.html#21-fired-event-handlers-ace_common
 *
 * Return Value:
 * None
 *
 * Examples:
 * fired = "_this call BNA_KC_weapons_fnc_fired";
 */

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
private [];

TRACE_7("fnc_fired", _unit, _weapon, _muzzle, _mode, _ammo, _magazine, _projectile);

if (toLowerANSI _weapon isEqualTo "throw") then {
	_this call FUNC(grenadeHandler);
};