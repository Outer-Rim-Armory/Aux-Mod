#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Text statement for the jetpack strength stat.
 *
 * Arguments:
 * 0: Stats <ARRAY>
 * 1: Item config path <CONFIG>
 *
 * Return Value:
 * Stat Text <STRING>
 *
 * Example:
 * ["BNA_KC_jetpacks_strength", _config] call BNA_KC_jetpacks_fnc_statTextStatement_strength;
 *
 * Public: No
 */

params ["_stats", "_config"];

private _strength = getNumber (_config >> (_stats#0));
private _speed = (_strength - 10) max 6; // -10 because a minimum of 10 is required to beat gravity
_speed = _speed * 4.3;

format ["%1 km/h", _strength];
