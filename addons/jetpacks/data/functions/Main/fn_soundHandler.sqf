#include "..\..\..\script_component.hpp"
/*
 * Authors: DartRuffian
 * Plays sound effects while a player is using a jetpack. Sound effects stop being played when player is no longer using a jetpack.
 *
 * Arguments:
 * None, uses ace_player
 *
 * Return Value:
 * None
 *
 * Example:
 * BNA_KC_Jet_JetpackSoundHandle = [BNA_KC_Jetpacks_fnc_frameHandler] call CBA_fnc_AddPerFrameHandler;
 */


if !(hasInterface) exitwith {}; // Function only contains sound effects, no need to execute on the server
if (isGamePaused) exitWith {};  // Can cause sound effects to build up

#define GET_STRING(config, defaultValue) (if (isText (config)) then {getText (config)} else {defaultValue})

// Don't play effects for units on the ground or who can't jetpack
if (!(ace_player call FUNC(canJetpack)) or isTouchingGround ace_player) exitWith {};

private _jetpack = backpack ace_player;

// Get path to sound effect
private _sound = GET_STRING(configFile >> "CfgVehicles" >> _jetpack >> QGVAR(effectSound),"");
private _volume = 0.05; // Increase volume for each movement key (including slow fall and rising)

_volumeCoef = (
    // Count each movement key pressed
    ({
        inputAction _x == 1
    } count ["MoveBack", "TurnLeft", "TurnRight", "MoveForward"]) // Movement actions, increase volume for each one pressed
    +
    ({
        ace_player getVariable [_x, false]
    } count ["BNA_KC_Jet_rise", "BNA_KC_Jet_slowFall", "BNA_KC_Jet_hover"]) // Jetpack variables
);
_volume = _volume * _volumeCoef + 0.1;

playSound3D [_sound, ace_player, false, getposASL ace_player, _volume];