/*
 * Author: DartRuffian
 * Adds UserActions to give weapons to the player.
 * Available weapons depends on the player's MOS (BNA_KC_MOS value in player namespace)
 *
 * Arguments:
 * object: Object - The object to add the actions to
 *
 * Return Value:
 * None
 *
 * Example:
 * box call BNAKC_fnc_weaponBoxInit;
 */


#include "script_component.sqf"
params [["_object", objNull, [objNull]]];

if (isNull _object) exitWith {};

{
    _object addAction
    [
        format ["<t color='#FFFFFF'>%1</t>", _x],
        {
            params ["_target", "_caller", "_actionId", "_arguments"];
            _arguments params ["_weapon"];
            [_weapon] call BNAKC_fnc_grabWeapon;
            player setVariable ['BNAKC_Loadout_Menu', 0];
        },
        [_x],
        _forEachIndex,
        false,
        false,
        "",
        format ["%1 call BNAKC_fnc_shouldShowWeapon", str _x]
    ];
} forEachReversed WEAPONS_LIST;