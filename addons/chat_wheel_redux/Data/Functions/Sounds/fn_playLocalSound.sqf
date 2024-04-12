/*
 * Authors: Leopard20
 * Edited by DartRuffian
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

params ["_file", "_position"];

if (CWR_Voice_EnableVoiceLines) then {
    playSound3D [
        _file,
        objNull,
        false,
        _position,
        CWR_Voice_VoiceVolume, // volume
        1, // pitch
        0, // distance
        0, // offset
        true // play locally
    ];
};
