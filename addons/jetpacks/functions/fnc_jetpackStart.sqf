#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Starts the jetpack sequence.
 *
 * Arguments:
 * 0: Whether to start the jetpack with a jump (if grounded) (optional, default: false) <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call BNA_KC_jetpacks_fnc_jetpackStart;
 *
 * Public: No
 */

#define BOOST_MAX_VELOCITY 6

params [
    ["_boost", false, [false]]
];
TRACE_1("fnc_jetpackStart",_boost);

if (ace_player getVariable [QGVAR(usingJetpack), false] or
    {!(ace_player call FUNC(hasJetpack))}
) exitWith {};
if !(ace_player call FUNC(canJetpack)) exitWith {
    ace_player call FUNC(playErrorSound);
};

private _jetpack = backpackContainer ace_player;
private _strength = getNumber (configOf _jetpack >> QGVAR(strength));
private _speed = getNumber (configOf _jetpack >> QGVAR(speed));
private _freefallHeight = getNumber (configOf _jetpack >> QGVAR(freefallHeight));

if (_freefallHeight > 0) then {
    ace_player setUnitFreefallHeight _freefallHeight;
};

private _velocity = velocity ace_player;
private _positionASL = getPosASL ace_player;

if (_boost and {isTouchingGround ace_player}) then {
    // Teleport is needed so player will actually move upwards
    _positionASL set [2, (_positionASL select 2) + 0.05];
    _velocity set [2, (_velocity select 2) + (_strength / 2 max BOOST_MAX_VELOCITY)];
    // Cap initial jump to avoid taking damage from a straight jump up

    ace_player setPosASL _positionASL;
    ace_player setVelocity _velocity;
};

ace_player setVariable [QGVAR(usingJetpack), true, true];
private _arguments = [ace_player, _jetpack, _strength, _speed, _freefallHeight];
[QGVAR(jetpackFired), _arguments] call CBA_fnc_globalEvent;
_arguments call FUNC(jetpackPFH);

[ace_player, _jetpack] call FUNC(soundPFH);
[ace_player, _jetpack] call FUNC(fuelPFH);

nil;