#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles player movement while jetpacking. Deletes itself when player is no longer using a jetpack.
 *
 * Arguments:
 * None, uses ace_player
 *
 * Return Value:
 * None
 *
 * Example:
 * BNA_KC_Jet_JetpackHandle = [BNA_KC_Jetpacks_fnc_frameHandler] call CBA_fnc_AddPerFrameHandler;
 */

// Contants and macros
#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
#define BASE_SPEED 5

// Only triggered in singleplayer, prevents build-up when paused.
if (isGamePaused) exitWith {};

// Used for removing the handler with CBA_fnc_RemovePerFrameHandler
private _thisHandler = _this select 1;

// Check if player can use jetpack, could potentially change while FH is running, such as dying; going uncon; etc.
if (!(ace_player call FUNC(canJetpack)) or isTouchingGround ace_player) exitWith {
    [_thisHandler] call CBA_fnc_removePerFrameHandler;
    BNA_KC_Jet_JetpackHandle = nil; // Set to nil, just removing the handler keeps the global variable's value

    [BNA_KC_Jet_JetpackFuelHandle] call CBA_fnc_removePerFrameHandler;
    BNA_KC_Jet_JetpackFuelHandle = nil;

    ace_player setUnitFreefallHeight -1;

    ace_player setVariable ["BNA_KC_Jet_hover", false];

     // Wait a bit before removing effects, makes it look nicer
    [
        {
            ace_player call FUNC(clearEffects);
            [BNA_KC_Jet_JetpackSoundHandle] call CBA_fnc_removePerFrameHandler;
            BNA_KC_Jet_JetpackSoundHandle = nil;
            ace_player setVariable [QGVAR(usingJetpack), false, true];
        },
        [],
        0.1
    ] call CBA_fnc_waitAndExecute;
};


// Jetpack properties
private _jetpack = backpack ace_player;
private _jetSpeed = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> QGVAR(speed),JETPACK_SPEED_DEFAULT);
private _jetStrength = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> QGVAR(strength),JETPACK_STRENGTH_DEFAULT);

// Speed, position, and direction
// Used for calculating mid-air movement
private _velocity = velocity ace_player;
private _direction = direction ace_player;

private _speed = 0;

// Mid-air movement, apply speed to unit based on keyboard input
// Uses diag_deltaTime to account for performance
if (inputAction "MoveForward" == 1) then {
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity =
    [
        (_velocity select 0) + (sin _direction * _speed),
        (_velocity select 1) + (cos _direction * _speed),
        _velocity select 2
    ];
};

if (inputAction "TurnLeft" == 1) then {
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity =
    [
        (_velocity select 0) + (sin (_direction - 90) * _speed),
        (_velocity select 1) + (cos (_direction - 90) * _speed),
        _velocity select 2
    ];
};

if (inputAction "TurnRight" == 1) then {
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity =
    [
        (_velocity select 0) + (sin (_direction + 90) * _speed),
        (_velocity select 1) + (cos (_direction + 90) * _speed),
        _velocity select 2
    ];
};

if (inputAction "MoveBack" == 1) then {
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity =
    [
        (_velocity select 0) + (sin (_direction - 180) * _speed),
        (_velocity select 1) + (cos (_direction - 180) * _speed),
        _velocity select 2
    ];
};

if (ace_player getvariable ["BNA_KC_Jet_rise", false]) then {
    _velocity set [2, (_velocity#2) + (_jetStrength * diag_deltaTime)];
};

if (ace_player getVariable ["BNA_KC_Jet_slowFall", false]) then {
    _velocity set [2, (_velocity#2) max -5];
    // Caps downward velocity
};

if (ace_player getVariable ["BNA_KC_Jet_hover", false]) then {
    private _speed = random 2; // Get random number
    _speed = _speed - 1;       // Allows for potentially negative values, makes the hover not 100% perfect

    _velocity set [2, _speed];
};

// Slow player down mid-air, used to simulate air-resistance
private _airResistanceCoef = -0.1 * diag_deltaTime * GVAR(airResistance);
private _airResistance = _velocity vectorMultiply _airResistanceCoef;
_velocity = _velocity vectorAdd _airResistance;

// Apply final velocity
ace_player setVelocity _velocity;