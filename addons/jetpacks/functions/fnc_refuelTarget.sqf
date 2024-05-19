#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Fills an object using jetpack fuel cans in the player's inventory.
 *
 * Arguments:
 * 0: Object to refuel <OBJECT>
 * 1: Unit refueling the object <OBJECT>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [cursorObject, ace_player] call BNA_KC_jetpacks_fnc_refuelFromObject;
 *
 * Public: No
 */

params ["_object", "_player"];
TRACE_2("fnc_refuelTarget",_object,_player);

if (_player isNotEqualTo ace_player) exitWith {};

if (_object isKindOf "CAManBase") then {
    _object = backpackContainer _object;
};

// Get a not full fuel tank
[_player, false, true] call FUNC(getFuelCan) params ["_fuelCan", "_fuelLevel"];
private _objectFuel = [_object, true] call FUNC(getFuel);

if (_objectFuel == 1 or
    {[_fuelCan, _fuelLevel] isEqualTo FUELCAN_NONE}
) exitWith {};


// Variable is always defined in fnc_getFuel
private _objectFuelMax = _object getVariable QGVAR(maxFuel);

private _fuelDifference = round (((_fuelLevel + _objectFuel) min _objectFuelMax) - _objectFuel);
private _fuelTime = _fuelDifference / REFUEL_PER_SECOND;

GVAR(refueling) = false;

[_fuelTime, [_object, _player], {
    // Success
    _this#0 params ["_object", "_player"];
    cutText ["Finished refueling", "PLAIN DOWN"];
    playSound3D ["A3\missions_f_oldman\data\sound\refueling\refueling_end.wss", objNull, false, getPosASL _object, 1, 1, 8];
    GVAR(refueling) = false;
}, {
    // Failure
    _this#0 params ["_object", "_player"];
    cutText ["Cancelled", "PLAIN DOWN"];
    playSound3D ["A3\missions_f_oldman\data\sound\refueling\refueling_end.wss", objNull, false, getPosASL _object, 1, 1, 8];
    GVAR(refueling) = false;
}, "Refueling ...", {
    // Condition
    _this#0 params ["_object", "_player"];

    if !(GVAR(refueling)) then {
        playSound3D ["A3\missions_f_oldman\data\sound\refueling\refueling_start.wss", objNull, false, getPosASL _object, 1, 1, 8];
        GVAR(refueling) = true;
        [_object, _player] call FUNC(refuelTargetPFH);
    };

    _player call ace_common_fnc_isAwake;
}] call ace_common_fnc_progressBar;
