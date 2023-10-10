/*
 * Author: DartRuffian
 * Assigns an MOS to the player
 *
 * Arguments:
 * mos: String - MOS (Rifleman, Medic, etc.)
 *
 * Return Value:
 * None
 *
 * Example:
 * "Rifleman" call BNAKC_fnc_setMOS;
 */


params [["_mos", "", [""]]];
private [];

if (_mos == "") exitWith {};

player setVariable ["BNA_KC_MOS", _mos];
_mos call BNAKC_fnc_grabLoadout;