#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns whether a unit has a jetpack.
 *
 * Arguments:
 * 0: Unit <Object>
 *
 * Return Value:
 * True if the unit has a jetpack, otherwise false <BOOL>
 *
 * Example:
 * ace_player call FUNC(hasJetpack);
 */

params ["_unit"];
private ["_isJetpack"];
TRACE_1("fnc_hasJetpack",_unit);

_isJetpack = getNumber (configFile >> "CfgVehicles" >> backpack _unit >> QGVAR(isJetpack));

[false, true] select _isJetpack;