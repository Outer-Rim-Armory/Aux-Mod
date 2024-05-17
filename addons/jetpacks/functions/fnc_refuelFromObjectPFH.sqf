#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * CBA Per-Frame Handler for refueling from a fuel source.
 *
 * Arguments:
 * 0: Fuel source <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorObject, ace_player] call BNA_KC_jetpacks_fnc_refuelFromObjectPFH;
 *
 * Public: No
 */

params ["_object", "_player"];
TRACE_2("fnc_refuelFromObjectPFH",_object,_player);

if (_player isNotEqualTo ace_player) exitWith {};

private _function = {
    params ["", "_object", "_player"];

    if (isGamePaused) exitWith {};

    playSound3D ["\A3\missions_f_oldman\data\sound\refueling\refueling_loop.wss", objNull, false, getPosASL _object, 1, 1, 8];
    [_player, true] call FUNC(getFuelCan) params ["_fuelCan", "_fuelLevel"];
    TRACE_4("Refuel PFH (Pre)",_object,_player,_fuelCan,_fuelLevel);

    // If fuel can is an item (i.e. empty), replace with mag version
    if !(_fuelCan isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
        _player removeItem _fuelCan;
        _fuelCan = getText (configFile >> "CfgWeapons" >> _fuelCan >> QGVAR(fuelCanMag));
        TRACE_1("Adding magazine version of fuel can",_fuelCan);
        // magazines command doesn't include empty mags
        _player addMagazine [_fuelCan, 1];
    };

    private _objectFuel = _object call FUNC(getFuel);
    private _objectNewFuel = (_objectFuel - REFUEL_PER_SECOND) max 0;
    private _fuelDifference = round (_objectFuel - _objectNewFuel);

    [_player, _fuelCan, _fuelDifference] call ace_common_fnc_adjustMagazineAmmo;
    [_object, _objectNewFuel] call FUNC(setFuel);

    TRACE_3("Refuel PFH (Post)",_object,_player,_fuelDifference);
};

private _condition = {
    GVAR(refueling);
};

private _exitCode = {

};

[
    _function,
    _condition,
    _exitCode,
    1,
    [_object, _player]
] call EFUNC(core,tempPFH);

nil;