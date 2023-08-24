/*
 * Author: DartRuffian
 * Starts the looping audio script for a given object.
 * Mainly used to reduce the amount of code for an init EH in a config.
 *
 * Arguments:
 * object: Object - The object to play the sound.
 *
 * Return Value:
 * Number - <= 1 if successful, < 0 if not
 *
 * Examples:
 * init = "(_this select 0) spawn BNAKC_fnc_loopingAudioInit;";
 */


params ["_object"];

// Wait until mission start, prevents sounds playing in Eden editor
waitUntil { sleep 5; time > 0 and !is3DEN; };

// Start audio (if object should play sound)
if (isText (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Object_soundLoop")) then
{
    private _soundFilename = getText (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Object_soundLoop");
    private _soundDelay = getNumber (configFile >> "CfgVehicles" >> typeOf _object >> "BNA_KC_Object_soundLoopDelay");

    _object setVariable ["BNA_KC_Object_playAudio", true];
    [_object, _soundFilename, _soundDelay] spawn BNAKC_fnc_playLoopingAudio;

    1; // Return 1 for success
}
else
{
    -1; // Return -1 for error
};