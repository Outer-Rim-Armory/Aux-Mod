#include "..\script_component.hpp"
/*
 * Author: SweMonkey
 * Edited by DartRuffian
 * Applies a specified loadout to the ace_player
 *
 * Arguments:
 * 0: Detachment <STRING>
 * 1: Squad type <STRING>
 * 2: Loadout <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["Infantry", "Security", "Rifleman"] call BNA_KC_gonks_fnc_applyLoadout;
 *
 * Public: No
 */

params ["_detachment", "_squadType", "_loadout"];
private [];
TRACE_3("fnc_applyLoadout",_detachment,_squadType,_loadout);

_values = ((GVAR(loadouts) get _detachment) get _squadType) getOrDefaultCall [_loadout, {
    [format ["No loadout found in '%1\%2\%3'", _detachment, _squadType, _loadout], true, 5] call ace_common_fnc_displayText;
    [];
}];

if (_values isEqualTo []) exitWith {};

_values params ["", "", "_handgun", "_launcher", "_binoculars", "_vest", "_backpack", "", "_magazines", "_items"];

{ace_player removeItems _x;} forEach items ace_player;
{ace_player removeMagazines _x;} forEach magazines ace_player;

if (_vest != "") then {
    ace_player addVest _vest;
};

if (_binoculars != "") then {
    ace_player addMagazine "Laserbatteries";
    ace_player addWeapon _binoculars;
};

removeBackpack ace_player;
ace_player addBackpack _backpack;

{
    for "_i" from 1 to (_x#1) do {
        ace_player addMagazine (_x#0);
    };
} forEach _magazines;

{
    for "_i" from 1 to (_x#1) do {
        ace_player addItem (_x#0);
    };
} forEach _items;

// Add weapons last so they are pre-loaded
ace_player addWeapon _handgun;
ace_player addWeapon _launcher;

nil;
