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


systemChat "changed loadout";
// Get the jetpack fuel display
private _display = missionNamespace getVariable ["BNA_KC_Jet_fuelDisplay", []];

// Hide the fuel display if the player does not have a jetpack
if !(ace_player call BNAKC_fnc_HasJetpack) exitWith
{
    ("BNA_KC_Jet_DialogLayer" call BIS_fnc_RscLayer) cutFadeOut 0.5;
};

// If the display does not already exist, create it
if (_display isEqualTo []) then
{
    // Creates a new layer, and then displays the fuel dialog on the layer
    _display = ("BNA_KC_Jet_DialogLayer" call BIS_fnc_RscLayer) cutRsc
    [
        "BNA_KC_Jet_Dialog", // Display
        "PLAIN", // Normal, no extra effects
        1, // Seconds to fade in resource
        false // Show while in map
    ];
    missionNamespace setVariable ["BNA_KC_Jet_fuelDisplay", _display];
};

// Get jetpack and current (max) fuel
private _jetpack = backpackContainer ace_player;
private _fuel = _jetpack call BNAKC_fnc_GetJetpackFuel;

["BNA_KC_Jet_FuelChanged", [ace_player, backpackContainer ace_player, _fuel, _fuel]] call CBA_fnc_LocalEvent;