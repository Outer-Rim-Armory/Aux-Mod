/*
 * Author: DartRuffian
 * Plays a sound effect at the location of an object every X seconds.
 * Only executes if running on the server's end.
 *
 * Arguments:
 * object: Object - The object to play the sound.
 * filename: String - File path to given sound effect.
 * delay: Number - (Optional, default 1) Time in seconds between each sound effect.
 *
 * Return Value:
 * None
 *
 * Examples:
 * [player, "A3\Sounds_F\sfx\blip1.wss"] spawn BNAKC_fnc_playLoopingAudio; // Plays the "blip" sound every second
 */


params ["_object", "_filename", ["_delay", 1]];
if (!isServer) exitWith {}; // Exit if not the server

while {_object getVariable ["BNA_KC_Object_playAudio", false]} do
{
    playSound3D [_filename, _object, false, getPosASL _object, 1, 1, 50];
    sleep _delay;
};