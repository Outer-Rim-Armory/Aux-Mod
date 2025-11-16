#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if a given unit is a crew member.
 *
 * Arguments:
 * 0: Unit to check (Optional, default: ace_player) <OBJECT>
 * 1: Seat types to include (Optional, default: ["driver", "commander", "gunner", "turret"]) <ARRAY>
 *    - Can be an array including any of: driver, commander, gunner, turret, cargo, ffv
 * 2: The vehicle (Optional, default: objectParent of _unit) <OBJECT>
 *
 * Return Value:
 * True if unit is in specified seat type, otherwise false <BOOL>
 *
 * Examples:
 * (objectParent ace_player) call BNA_KC_core_fnc_isVehicleCrew;
 *
 * Public: Yes
 */

params [
    ["_unit", ace_player, [objNull]],
    ["_types", ["driver", "commander", "gunner", "turret"], [[]]],
    ["_vehicle", objNull, [objNull]]
];
private ["_crew"];
TRACE_3("fnc_isVehicleCrew",_unit,_types,_vehicle);

if (isNull _unit or {_types isEqualTo []}) exitWith {};
if (isNull _vehicle) then {
    _vehicle = objectParent _unit;
};

_crew = [_vehicle, _types] call ace_common_fnc_getVehicleCrew;
_unit in _crew;
