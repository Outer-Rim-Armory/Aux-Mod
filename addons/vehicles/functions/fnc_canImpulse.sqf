#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Determines whether a player can activate a vehicle's impulse.
 *
 * Arguments:
 * 0: The vehicle <OBJECT>
 *
 * Return Value:
 * True if the vehicle can impulse, otherwise false <BOOL>
 *
 * Examples:
 * (objectParent ace_player) call BNA_KC_vehicles_fnc_canImpulse;
 *
 * Public: No
 */

params ["_vehicle"];
TRACE_1("fnc_canImpulse",_vehicle);

isEngineOn _vehicle and {ace_player == currentPilot _vehicle} and {!isTouchingGround _vehicle};
