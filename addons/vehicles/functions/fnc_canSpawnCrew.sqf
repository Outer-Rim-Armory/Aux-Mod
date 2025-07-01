#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a player can spawn AI crew members for their vehicle.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * True if AI can be spawned, false otherwise <BOOL>
 *
 * Examples:
 * [vehicle ace_player] call BNA_KC_vehicles_fnc_canSpawnCrew;
 *
 * Public: Yes
 */

params [
    ["_vehicle", objNull, [objNull]]
];
private ["_allCrew", "_emptyCrewSeats"];
TRACE_1("fnc_canSpawnCrew",_vehicle);

_crew = [_vehicle, ["driver", "commander", "gunner", "turret"]] call ace_common_fnc_getVehicleCrew;
if (isNull _vehicle or {!(ace_player in _crew)}) exitWith {false};

_emptyCrewSeats = 0;
{
    _emptyCrewSeats = _emptyCrewSeats + (_vehicle emptyPositions _x);
} forEach ["Commander", "Driver", "Gunner", "Turret"];
_emptyCrewSeats > 0;
