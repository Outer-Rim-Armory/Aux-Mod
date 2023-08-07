/*
 * Author: DartRuffian
 * Event handler to show / hide the jetpack fuel display.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * ['loadout', BNAKC_fnc_JetpackPutOnTakeOff, true] call CBA_fnc_AddPlayerEventHandler;
 */


#define DEV_LOG(message) (if (BNA_KC_DevMode) then {systemChat str message})

// Get jetpack and current (max) fuel
private _jetpack = backpackContainer ace_player;
private _fuel = _jetpack call BNAKC_fnc_GetJetpackFuel;

["BNA_KC_Jet_FuelChanged", [ace_player, _jetpack, _fuel, _fuel]] call CBA_fnc_LocalEvent;