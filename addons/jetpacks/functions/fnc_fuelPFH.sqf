#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * CBA Per-Frame Handler for jetpack fuel costs.
 * This is a separate PFH since the doing it in the movement PFH drains fuel too quickly. Formula could be updated to drain fuel much slower, though that takes more work.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Jetpack <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ace_player, backpackContainer ace_player] call BNA_KC_jetpacks_fnc_fuelPFH;
 *
 * Public: No
 */

#define BASE_FUEL_COST 8

params ["_unit", "_jetpack"];
TRACE_2("fnc_fuelPFH",_unit,_jetpack);

private _function = {
    params ["", "_unit", "_jetpack"];

    if (isGamePaused) exitWith {};

    private _fuel = _unit call FUNC(getFuel);
    private _oldFuel = _fuel;
    private _fuelCoef = ({
        inputAction _x == 1;
    } count ["MoveBack", "TurnLeft", "TurnRight", "MoveForward"]);
    _fuelCoef = _fuelCoef + ({
        _x;
    } count [GVAR(rise), GVAR(slowFall), GVAR(hover)]);

    for "_i" from 1 to _fuelCoef + 1 do {
        _fuel = (_fuel - ((BASE_FUEL_COST * diag_deltaTime) * GVAR(fuelDrainCoefficient)) max 0);
    };

    [ace_player, _fuel] call FUNC(setFuel);
};

_condition = {
    params ["", "_unit"];
    _unit getVariable [QGVAR(usingJetpack), false];
};

[
    _function,
    _condition,
    {},
    0.5,
    [_unit, _jetpack]
] call EFUNC(core,tempPFH);

nil;