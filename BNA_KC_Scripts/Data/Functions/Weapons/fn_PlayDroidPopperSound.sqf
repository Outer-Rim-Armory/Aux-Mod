/*
 * Author: Leopard20
 * Plays the sound effect for a droid popper exploding using the client's user settings.
 *
 * Arguments:
 * 0: Sound Position <ARRAY format PositionASL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [x, y, z] call BNAKC_fnc_PlayDroidPopperSound;
 */

params ["_pos"];

playSound3D
[
    "BNA_KC_Gear\Weapons\Data\Audio\BNA_KC_DroidPopper_Exp.wss",
    objNull,
    false,
    _pos,
    BNA_KC_DroidPopper_TCWSoundVolume * 2,
    BNA_KC_DroidPopper_TCWSoundPitch,
    0,
    0,
    true // play locally
];