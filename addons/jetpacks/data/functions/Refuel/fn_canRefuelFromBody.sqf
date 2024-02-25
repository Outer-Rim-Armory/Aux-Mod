#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if the player is able to take fuel from a body's jetpack.
 * Intended to be used as the condition for an ACE action.
 *
 * Arguments:
 * target: Object - The unit whose jetpack should be drained
 * player: Object - The unit collecting fuel
 * params: Array - Parameters passed to the action
 *
 * Return Value:
 * None
 *
 * Examples:
 * [cursorObject, player, []] call BNAKC_Jetpacks_fnc_canRefuelFromBody;
 */


params ["_target", "_player", "_params"];

(_player call ace_common_fnc_isEngineer) and
!([_player, true] call BNAKC_Jetpacks_fnc_getFuelCan isEqualTo ["", 0]) and
_target call BNAKC_Jetpacks_fnc_hasJetpack and
_target call BNAKC_Jetpacks_fnc_getJetpackFuel > 0 and
!alive _target;