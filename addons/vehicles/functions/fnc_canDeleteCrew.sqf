#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a player can spawn AI crew members for their vehicle.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * True if AI can be deleted, false otherwise <BOOL>
 *
 * Examples:
 * [objectParent ace_player] call BNA_KC_vehicles_fnc_canDeleteCrew;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_allCrew"];
TRACE_1("fnc_canDeleteCrew",_vehicle);

_crew = [_vehicle, ["driver", "commander", "gunner", "turret"]] call ace_common_fnc_getVehicleCrew;
if (isNull _vehicle or {!(ace_player in _crew)}) exitWith {false};

_crew = _crew select {!isPlayer _x};
(_crew isEqualTo []);