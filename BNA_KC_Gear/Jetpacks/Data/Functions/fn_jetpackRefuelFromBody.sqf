/*
 * Author: DartRuffian
 * Assigns jetpack refuel action to units, allows refueling from dead bodies.
 *
 * Arguments:
 * player: Object - The unit whose jetpack should be refueled
 * target: Object - The unit whose jetpack should be drained
 *
 * Return Value:
 * None
 *
 * Examples:
 * [player, cursorObject] call BNAKC_fnc_jetpackRefuelFromBody;
 */

#define REFUEL_PER_SECOND 5
params ["_target", "_player", "_params"];

private _playerFuel = _player call BNAKC_Jetpacks_fnc_getJetpackFuel;
private _playerMaxFuel = [(configFile >> "CfgVehicles" >> backpack _player), "BNA_KC_Jet_fuel", 100] call BIS_fnc_returnConfigEntry;
private _targetFuel = _target call BNAKC_Jetpacks_fnc_getJetpackFuel;

private _fuelToRefill = ((_playerFuel + _targetFuel) min _playerMaxFuel) - _playerMaxFuel;
private _refuelTime = _fuelToRefill / REFUEL_PER_SECOND;

[_player, "Acts_TreatingWounded04"] call ace_common_fnc_doAnimation;

/*
/*
Player: 70 / 100 fuel
Target: 50 / 150 fuel
_fuelToRefill = ((70 + 50) min 100) - 70 = 30

Player: 10  / 100
Target: 100 / 110
_fuelToRefill ((10 + 100) min 100) - 10 = 90



[
    _refuelTime,
    [_player, _playerFuel, _playerMaxFuel, _fuelToRefill],
    {
        // On Success
        _this#0 params ["_player"];
        cutText ["Finished refueling from jetpack.", "PLAIN DOWN"];
    },
    {
        // On Failure
        // _this#0 params ["_player"];
    },
    "Refueling...",
    {
        // Conditions
        _this#0 params ["_player"];
        lifeState _player != "INCAPACITATED" and
        alive _player and
        [_player] call ace_common_fnc_isAwake
    }
] call ace_common_fnc_progressBar;


// [_player, "Acts_TreatingWounded04"] call ace_common_fnc_doAnimation;
*/