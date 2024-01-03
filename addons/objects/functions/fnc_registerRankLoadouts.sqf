#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Registers rank loadout options to missionNamespace
 *
 * Arguments:
 * 0: Whether to rebuild the ranks hashmap <BOOL>
 *
 * Return Value:
 * All registered ranks <HASHMAP>
 *
 * Example:
 * call BNA_KC_objects_fnc_registerRankLoadouts;
 */

params [
    ["_rebuild", false, [false]]
];
private ["_rankLoadouts"];
TRACE_1("fnc_registerRankLoadouts",_rebuild);

_rankLoadouts = missionNamespace getVariable [QGVAR(rankLoadouts), createHashmap];
if (count _rankLoadouts isNotEqualTo 0 and !_rebuild) exitWith {
    _rankLoadouts;
};

_rankLoadouts = createHashMap;

{
    private ["_vest", "_nvg", "_values"];

    _vest = switch (_x) do {
        case "CLC": {QCLASS(Vest_CLC)};
        case "CPL": {QCLASS(Vest_CPL)};
        case "CS": {QCLASS(Vest_CS)};
        case "CSS": {QCLASS(Vest_CSS)};
        case "CSFC": {QCLASS(Vest_CSFC)};
        case "CMS": {QCLASS(Vest_CMS)};
        case "CSM": {QCLASS(Vest_CSM)};
        case "WO": {QCLASS(Vest_WO)};
        case "WO1": {QCLASS(Vest_WO1)};
        case "WO2": {QCLASS(Vest_WO2)};
        case "WO3": {QCLASS(Vest_WO3)};
        case "LT": {QCLASS(Vest_LT)};
        case "1LT": {QCLASS(Vest_1LT)};
        case "CAP": {QCLASS(Vest_CAP)};
        case "MAJ": {QCLASS(Vest_MAJ)};
        case "COM": {QCLASS(Vest_COM)};
        default {QCLASS(Vest_Basic)};
    };

    _nvg = switch (true) do {
        case _x in LOADOUTS_RANKS_NCO: {QCLASS(NVG_Rangefinder)};
        case _x in LOADOUTS_RANKS_OFFICER: {QCLASS(NVG_Officer)};
        default {QCLASS(NVG_Chip)};
    };

    _values = [
        format [QCLASS(Helmet_Phase2_%1), _x],
        format [QCLASS(Uniform_%1), _x],
        _vest,
        _nvg
    ];

    _rankLoadouts set [_x, _values];
} forEach LOADOUTS_RANKS_LIST;

missionNamespace setVariable [QGVAR(rankLoadouts), _rankLoadouts, true];
_rankLoadouts;