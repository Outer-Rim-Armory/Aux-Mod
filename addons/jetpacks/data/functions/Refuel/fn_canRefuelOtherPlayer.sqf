#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a player can refuel another player's jetpack.
 *
 * Arguments:
 * target: Object - The unit whose jetpack should be refueled
 * player: Object - The unit refueling
 * params: Array - Parameters passed to the action
 *
 * Return Value:
 * None
 *
 * Examples:
 * [cursorObject, player, []] call BNAKC_Jetpacks_fnc_canRefuelOtherPlayer;
 */


params ["_target", "_player", "_params"];

(_player call ace_common_fnc_isEngineer) and
!([_player, false, true] call BNAKC_Jetpacks_fnc_getFuelCan isEqualTo ["", 0]) and
_target call BNAKC_Jetpacks_fnc_hasJetpack and
[_target, true] call BNAKC_Jetpacks_fnc_getJetpackFuel < 1 and
alive _target and
_player distance _target <= 1.75;