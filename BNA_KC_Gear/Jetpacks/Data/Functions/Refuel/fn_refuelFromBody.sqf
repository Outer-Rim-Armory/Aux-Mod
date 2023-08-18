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
 * [cursorObject, player, []] call BNAKC_Jetpacks_fnc_refuelFromBody;
 */


#define REFUEL_PER_SECOND 5
params ["_target", "_player", "_params"];

private _playerFuel = _player call BNAKC_Jetpacks_fnc_getJetpackFuel;
private _playerMaxFuel = [(configFile >> "CfgVehicles" >> backpack _player), "BNA_KC_Jet_fuel", 100] call BIS_fnc_returnConfigEntry;
private _targetFuel = _target call BNAKC_Jetpacks_fnc_getJetpackFuel;

private _fuelToRefill = ((_playerFuel + _targetFuel) min _playerMaxFuel) - _playerFuel;
private _refuelTime = _fuelToRefill / REFUEL_PER_SECOND;

private _refuelHandler =
{
    _this#0 params ["_player", "_target"];
    private _handlerID = _this#1;

    private _removeSelf =
    {
        [_handlerID] call CBA_fnc_removePerFrameHandler;
        _player setVariable ["BNA_KC_Jetpack_isRefuelingFromBody", nil];
        playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_end.wss", _player, false, getPosASL _player, 1, 1, 8];
    };

    playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_loop.wss", _player, false, getPosASL _player, 1, 1, 8];

    if (_player getVariable ["BNA_KC_Jetpack_isRefuelingFromBody", false] isEqualTo false) exitWith { call _removeSelf; };
    if ([_player, true] call BNAKC_Jetpacks_fnc_getJetpackFuel == 1) exitWith { call _removeSelf; };
    if ([_target, true] call BNAKC_Jetpacks_fnc_getJetpackFuel == 0) exitWith { call _removeSelf; };

    private _playerFuel = _player call BNAKC_Jetpacks_fnc_getJetpackFuel;
    private _targetFuel = _target call BNAKC_Jetpacks_fnc_getJetpackFuel;

    // Remove up to REFUEL_PER_SECOND fuel units, cap at 0 in case it goes negative
    private _targetNewFuel = (_targetFuel - REFUEL_PER_SECOND) max 0;
    private _fuelDiff = _targetFuel - _targetNewFuel;

    private _playerNewFuel = _playerFuel + _fuelDiff; // Give difference to player
    
    // Set fuel variables and update display
    [_player, _playerNewFuel] call BNAKC_Jetpacks_fnc_setJetpackFuel;
    backpackContainer _target setVariable ["BNA_KC_Jet_currentFuel", _targetNewFuel]; // Set fuel manually since refuel func updates display locally
};


// [_player, "Acts_TreatingWounded04"] call ace_common_fnc_doAnimation;
[
    _refuelTime,
    [_player, _target, _refuelHandler],
    {
        // On Success
        _this#0 params ["_player", "_args"];
        _player setVariable ["BNA_KC_Jetpack_isRefuelingFromBody", nil];
        cutText ["Finished refueling from jetpack", "PLAIN DOWN"];
    },
    {
        // On Failure
        _this#0 params ["_player", "_args"];
        _player setVariable ["BNA_KC_Jetpack_isRefuelingFromBody", nil];
        cutText ["Cancelled refueling", "PLAIN DOWN"];
    },
    "Refueling...",
    {
        _this#0 params ["_player", "_target", "_refuelHandler"];

        // Start refuel
        if !(_player getVariable ["BNA_KC_Jetpack_isRefuelingFromBody", false]) then
        {
            playSound3D ["a3\missions_f_oldman\data\sound\refueling\refueling_start.wss", _player, false, getPosASL _player, 1, 1, 8];
            _player setVariable ["BNA_KC_Jetpack_isRefuelingFromBody", true];
            [_refuelHandler, 1, [_player, _target]] call CBA_fnc_addPerFrameHandler;
        };

        // Conditions
        lifeState _player != "INCAPACITATED" and
        alive _player and
        [_player] call ace_common_fnc_isAwake;
    }
] call ace_common_fnc_progressBar;