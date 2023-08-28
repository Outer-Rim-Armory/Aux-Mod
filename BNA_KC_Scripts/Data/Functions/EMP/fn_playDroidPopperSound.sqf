/*
 * Authors: Leopard20 and DartRuffian
 * Determines which sound effect should play based on user settings, then plays that sound effect.
 *
 * Arguments:
 * 0: Sound Position <ARRAY format PositionASL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [x, y, z] call BNAKC_fnc_playDroidPopperSound;
 */

params ["_position"];

if (BNA_KC_DroidPopper_TCWSoundEnabled) then
{
    playSound3D
    [
        "BNA_KC_Weapons\Grenades\Data\Audio\DroidPopper_Explode.wss",
        objNull,
        false,
        _position,
        BNA_KC_DroidPopper_TCWSoundVolume * 2,
        BNA_KC_DroidPopper_TCWSoundPitch,
        0,
        0,
        true // play locally
    ];
}
else
{
    playSound3D ["MRC\JLTS\weapons\Core\sounds\emp_exp\exp_emp_1.wss", objNull, false, _position, 3, 1, 0, 0, true];
};