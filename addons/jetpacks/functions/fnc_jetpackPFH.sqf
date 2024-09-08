#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * CBA Per-Frame Handler for jetpack movement.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Jetpack <OBJECT>
 * 2: Strength <NUMBER>
 * 3: Speed <NUMBER>
 * 4: Freefall height <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ace_player, backpackContainer ace_player, 5, 5, -1] call BNA_KC_jetpacks_fnc_jetpackPFH;
 *
 * Public: No
 */

#define BASE_SPEED 5
#define SAFE_FALL_SPEED -5

params ["_unit", "_jetpack", "_strength", "_speed", "_freefallHeight"];
TRACE_5("fnc_jetpackPFH",_unit,_jetpack,_strength,_speed,_freefallHeight);

if (_unit isNotEqualTo ace_player) exitWith {};

private _function = {
    params ["_handle", "_unit", "_jetpack", "_strength", "_speed", "_freefallHeight"];
    TRACE_6("Jetpack PFH",_handle,_unit,_jetpack,_strength,_speed,_freefallHeight);

    private _height = (getPosASL _unit)#2;

    if (isGamePaused) exitWith {};
    if (isTouchingGround _unit or
        {!(_unit call FUNC(canJetpack))} or
        {_height < -2} // Intentional, shut off jetpack when landing in deep water
    ) exitWith {
        _unit setVariable [QGVAR(usingJetpack), nil, true];
    };

    private _velocity = velocity _unit;
    private _direction = direction _unit;
    private _speedCoef = 0;

    // Calculate horizontal movement
    // TODO: Fix the classic "diagonal = faster" bug
    if (inputAction "MoveForward" == 1) then {
        _speedCoef = _speed * BASE_SPEED * diag_deltaTime;
        _velocity = [
            (_velocity select 0) + (sin _direction * _speedCoef),
            (_velocity select 1) + (cos _direction * _speedCoef),
            _velocity select 2
        ];
    };

    if (inputAction "TurnLeft" == 1) then {
        _speedCoef = _speed * BASE_SPEED * diag_deltaTime;
        _velocity = [
            (_velocity select 0) + (sin (_direction - 90) * _speedCoef),
            (_velocity select 1) + (cos (_direction - 90) * _speedCoef),
            _velocity select 2
        ];
    };

    if (inputAction "TurnRight" == 1) then {
        _speedCoef = _speed * BASE_SPEED * diag_deltaTime;
        _velocity = [
            (_velocity select 0) + (sin (_direction + 90) * _speedCoef),
            (_velocity select 1) + (cos (_direction + 90) * _speedCoef),
            _velocity select 2
        ];
    };

    if (inputAction "MoveBack" == 1) then {
        _speedCoef = _speed * BASE_SPEED * diag_deltaTime;
        _velocity = [
            (_velocity select 0) + (sin (_direction - 180) * _speedCoef),
            (_velocity select 1) + (cos (_direction - 180) * _speedCoef),
            _velocity select 2
        ];
    };

    // Adjust velocity based on jetpack movement keybinds
    private _newFallSpeed = switch (true) do {
        case (GVAR(rise)): {
            _velocity#2 + (_strength * diag_deltaTime);
        };
        case (GVAR(slowFall)): {
            private _fallSpeed = _velocity#2;
            _fallSpeed = CLAMP(_fallSpeed + 0.1,SAFE_FALL_SPEED,_velocity#2);
            _fallSpeed;
        };
        case (GVAR(hover)): {
            // Make the hover not 100% perfect
            (random 2) - 1;
        };
        default {
            _velocity#2;
        };
    };
    _velocity set [2, _newFallSpeed];

    // Simulate air resistance
    private _airResistanceCoef = -0.1 * diag_deltaTime * GVAR(airResistance);
    private _airResistance = _velocity vectorMultiply _airResistanceCoef;
    _velocity = _velocity vectorAdd _airResistance;

    // Apply final velocity
    _unit setVelocity _velocity;
};

private _condition = {
    params ["", "_unit"];
    _unit getVariable [QGVAR(usingJetpack), false];
};

private _exitCode = {
    params ["", "_unit", "_jetpack", "_strength", "_speed", "_freefallHeight"];
    TRACE_5("Stopped jetpack",_unit,_jetpack,_strength,_speed,_freefallHeight);
    _unit setVariable [QGVAR(usingJetpack), nil, true]; // Make sure value is always correct across machines
    private _originalHeight = _unit getVariable [QGVAR(freefallHeight), -1];
    _unit setUnitFreefallHeight _originalHeight;
    [QGVAR(jetpackStopped), [_unit, _jetpack, _strength, _speed, _freefallHeight]] call CBA_fnc_globalEvent;
};

[
    _function,
    _condition,
    _exitCode,
    0,
    _this
] call EFUNC(core,tempPFH);