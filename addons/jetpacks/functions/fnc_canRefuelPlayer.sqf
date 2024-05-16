#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a player can refuel another player's jetpack.
 *
 * Arguments:
 * 0: The unit getting fuel <OBJECT>
 * 1: The unit refueling <OBJECT>
 *
 * Return Value:
 * True if unit can refill _target, otherwise false <BOOL>
 *
 * Examples:
 * [cursorObject, player] call BNA_KC_jetpacks_fnc_canRefuelPlayer;
 */

params [
    ["_target", objNull, [objNull]],
    ["_player", objNull, [objNull]]
];
TRACE_2("fnc_canRefuelPlayer",_target,_player);

alive _target and
{_player call ace_common_fnc_isEngineer} and
{_target call FUNC(hasJetpack)} and
{_player distance _target <= 1.75} and
{[_target, true] call FUNC(getFuel) < 1} and
{[_player, false, true] call FUNC(getFuelCan) isNotEqualTo FUELCAN_NONE};