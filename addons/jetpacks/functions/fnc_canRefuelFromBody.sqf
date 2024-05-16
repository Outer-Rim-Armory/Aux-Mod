#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Checks if a unit is able to fill a jetpack fuel tank from a dead body.
 *
 * Arguments:
 * 0: The dead unit <OBJECT>
 * 1: The unit refueling <OBJECT>
 *
 * Return Value:
 * True if unit can fill a fuel tank, otherwise false <BOOL>
 *
 * Example:
 * [_unit, ace_player] call BNA_KC_jetpacks_fnc_canRefuelFromBody;
 *
 * Public: No
 */

params ["_target", "_player"];
TRACE_2("fnc_canRefuelFromBody",_target,_player);

!alive _target and
{_player call ace_common_fnc_isEngineer} and
{_target call FUNC(hasJetpack)} and
{_target call FUNC(getFuel) > 0} and
{[_player, true] call FUNC(getFuelCan) isNotEqualTo FUELCAN_NONE};