#include "..\script_component.hpp"
/*
 * Author: Hypoxic
 * Edited by DartRuffian
 * Updates the name of a map location.
 *
 * Arguments:
 * 0: Position near a location <OBJECT | ARRAY>
 *    - Can be Object, array format Position2D or Position3D
 * 1: The new name <STRING>
 * 2: Include terrain objects (optional, default: false) <BOOL>
 *    - Terrain objects include mountains, rocks, hills, etc.
 *
 * Return Value:
 * None
 *
 * Example:
 * [[500, 500], "My new name"] call BNA_KC_map_fnc_updateLocation;
 *
 * Public: Yes
 */

params [
    ["_position", objNull, [objNull, []]],
    ["_text", "", [""]],
    ["_includeTerrain", false, [false]]
];
private ["_filter", "_location"];
TRACE_3("fnc_updateLocation",_position,_text,_includeTerrain);

if !(isServer) exitWith {WARNING("fnc_updateLocation executed from non-server context.")};

_filter = [
    "NameCityCapital",
    "NameCity",
    "NameVillage",
    "NameLocal",
    "Name"
];

if (_includeTerrain) then {
    _filter append [
        "Mount",
        "NameMarine",
        "Hill",
        "ViewPoint",
        "RockArea",
        "BorderCrossing",
        "VegetationBroadleaf",
        "VegetationFir",
        "VegetationPalm",
        "VegetationVineyard"
    ];
};

_location = createLocation [nearestLocation [_position, _filter, 1]];
if (isNull _location) exitWith {
    {
        ["ace_common_displayTextStructured", [format ["fnc_updateLocation: No location found near %1.", _position], 2, _x], _x] call CBA_fnc_targetEvent;
    } forEach allPlayers;
};
_location setText _text;
nil;
