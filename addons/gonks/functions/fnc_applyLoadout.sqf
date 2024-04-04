#include "..\script_component.hpp"
/*
 * Author: SweMonkey
 * Edited by DartRuffian
 * Applies a specified loadout to the ace_player
 *
 * Arguments:
 * 0: Name of the loadout to select <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * "Rifleman" call BNA_KC_gonks_fnc_applyLoadout;
 *
 * Public: No
 */

params [
    ["_loadoutName", "", [""]]
];
private ["_loadoutsMap", "_loadoutValues"];
TRACE_1("fnc_applyLoadout",_loadoutName);

if (_loadoutName isEqualTo "") exitWith {};

_loadoutsMap = missionNamespace getVariable [QGVAR(loadouts), [] call FUNC(registerLoadouts)];
_loadoutValues = _loadoutsMap getOrDefaultCall [_loadoutName, {
    hint format ["Loadout '%1' does not exist.", _loadoutName];
}];
_loadoutValues params ["_sideArm", "_launcher", "_binoculars", "_vest", "_backpack", "_weapons", "_magazines", "_items"];

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
ace_player addWeapon _sideArm;
ace_player addWeapon _launcher;

nil;