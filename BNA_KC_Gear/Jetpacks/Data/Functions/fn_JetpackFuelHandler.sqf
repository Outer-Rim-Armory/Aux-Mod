/*
 * Authors: DartRuffian
 * Plays sound effects while a player is using a jetpack. Sound effects stop being played when player is no longer using a jetpack.
 *
 * Arguments:
 * None, uses ace_player
 *
 * Return Value:
 * None
 *
 * Example:
 * BNA_KC_Jet_JetpackFuelHandle = [BNAKC_fnc_JetpackFuelHandler] call CBA_fnc_AddPerFrameHandler;
 */


#define BASE_FUEL_COST 8
if (isGamePaused) exitWith {};  // Don't use fuel if player is paused (in singleplayer)

// Don't play effects for units on the ground or who can't jetpack
if (!(ace_player call BNAKC_fnc_CanUseJetpack) or isTouchingGround ace_player) exitWith {};

// backpackContainer returns the backpack object instead of just the class name
// Fuel levels are stored in the backpack object, makes it a bit more realistic
private _jetpack = backpackContainer ace_player;

private _oldFuel = [_jetpack] call BNAKC_fnc_GetJetpackFuel;
private _fuel = [_jetpack] call BNAKC_fnc_GetJetpackFuel;

private _fuelCoef =
(
    // Count each movement key pressed
    ({
        inputAction _x == 1
    } count ["MoveBack", "TurnLeft", "TurnRight", "MoveForward"])
    +
	// Jetpack variables
    ({
        ace_player getVariable [_x, false]
    } count ["BNA_KC_Jet_rise", "BNA_KC_Jet_slowFall"])
);

for "_i" from 1 to _fuelCoef + 1 do
{
	// Increase fuel cost for each movement action
	_fuel = (_fuel - ((BASE_FUEL_COST * diag_deltaTime) * BNA_KC_Jet_FuelRate) max 0);
};

_jetpack setVariable ["BNA_KC_Jet_currentFuel", _fuel];
["BNA_KC_Jet_FuelChanged", [ace_player, _jetpack, _oldFuel, _fuel]] call CBA_fnc_GlobalEvent;