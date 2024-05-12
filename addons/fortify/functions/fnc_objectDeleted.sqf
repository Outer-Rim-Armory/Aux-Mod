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
private ["_counter", "_class", "_budgetKey", "_budgetSide"];
TRACE_3("fnc_objectDeleted",_player,_side,_objectDeleted);

if (GVAR(persistenceEnabled)) then {
    _counter = _objectDeleted getVariable [QGVAR(counter), -1];
    _class = typeOf _objectDeleted;
    if (_counter < 0) exitWith {WARNING("Tried to get counter from null object")};

    GVAR(savedObjects) deleteAt _counter;

    _budgetKey = format [QGVAR(TRIPLES(budget,%1,%2.%3)), _side, missionName, worldName];
    _budgetSide = missionNamespace getVariable [format ["ace_fortify_budget_%1", _side], 0];
    _budgetSide = _budgetSide + ([_side, _class] call ace_fortify_fnc_getCost); // Event is fired before budget is updated

    profileNamespace setVariable [VAR_SAVE_KEY(savedObjects), GVAR(savedObjects)];
    profileNamespace setVariable [_budgetKey, _budgetSide];
};

nil;