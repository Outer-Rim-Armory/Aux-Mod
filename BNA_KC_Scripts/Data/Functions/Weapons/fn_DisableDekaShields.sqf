/*
 * Author: DartRuffian
 * Disables the shields for Droidekas. Works with both 3AS and 501st Droidekas.
 * 501st's Droideka shields are normal objects, and are just deleted like any other object.
 *
 * Arguments:
 * 0: Array of 3AS Droidekas <ARRAY>
 * 1: Array of Droideka shields <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[deka1, deka2], [shield]] call BNAKC_fnc_DisableDekaShields;
 */

params ["_dekas", "_dekaShields"];

{ deleteVehicle _x; } forEach _dekaShields;  // Remove 501st shields
{ _x setHitPointDamage ["HitShield", 1]; } forEach _dekas;  // Damages the droideka shield
{ _x animateSource ["ShieldLayer_BaseFront", 1, true]; } forEach _dekas;  // Animates the shield turning off