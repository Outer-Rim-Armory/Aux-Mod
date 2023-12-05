/*
 * Author: DartRuffian
 * Returns if a given unit is in a custom camera, can only ever return true if the passed unit is the local player.
 *
 * Arguments:
 * unit: Object - The unit to check
 *
 * Return Value:
 * Boolean - True if the local player is in a custom camera.
 *
 * Example:
 * ace_player call BNAKC_fnc_inCustomCamera; // true
 * unit1 call BNAKC_fnc_inCustomCamera; // false
 */


params ["_unit"];
if (_unit != player) exitWith { false };

!(call CBA_fnc_getActiveFeatureCamera isEqualTo ""); // "curator", "ace_arsenal", etc.