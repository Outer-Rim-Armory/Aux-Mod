#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Stops the jetpack sequence.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call BNA_KC_jetpacks_fnc_jetpackStop;
 *
 * Public: No
 */

TRACE_0("fnc_jetpackStop");

ace_player setVariable [QGVAR(usingJetpack), nil];
nil;
