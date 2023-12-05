/*
 * Author: DartRuffian
 * Adds UserActions for loadouts.
 *
 * Arguments:
 * object: Object - The object to add the actions to
 *
 * Return Value:
 * None
 *
 * Example:
 * box call BNAKC_fnc_loadoutBoxInit;
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
            _arguments params ["_loadout"];
            [_loadout] call BNAKC_fnc_setMos;
			player setVariable ['BNAKC_Loadout_Menu', 1];
        },
        [_x],
        (count LOADOUTS) - _forEachIndex,
        false,
        false,
        "",
        "player getVariable ['BNAKC_Loadout_Menu', 0] == 0"
    ];
} forEach LOADOUTS;