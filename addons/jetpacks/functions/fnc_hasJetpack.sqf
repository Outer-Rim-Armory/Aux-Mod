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
 * ace_player call BNA_KC_jetpacks_fnc_hasJetpack;
 *
 * Public: Yes
 */

params ["_unit"];
TRACE_1("fnc_hasJetpack",_unit);

getNumber ((configOf backpackContainer _unit) >> QGVAR(isJetpack)) > FALSE