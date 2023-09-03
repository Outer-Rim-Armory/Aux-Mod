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
 * ["file.wss", getPosASL player] call CWR_fnc_playLocalSound;
 */

params ["_file", "_position", ["_volume", 1]];

if (CWR_Voice_EnableVoiceLines) then
{
    playSound3D
    [
        _file,
        objNull,
        false,
        _position,
        _volume, // volume
        1, // pitch
        0, // distance
        0, // offset
        true // play locally
    ];
};
