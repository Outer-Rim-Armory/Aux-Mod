#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a weapon option should displayed to the player in a loadout box.
 *
 * Arguments:
 * 0: Weapon key name from BNA_KC_objects_weapons in missionNamespace
 *
 * Return Value:
 * Whether the option should be shown <BOOL>
 *
 * Example:
 * "DC15S" call BNA_KC_objects_fnc_canShowWeaponOption;
 */

params [
	["_weapon", "", [""]]
];
private ["_mos", "_loadouts", "_mosWeapons", "_loadoutPage"];
TRACE_1("fnc_canShowWeaponOption",_weapon);

_mos = ace_player getVariable [QGVAR(mos), "Rifleman"];
_loadouts = missionNamespace getVariable [QGVAR(loadouts), [] call FUNC(registerWeapons)];
_mosWeapons = (_loadouts getOrDefault [_mos, ["DC15A", "DC15S"]]) select 4;

_loadoutPage = ace_player getVariable [QGVAR(LoadoutMenu_Page), MENU_PAGE_HOME];
_weapon in _mosWeapons and _loadoutPage == LOADOUTMENU_PAGE_WEAPONS;