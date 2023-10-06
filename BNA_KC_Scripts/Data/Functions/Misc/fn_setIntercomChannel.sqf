/*
 * Author: DartRuffian
 * When a unit enters a vehicle, automatically set them to the correct intercom.
 * Crew are set to "Crew" (Intercom 1)
 * Passengers are set to "Cargo" (Intercom 0)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * getIn = "_this call BNAKC_fnc_setIntercomChannel";
 */


params ["_vehicle", "_role", "_unit"];

if !(isMultiplayer) exitWith {};
if !(_unit call CWR_fnc_isPlayer) exitWith {};

switch (_role) do
{
    case "driver";
    case "gunner": { _vehicle setVariable [format ["TFAR_IntercomSlot_%1", (netID _unit)], 1, true]; };
    default { params ["_vehicle", "_role", "_unit"]; _vehicle setVariable [format ["TFAR_IntercomSlot_%1", (netID _unit)], 0, true]; };
};