/*
 * Author: SweMonkey, modified by DartRuffian
 * Clears a player's inventory and assig
 *
 * Arguments:
 * rank: String - The rank to use for helmet/uniform/etc. Must be included in RANK_LIST macro
 *
 * Return Value:
 * None
 *
 * Example:
 * "CR" call BNAKC_fnc_grabUniform;
 */


#include "script_component.sqf"
params [["_rank", "", [""]]];
private ["_rankLoadouts", "_values", "_helmet", "_uniform"];

if (_rank isEqualTo "") exitWith {};

_rankLoadouts = createHashMapFromArray (RANK_LIST apply
{
    [_x, [format ["BNA_KC_Helmet_Phase2_%1", _x], format ["BNA_KC_Uniform_%1", _x]]];
});

_values = _rankLoadouts getOrDefaultCall [_rank, {hint format ["Rank armor '%1' does not exist.", _rank];}];
_values params ["_helmet", "_uniform"];

// Clear inventory
removeAllAssignedItems player;
removeGoggles player;
removeHeadgear player;
removeUniform player;
removeVest player;
removeBackpack player;
removeAllWeapons player;

// Adds uniform and helmet from values
player addHeadgear _helmet;
player forceAddUniform _uniform;

// Adds basic linked items all players will use
player linkItem "ItemMap";
player linkItem "ItemGPS";
player linkItem "SWLB_comlink";
player linkItem "ItemCompass";
player linkItem "Itemwatch";

player linkItem "BNA_KC_NVG_Chip";
if (_rank in RANKS_NCO) then {player linkItem "BNA_KC_NVG_Rangefinder"};
if (_rank in RANKS_OFFICER) then {player linkItem "BNA_KC_NVG_Officer"};