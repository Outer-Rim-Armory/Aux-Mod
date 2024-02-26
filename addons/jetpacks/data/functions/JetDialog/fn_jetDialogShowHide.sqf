#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Shows or hides the jetpack fuel display.
 *
 * Arguments:
 * None, uses ace_player
 *
 * Return Value:
 * None
 *
 * Example:
 * ['BNA_KC_Jet_showHideDisplay', BNAKC_Jetpacks_fnc_jetDialogShowHide] call CBA_fnc_addEventHandler;
 */


// Remove display if it shouldn't be shown (i.e. piloting a vehicle, etc.)
if !(ace_player call BNAKC_Jetpacks_fnc_shouldShowJetDialog) exitWith
{
    (QGVAR(RscFuelDisplay_Layer) call BIS_fnc_RscLayer) cutFadeOut 0.5;
};

// Variables
private _display = uiNamespace getVariable [QGVAR(RscFuelDisplay), [displayNull]] select 0;

// If the display does not already exist, create it
if (isNull _display) then
{
    // Creates a new layer, and then displays the fuel dialog on the layer
    (QGVAR(RscFuelDisplay_Layer) call BIS_fnc_RscLayer) cutRsc [
        QGVAR(RscFuelDisplay),
        "PLAIN",
        1, // Seconds to fade in resource
        false // Show while in map
    ];
};

// Update display with proper values
private _jetpack = backpackContainer ace_player;
private _fuel = _jetpack call BNAKC_Jetpacks_fnc_getJetpackFuel;

["BNA_KC_Jet_FuelChanged", [ace_player, _jetpack, _fuel, _fuel]] call CBA_fnc_localEvent;