#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Applies a given rank loadout to ace_player.
 *
 * Arguments:
 * 0: Detachment <STRING>
 * 1: Rank <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["Infantry", "CR"] call BNA_KC_gonks_fnc_applyRankLoadout;
 *
 * Public: No
 */

params ["_detachment", "_rank"];
private ["_rankLoadouts", "_values"];
TRACE_2("fnc_applyRank",_detachment,_rank);

_values = (GVAR(ranks) get _detachment) getOrDefaultCall [_rank, {
    [format ["Rank '%1' does not exist or does not have a loadout.", _rank], true, 5] call ace_common_fnc_displayText;
    [];
}];

if (_values isEqualTo []) exitWith {};

_values params ["", "_helmet", "_uniform", "_vest", "_nvg"];

// Save and then remove all inventory items
_magazines = magazines ace_player;
_items = items ace_player;

{ace_player removeMagazine _x} forEach _magazines;
removeAllItems ace_player;

ace_player addHeadgear _helmet;
ace_player forceAddUniform _uniform;
ace_player addVest _vest;

ace_player linkItem "ItemMap";
ace_player linkItem "ItemGPS";
ace_player linkItem "ls_radios_cwp8";
ace_player linkItem "ItemCompass";
ace_player linkItem "ItemWatch";
ace_player linkItem _nvg;

{
    ace_player addItem _x;
} forEach _items;
{
    ace_player addMagazine _x;
} forEach _magazines;

nil;
