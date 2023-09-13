/*
 * Author: DartRuffian
 * Adds an ACE Self Interact action to the player.
 * The action is only displayed if BNA_KC_Map_CreateMarkBind is not set.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call BNAKC_fnc_CreateMarkAction;
 */


private _keyEntry = ["Keeli Company Aux Mod", "BNA_KC_Map_CreateMarkBind"] call CBA_fnc_getKeybind;

private _name = _keyEntry select 2;
private _code = _keyEntry select 3;
private _keyBind = (_keyEntry select 5) select 0; // Array of [DIK Code, [Modifiers]]

private _markAction =
[
    "BNA_KC_CreateMark_Action",
    "Mark Building Clear",
    "", // Icon
    _code,
    {
        _keyEntry = ["Keeli Company Aux Mod", "BNA_KC_Map_CreateMarkBind"] call CBA_fnc_getKeybind;
        _keyBind = (_keyEntry select 5) select 0;
        _keyBind isEqualTo -1;
    }
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _markAction] call ace_interact_menu_fnc_addActionToObject;