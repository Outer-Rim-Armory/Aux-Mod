/*
 * Author: DartRuffian
 * Plays the jetpack error sound if the given unit matches certain conditions.
 *
 * Arguments:
 * unit: Object - The unit to play the sound effect on
 *
 * Return Value:
 * Boolean, whether the sound was played or not
 *
 * Example:
 * [player] call BNAKC_Jetpacks_fnc_playErrorSound;
 */


#define ERROR_SOUND_COOLDOWN 5
params ["_unit"];

private _lastPlayedSound = _unit getVariable ["BNA_KC_Jet_lastPlayedSound", 0];

if
(
    isNull (objectParent _unit) and
    [_unit] call ace_common_fnc_isAwake and
    (time - _lastPlayedSound) > ERROR_SOUND_COOLDOWN and
    !(_unit getVariable ["BNA_KC_ATRT_isRiding", false])
) then
{
    playSound3D ["MRC\JLTS\jumppacks\sounds\error.wss", _unit];
    _unit setVariable ["BNA_KC_Jet_lastPlayedSound", time];
};