/*
 * Author: DartRuffian
 * Opens a limited arsenal with all custom items.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_fnc_openCustomsArsenal;
 */


private ["_customItems"];

_customItems = call BNAKC_fnc_getAllCustoms;

[player, _customItems] call ace_arsenal_fnc_addVirtualItems;
[player, player] call ace_arsenal_fnc_openBox;