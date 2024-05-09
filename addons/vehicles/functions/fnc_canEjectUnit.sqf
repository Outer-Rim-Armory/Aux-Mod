#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines if ace_player can eject a given unit from a vehicle.
 *
 * Arguments:
 * 0: The unit being ejected <OBJECT>
 * 1: ace_player
 *
 * Return Value:
 * True if unit can be ejected, otherwise false <BOOL>
 *
 * Examples:
 * [_unit, ace_player] call BNA_KC_vehicles_fnc_canEjectUnit;
 *
 * Public: No
 */

params ["_target", "_player"];
private ["_allCrew"];
TRACE_3("fnc_canEjectUnit",_target,_player,_params);

if (objectParent _target == objectParent _player and {
    private _crew = [objectParent _player, ["driver", "commander", "gunner", "turret"]] call ace_common_fnc_getVehicleCrew;
    _player in _crew;
}) exitWith {true};

false;