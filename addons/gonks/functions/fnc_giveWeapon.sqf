#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Gives a weapon and magazines to ace_player.
 *
 * Arguments:
 * 0: Weapon to add <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * "DC15A" call BNA_KC_gonks_fnc_giveWeapon;
 */

params ["_weapon"];
private ["_values"];
TRACE_1("fnc_giveWeapon",_weapon);

_values = GVAR(weapons) getOrDefaultCall [_weapon, {
    [format ["Weapon kit '%1' does not exist.", _weapon], true, 5] call ace_common_fnc_displayText;
    [];
}];

if (_values isEqualTo []) exitWith {};

_values params ["_weaponClass", "_magazines"];

// Add the magazines first so the gun is pre-loaded
{
    for "_i" from 0 to (_x#1) do {
        ace_player addMagazine (_x#0);
    };
} forEach _magazines;

ace_player addWeapon _weaponClass;

nil;