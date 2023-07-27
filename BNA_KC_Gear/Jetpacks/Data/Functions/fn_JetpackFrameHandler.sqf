#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
#define BASE_SPEED 5
#define AIR_RESISTANCE 8

// Only triggered in singleplayer, prevents build-up when paused.
if (isGamePaused) exitWith {};

private _thisHandler = _this select 1;

// Check if player can use jetpack, could potentially change while FH is running, such as dying; going uncon; etc.
if (!(ace_player call BNAKC_fnc_JetCanUseJetpack) or isTouchingGround ace_player) exitWith
{
    [_thisHandler] call CBA_fnc_removePerFrameHandler;
    // Wait a bit before removing effects, makes it look nicer
    [
        {
            // Delete effects
            // TODO: Delete fire effects, wait, then delete smoke?
            // TODO: Fix effects not disappearing when going uncon
            // TODO: Fix effects not appearing when doing multiple jumps quickly
            {
                deleteVehicle _x;
            } forEach (ace_player getVariable ["BNA_KC_Jet_effectSources", []]);
        },
        [],
        0.5
    ] call CBA_fnc_WaitAndExecute;
};


// Jetpack properties
private _jetpack = backpack ace_player;
private _jetSpeed = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_speed", 1);
private _jetStrength = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_strength", 1);

// Speed, position, and direction
// Used for calculating mid-air movement
private _velocity = velocity ace_player;
private _direction = direction ace_player;

private _speed = 0;

// Mid-air movement, apply speed to unit based on keyboard input
// Uses diag_deltaTime to account for performance
if (inputAction "MoveForward" == 1) then
{
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity =
    [
        (_velocity select 0) + (sin _direction * _speed),
        (_velocity select 1) + (cos _direction * _speed),
        _velocity select 2
    ];
};

if (inputAction "TurnLeft" == 1) then
{
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity =
    [
        (_velocity select 0) + (sin (_direction - 90) * _speed),
        (_velocity select 1) + (cos (_direction - 90) * _speed),
        _velocity select 2
    ];
};

if (inputAction "TurnRight" == 1) then
{
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity =
    [
        (_velocity select 0) + (sin (_direction + 90) * _speed),
        (_velocity select 1) + (cos (_direction + 90) * _speed),
        _velocity select 2
    ];
};

if (inputAction "MoveBack" == 1) then
{
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity =
    [
        (_velocity select 0) + (sin (_direction - 180) * _speed),
        (_velocity select 1) + (cos (_direction - 180) * _speed),
        _velocity select 2
    ];
};

if (ace_player getvariable ["BNA_KC_Jet_rise", false]) then
{
    _speed = _jetSpeed * BASE_SPEED * diag_deltaTime;
    _velocity set [2, (_velocity#2) + (_jetStrength * diag_deltaTime)];
};

if (ace_player getVariable ["BNA_KC_Jet_slowFall", false]) then
{
    _velocity set [2, (_velocity#2) max -5];
    // Caps downward velocity
};

// Fix for the spam slow fall bug, where the player's fall speed kept getting lower and lower
private _origVertSpeed = _velocity select 2;

// Slow player down mid-air, used to simulate air-resistance
private _airResistanceCoef = -0.1 * diag_deltaTime * AIR_RESISTANCE;
private _airResistance = _velocity vectorMultiply _airResistanceCoef;
_velocity = _velocity vectorAdd _airResistance;
_velocity set [2, _origVertSpeed min (_velocity # 2)]; // Prevents the player from falling slower than their original speed

// Apply final velocity
ace_player setVelocity _velocity;