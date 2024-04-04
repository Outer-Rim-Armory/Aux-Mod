#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Applies a given rank loadout to ace_player
 *
 * Arguments:
 * 0: Rank loadout key from BNA_KC_objects_rankLoadouts
 *
 * Return Value:
 * None
 *
 * Example:
 * "CR" call BNA_KC_gonks_fnc_applyRankLoadout;
 *
 * Public: No
 */

params [
    ["_rank", "", [""]]
];
private ["_rankLoadouts", "_values"];
TRACE_1("fnc_applyRankLoadout",_rank);

_rankLoadouts = missionNamespace getVariable [QGVAR(rankLoadouts), [] call FUNC(registerRankLoadouts)];
_values = _rankLoadouts getOrDefaultCall [_rank, {hint format ["Rank '%1' does not exist.", _rank];}];
_values params ["_helmet", "_uniform", "_vest", "_nvg"];

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
ace_player linkItem "SWLB_Comlink";
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