#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Uses fuel from a player's fuel can to refuel another player's jetpack.
 * Intended to be used as the statement for an ACE action.
 *
 * Arguments:
 * target: Object - The unit whose jetpack should be refueled
 * player: Object - The unit doing the refueling
 * params: Array - Parameters passed to the action
 *
 * Return Value:
 * None
 *
 * Examples:
 * [cursorObject, player, []] call BNA_KC_Jetpacks_fnc_refuelOtherPlayer;
 */


params ["_target", "_player", "_params"];

// Get a fuel can and it's fuel level from the unit's inventory
// Empty cans are CBA_miscItems, non-empty cans are magazines
[_player, false, true] call BNA_KC_Jetpacks_fnc_getFuelCan params ["_fuelCan", "_fuelCanFuel"];

private _fuelCanMaxFuel = [(configFile >> "CfgMagazines" >> _fuelCan), "count", 400] call BIS_fnc_returnConfigEntry;
private _targetFuel = _target call FUNC(getFuel);
private _targetMaxFuel = [(configFile >> "CfgVehicles" >> backpack _target), QGVAR(fuel), JETPACK_FUEL_DEFAULT] call BIS_fnc_returnConfigEntry;

private _fuelToRefill = round ((_fuelCanFuel + _targetFuel) min _targetMaxFuel) - _targetFuel;
private _refuelTime = _fuelToRefill / REFUEL_PER_SECOND;

private _refuelHandler = {
    _this#0 params ["_player", "_target"];
    private _handlerID = _this#1;

    private _removeSelf = {
        [_handlerID] call CBA_fnc_removePerFrameHandler;
        _player setVariable ["BNA_KC_Jetpack_isRefuelingPlayer", nil];
        playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_end.wss", _player, false, getPosASL _player, 1, 1, 8];
    };

    playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_loop.wss", _player, false, getPosASL _player, 1, 1, 8];

    if (_player getVariable ["BNA_KC_Jetpack_isRefuelingPlayer", false] isEqualTo false) exitWith { call _removeSelf; };
    if ([_player, true] call BNA_KC_Jetpacks_fnc_getFuelCan isEqualTo ["", 0]) exitWith { call _removeSelf; };
    if ([_target, true] call FUNC(getFuel) == 1) exitWith { call _removeSelf; };

    [_player, true] call BNA_KC_Jetpacks_fnc_getFuelCan params ["_fuelCan", "_fuelCanFuel"];
    private _targetFuel = _target call FUNC(getFuel);
    private _targetMaxFuel = [(configFile >> "CfgVehicles" >> backpack _target), QGVAR(fuel), JETPACK_FUEL_DEFAULT] call BIS_fnc_returnConfigEntry;

    // Remove up to REFUEL_PER_SECOND fuel units, cap at 0 in case it goes negative
    private _targetNewFuel = (_targetFuel + REFUEL_PER_SECOND) min _targetMaxFuel;
    private _fuelDiff = round (_targetNewFuel - _targetFuel);

    private _fuelCanNewFuel = (_fuelCanFuel - _fuelDiff) max 0;

    _player removeMagazine _fuelCan;
    if (_fuelCanNewFuel == 0) then {
        // If the fuel can runs out of fuel, give the item version instead
        private _fuelCanItem = [
            (configFile >> "CfgMagazines" >> _fuelCan),
            QGVAR(fuelCanItem),
            QCLASS(Jetpack_FuelCan_Empty)
        ] call BIS_fnc_returnConfigEntry;
        _player addItem _fuelcanItem;
    } else {
        _player addMagazine [_fuelCan, _fuelCanNewFuel];
    };

    [_target, _targetNewFuel, false] call BNA_KC_Jetpacks_fnc_setFuel;
    [QGVAR(fuelChanged), [_target, backpackContainer _target, _targetFuel, _targetNewFuel], _target] call CBA_fnc_targetEvent;
};


// [_player, "Acts_TreatingWounded04"] call ace_common_fnc_doAnimation;
[_refuelTime, [_player, _target, _refuelHandler], {
    // On Success
    _this#0 params ["_player", "_args"];
    _player setVariable ["BNA_KC_Jetpack_isRefuelingPlayer", nil];
    cutText ["Finished refueling player's jetpack", "PLAIN DOWN"];
}, {
    // On Failure
    _this#0 params ["_player", "_args"];
    _player setVariable ["BNA_KC_Jetpack_isRefuelingPlayer", nil];
    cutText ["Cancelled refueling", "PLAIN DOWN"];
}, "Refueling...", {
    _this#0 params ["_player", "_target", "_refuelHandler"];

    // Start refuel
    if !(_player getVariable ["BNA_KC_Jetpack_isRefuelingPlayer", false]) then {
        playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_start.wss", _player, false, getPosASL _player, 1, 1, 8];
        _player setVariable ["BNA_KC_Jetpack_isRefuelingPlayer", true];
        [_refuelHandler, 1, [_player, _target]] call CBA_fnc_addPerFrameHandler;
    };

    // Conditions
    lifeState _player != "INCAPACITATED" and
    alive _player and
    [_player] call ace_common_fnc_isAwake and
    _player distance _target <= 2;
}] call ace_common_fnc_progressBar;