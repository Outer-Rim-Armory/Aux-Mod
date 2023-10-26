/*
 * Author: SweMonkey, modified by DartRuffian
 * Clears a player's inventory and assigns the correct helmet, uniform, and nvgs
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
private ["_rankLoadouts", "_values", "_helmet", "_uniform", "_vest"];

if (_rank isEqualTo "") exitWith {};

_rankLoadouts = createHashMapFromArray (RANK_LIST apply
{
    [_x, [format ["BNA_KC_Helmet_Phase2_%1", _x], format ["BNA_KC_Uniform_%1", _x]]];
});
_vest = switch (_rank) do
{
    case "CLC": {"BNA_KC_Vest_CLC"};
    case "CPL": {"BNA_KC_Vest_CPL"};
    case "CS": {"BNA_KC_Vest_CS"};
    case "CSS": {"BNA_KC_Vest_CSS"};
    case "CSFC": {"BNA_KC_Vest_CSFC"};
    case "CMS": {"BNA_KC_Vest_CMS"};
    case "CSM": {"BNA_KC_Vest_CSM"};
    case "WO": {"BNA_KC_Vest_Officer"};
    case "WO1": {"BNA_KC_Vest_Officer"};
    case "WO2": {"BNA_KC_Vest_Officer"};
    case "WO3": {"BNA_KC_Vest_Officer"};
    case "LT": {"BNA_KC_Vest_Officer"};
    case "1LT": {"BNA_KC_Vest_Officer"};
    case "CAP": {"BNA_KC_Vest_Officer"};
    case "MAJ": {"BNA_KC_Vest_Officer"};
    case "COM": {"BNA_KC_Vest_Officer"};
    default {"BNA_KC_Vest_Basic"};
};

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
player addVest _vest;

// Adds basic linked items all players will use
player linkItem "ItemMap";
player linkItem "ItemGPS";
player linkItem "SWLB_comlink";
player linkItem "ItemCompass";
player linkItem "Itemwatch";

player linkItem "BNA_KC_NVG_Chip";
if (_rank in RANKS_NCO) then {player linkItem "BNA_KC_NVG_Rangefinder"};
if (_rank in RANKS_OFFICER) then {player linkItem "BNA_KC_NVG_Officer"};