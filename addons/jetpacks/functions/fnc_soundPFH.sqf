#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * CBA Per-Frame Handler for jetpack sound effects.
 * This is a separate PFH since the sounds need a different timing to sound nice.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Jetpack <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ace_player, backpackContainer ace_player] call BNA_KC_jetpacks_fnc_soundPFH;
 *
 * Public: No
 */

params ["_unit", "_jetpack"];
TRACE_2("fnc_soundPFH",_unit,_jetpack);

private _sound = getText (configOf _jetpack >> QGVAR(effectSound));

private _function = {
    params ["", "_unit", "_sound"];

    if (isGamePaused) exitWith {};

    private _volume = 0.05;
    private _volumeCoef = ({
        inputAction _x == 1;
    } count ["MoveBack", "TurnLeft", "TurnRight", "MoveForward"]);
    _volumeCoef = _volumeCoef + ({
        _x;
    } count [GVAR(rise), GVAR(slowFall), GVAR(hover)]);

    _volume = _volume * _volumeCoef + 0.1;
    playSound3D [_sound, _unit, false, getPosASL _unit, _volume];
};

_condition = {
    params ["", "_unit"];
    _unit getVariable [QGVAR(usingJetpack), false];
};

[
    _function,
    _condition,
    {},
    0.3,
    [_unit, _sound]
] call EFUNC(core,tempPFH);

nil;
