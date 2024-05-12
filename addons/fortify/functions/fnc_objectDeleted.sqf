#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * ACE Fortify objectDeleted event handler. Deletes them from the savedObjects hashmap.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/fortify-framework.html#2-events
 *
 * Return Value:
 * None
 *
 * Example:
 * ["acex_fortify_objectDeleted", BNA_KC_fortify_fnc_objectDeleted] call CBA_fnc_addEventHandler;
 *
 * Public: No
 */

params ["_player", "_side", "_objectDeleted"];
private ["_counter"];
TRACE_3("fnc_objectDeleted",_player,_side,_objectDeleted);

_counter = _objectDeleted getVariable [QGVAR(counter), -1];
if (_counter < 0) exitWith {WARNING("Tried to get counter from null object")};

GVAR(savedObjects) deleteAt _counter;

// profileNamespace setVariable [VAR_SAVE_KEY(budget_west), parseNumber GVAR(budget)];
// TODO: Manually get object cost from ace_fortify_fnc_getCost. Budget is updated *after* event is fired.
profileNamespace setVariable [VAR_SAVE_KEY(savedObjects), GVAR(savedObjects)];

nil;