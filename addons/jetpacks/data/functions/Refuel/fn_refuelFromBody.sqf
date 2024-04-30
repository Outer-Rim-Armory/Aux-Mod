#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Assigns jetpack refuel action to units, allows refueling from dead bodies.
 * Intended to be used as the statement for an ACE action.
 *
 * Arguments:
 * target: Object - The unit whose jetpack should be drained
 * player: Object - The unit whose jetpack should be refueled
 * params: Array - Parameters passed to the action
 *
 * Return Value:
 * None
 *
 * Examples:
 * [cursorObject, player, []] call BNA_KC_Jetpacks_fnc_refuelFromBody;
 */


#define REFUEL_PER_SECOND 5
params ["_target", "_player", "_params"];

// Get a fuel can and it's fuel level from the unit's inventory
// Empty cans are CBA_miscItems, non-empty cans are magazines
[_player, true] call BNA_KC_Jetpacks_fnc_getFuelCan params ["_fuelCan", "_fuelCanFuel"];
if !(_fuelCan isKindOf "CA_Magazine") then {
    // Fuel can is empty, get magazine data
    // Not actually converted (i.e. remove item and add mag) because magazines with no ammo are not include in `magazines unit`
    _fuelCan = [
        (configFile >> "CfgWeapons" >> _fuelCan),
        QGVAR(fuelCanMag),
        QCLASS(Jetpack_FuelCan_Mag)
    ] call BIS_fnc_returnConfigEntry;
};

private _fuelCanMaxFuel = [(configFile >> "CfgMagazines" >> _fuelCan), "count", 400] call BIS_fnc_returnConfigEntry;
private _targetFuel = _target call FUNC(getFuel);

private _fuelToRefill = round (((_fuelCanFuel + _targetFuel) min _fuelCanMaxFuel) - _fuelCanFuel);
private _refuelTime = _fuelToRefill / REFUEL_PER_SECOND;

private _refuelHandler = {
    _this#0 params ["_player", "_target"];
    private _handlerID = _this#1;

    private _removeSelf = {
        [_handlerID] call CBA_fnc_removePerFrameHandler;
        _player setVariable ["BNA_KC_Jetpack_isRefuelingFromBody", nil];
        playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_end.wss", _player, false, getPosASL _player, 1, 1, 8];
    };

    playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_loop.wss", _player, false, getPosASL _player, 1, 1, 8];

    if (_player getVariable ["BNA_KC_Jetpack_isRefuelingFromBody", false] isEqualTo false) exitWith { call _removeSelf; };
    if ([_player, true] call BNA_KC_Jetpacks_fnc_getFuelCan isEqualTo ["", 0]) exitWith { call _removeSelf; };
    if ([_target, true] call FUNC(getFuel) == 0) exitWith { call _removeSelf; };

    [_player, true] call BNA_KC_Jetpacks_fnc_getFuelCan params ["_fuelCan", "_fuelCanFuel"];
    if !(_fuelCan isKindOf "CA_Magazine") then {
        // Fuel can is empty, needs to be converted to magazine
        _player removeItem _fuelCan;
        _fuelCan =
        [
            (configFile >> "CfgWeapons" >> _fuelCan),
            QGVAR(fuelCanMag),
            QCLASS(Jetpack_FuelCan_Mag)
        ] call BIS_fnc_returnConfigEntry;

        _player addMagazine [_fuelCan, 1];
    };
    private _targetFuel = _target call FUNC(getFuel);

    // Remove up to REFUEL_PER_SECOND fuel units, cap at 0 in case it goes negative
    private _targetNewFuel = (_targetFuel - REFUEL_PER_SECOND) max 0;
    private _fuelDiff = round (_targetFuel - _targetNewFuel);

    private _fuelCanNewFuel = _fuelCanFuel + _fuelDiff; // Give difference to player

    _player removeMagazine _fuelCan;
    _player addMagazine [_fuelCan, _fuelCanNewFuel];

    backpackContainer _target setVariable [QGVAR(fuel), _targetNewFuel]; // Set fuel manually since refuel func updates display locally
};


// [_player, "Acts_TreatingWounded04"] call ace_common_fnc_doAnimation;
[ _refuelTime, [_player, _target, _refuelHandler], {
    // On Success
    _this#0 params ["_player", "_args"];
    _player setVariable ["BNA_KC_Jetpack_isRefuelingFromBody", nil];
    cutText ["Finished collecting fuel", "PLAIN DOWN"];
}, {
    // On Failure
    _this#0 params ["_player", "_args"];
    _player setVariable ["BNA_KC_Jetpack_isRefuelingFromBody", nil];
    cutText ["Cancelled", "PLAIN DOWN"];
}, "Refueling...", {
    _this#0 params ["_player", "_target", "_refuelHandler"];

    // Start refuel
    if !(_player getVariable ["BNA_KC_Jetpack_isRefuelingFromBody", false]) then {
        playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_start.wss", _player, false, getPosASL _player, 1, 1, 8];
        _player setVariable ["BNA_KC_Jetpack_isRefuelingFromBody", true];
        [_refuelHandler, 1, [_player, _target]] call CBA_fnc_addPerFrameHandler;
    };

    // Conditions
    lifeState _player != "INCAPACITATED" and
    alive _player and
    [_player] call ace_common_fnc_isAwake;
}] call ace_common_fnc_progressBar;