#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Deletes jetpack effects from a unit on all clients.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ace_player call BNA_KC_jetpacks_clearEffects;
 *
 * Public: No
 */

params ["_unit"];
TRACE_1("fnc_clearEffects",_unit);

[QGVAR(clearEffects), [_unit]] call CBA_fnc_globalEvent;
nil;
