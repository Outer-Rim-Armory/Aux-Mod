#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Text statement for the jetpack speed stat.
 *
 * Arguments:
 * 0: Stats <ARRAY>
 * 1: Item config path <CONFIG>
 *
 * Return Value:
 * Stat Text <STRING>
 *
 * Example:
 * ["BNA_KC_jetpacks_speed", _config] call BNA_KC_jetpacks_fnc_statTextStatement_speed;
 *
 * Public: No
 */

params ["_stats", "_config"];

private _speed = getNumber (_config >> (_stats#0));
format ["%1 km/h", (_speed * 21)];
