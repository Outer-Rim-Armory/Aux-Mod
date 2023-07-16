/*
 * Authors: DartRuffian
 * Determines which sound effect should play based on user settings, then plays that sound effect.
 *
 * Arguments:
 * 0: File path of sound to play <String>
 * 1: Sound Position <Array format PositionASL>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["file.wss", getPosASL player] call CWR_fnc_PlayLocalSound;
 */

params ["_file", "_position"];

if (CWR_Voice_EnableVoiceLines) then
{
    playSound3D
    [
        _file,
        objNull,
        false,
        _position,
        1, // volume
        1, // pitch
        0, // distance
        0, // offset
        true // play locally
    ];
};