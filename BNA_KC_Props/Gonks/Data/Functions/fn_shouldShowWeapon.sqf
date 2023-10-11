/*
 * Author: DartRuffian
 * Determines if a certain weapon should be shown to the player based on their MOS.
 *
 * Arguments:
 * weapon: String - The weapon name to check
 *
 * Return Value:
 * Boolean - Whether the weapon should be shown
 *
 * Example:
 * "Rifleman" call BNAKC_fnc_shouldShowWeapon;
 */


params [["_weapon", "", [""]]];
private ["_mos", "_loadouts", "_mosWeapons", "_loadoutPage"];

if (_weapon == "") exitWith {};

_mos = player getVariable ["BNA_KC_MOS", "Rifleman"];
_loadouts = missionNamespace getVariable "BNA_KC_Loadouts";
_mosWeapons = (_loadouts getOrDefault [_mos, ["DC15A", "DC15S"]]) select 4;

_loadoutPage = player getVariable ["BNAKC_Loadout_Menu", 0];
_weapon in _mosWeapons and _loadoutPage == 1;