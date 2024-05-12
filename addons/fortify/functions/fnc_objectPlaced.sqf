#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * ACE Fortify objectPlaced event handler. Used to modify objects after being placed.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/fortify-framework.html#2-events
 *
 * Return Value:
 * None
 *
 * Example:
 * ["acex_fortify_objectPlaced", BNA_KC_fortify_fnc_objectPlaced] call CBA_fnc_addEventHandler;
 *
 * Public: No
 */

params ["_player", "_side", "_objectPlaced"];
private ["_positionASL"];
TRACE_3("fnc_objectPlaced",_player,_side,_objectPlaced);

_positionASL = getPosASL _objectPlaced;

switch (typeOf _objectPlaced) do {
    case "Land_PierLadder_F": {
        _positionASL set [2, _positionASL#2 + 2];
        _objectPlaced setPosASL _positionASL;
    };
    default {};
};

GVAR(savedObjects) set [GVAR(counter), [typeOf _objectPlaced, _side, _positionASL, [vectorDir _objectPlaced, vectorUp _objectPlaced]]];
_objectPlaced setVariable [QGVAR(counter), GVAR(counter)];
GVAR(counter) = GVAR(counter) + 1;

profileNamespace setVariable [VAR_SAVE_KEY(counter), GVAR(counter)];
// profileNamespace setVariable [VAR_SAVE_KEY(budget_west), parseNumber GVAR(budget)];
profileNamespace setVariable [VAR_SAVE_KEY(savedObjects), GVAR(savedObjects)];

nil;