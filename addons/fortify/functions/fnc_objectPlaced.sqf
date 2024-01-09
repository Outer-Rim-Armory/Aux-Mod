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
 * ["acex_fortify_objectPlaced", LINKFUNC(objectPlaced)] call CBA_fnc_addEventHandler;
 */

params ["_player", "_side", "_objectPlaced"];
private ["_positionASL"];

_positionASL = getPosASL _objectPlaced;

switch (typeOf _objectPlaced) do {
    case "Land_PierLadder_F": {
        _positionASL set [2, _positionASL#2 + 2];
        _objectPlaced setPosASL _positionASL;
    }
    default {};
};