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
private [];

TRACE_7("fnc_grenadeHandler", _unit, _weapon, _muzzle, _mode, _ammo, _magazine, _projectile);