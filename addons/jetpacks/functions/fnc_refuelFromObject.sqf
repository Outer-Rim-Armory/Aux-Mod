#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Fills a jetpack fuel can from an object source.
 *
 * Arguments:
 * 0: Object to remove fuel from <OBJECT>
 * 1: Unit recieving fuel <OBJECT>
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
TRACE_2("fnc_refuelFromObject",_object,_player);

if (_player isNotEqualTo ace_player) exitWith {};

if (_object isKindOf "CAManBase") then {
    _object = backpackContainer _object;
};

// Get a non-full fuel tank
[_player, true] call FUNC(getFuelCan) params ["_fuelCan", "_fuelLevel"];
private _objectFuel = _object call FUNC(getFuel);

if (_objectFuel <= 0 or
    {[_fuelCan, _fuelLevel] isEqualTo FUELCAN_NONE}
) exitWith {};

if !(_fuelCan isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
    _fuelCan = getText (configFile >> "CfgWeapons" >> _fuelCan >> QGVAR(fuelCanMag));
};

private _fuelLevelMax = getNumber (configFile >> "CfgMagazines" >> _fuelCan >> "count");
private _fuelDifference = round (((_fuelLevel + _objectFuel) min _fuelLevelMax) - _fuelLevel);
private _fuelTime = _fuelDifference / REFUEL_PER_SECOND;

GVAR(refueling) = false;

[_fuelTime, [_object, _player], {
    // Success
    _this#0 params ["_object", "_player"];
    cutText ["Finished collecting fuel", "PLAIN DOWN"];
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
        [_object, _player] call FUNC(refuelFromObjectPFH);
    };

    _player call ace_common_fnc_isAwake;
}] call ace_common_fnc_progressBar;
