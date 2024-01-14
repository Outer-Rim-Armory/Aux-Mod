#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Init function for a loadout box
 *
 * Arguments:
 * 0: The object to add the actions to <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * "DC15A" call BNA_KC_objects_fnc_giveWeapon;
 */

params [
    ["_weaponName", "", [""]]
];
private ["_weaponsMap", "_weaponValues"];
TRACE_1("fnc_giveWeapon",_weaponName);

_weaponsMap = missionNamespace getVariable [QGVAR(weapons), [] call FUNC(registerWeapons)];
_weaponValues = _weaponsMap getOrDefaultCall [_weaponName, {
    hint format ["Weapon '%1' does not exist.", _weaponName];
}];

_weaponValues params ["_weapon", "_magazines"];

// Add the magazines first so the gun is pre-loaded
{
    for "_i" from 0 to (_x#1) do {
        ace_player addMagazine (_x#0);
    };
} forEach _magazines;

ace_player addWeapon _weapon;

nil;