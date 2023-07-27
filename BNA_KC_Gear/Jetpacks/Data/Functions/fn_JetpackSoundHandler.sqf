if !(hasInterface) exitwith {}; // Function only contains visual effects, no need to execute on the server
if (isGamePaused) exitWith {};

#define GET_STRING(config, defaultValue) (if (isText (config)) then {getText (config)} else {defaultValue})

// Don't play effects for units on the ground or who can't jetpack
if (!(ace_player call BNAKC_fnc_JetCanUseJetpack) or isTouchingGround ace_player) exitWith {};

private _jetpack = backpack ace_player;

// Get path to sound effect
private _sound = GET_STRING(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effectSound", "");
private _volume = 0.05;

_volumeCoef =
(
    ({
        inputAction _x == 1
    } count ["MoveBack", "TurnLeft", "TurnRight", "MoveForward"]) // Movement actions, increase volume for each one pressed
    +
    ({
        ace_player getVariable [_x, false]
    } count ["BNA_KC_Jet_rise", "BNA_KC_Jet_slowFall"]) // Jetpack variables
);
_volume = _volume * _volumeCoef + 0.1;

playSound3D [_sound, ace_player, false, getposASL ace_player, _volume];