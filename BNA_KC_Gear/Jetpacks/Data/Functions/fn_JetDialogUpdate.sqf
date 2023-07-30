/*
 * Author: DartRuffian
 * Event handler to update the jetpack's fuel display whenever the amount of fuel changes
 *
 * Arguments:
 * unit: Object - The unit wearing the affected jetpack
 * jetpack: Object - The backpack object
 * oldFuel: Number - The amount of fuel before the change
 * currentFuel: Number - The amount of fuel currently in the backpack (after the change)
 *
 * Return Value:
 * None
 *
 * Example:
 * ['BNA_KC_Jet_FuelChanged', BNAKC_fnc_JetDialogUpdate] call CBA_fnc_AddEventHandler;
 */

params ["_unit", "_jetpack", "_oldFuel", "_currentFuel"];

// Variables
private _display = missionNamespace getVariable ["BNA_KC_Jet_fuelDisplay", []];

// If the display does not already exist, create it
if (_display isEqualTo []) then
{
    // Creates a new layer, and then displays the fuel dialog on the layer
    ("BNA_KC_Jet_DialogLayer" call BIS_fnc_RscLayer) cutRsc
    [
        "BNA_KC_Jet_Dialog", // Display
        "PLAIN", // Normal, no extra effects
        1, // Seconds to fade in resource
        false // Show while in map
    ];
};

// Get current display values
private _ctrlFuel = (_display select 0) displayCtrl 9001; // Idc for the fuel control

// Sizes for the fuel display, these values MUST match the ones defined in BNA_KC_Jet_Dialog
#define WINDOW_HEIGHT 0.3
#define FUEL_HEIGHT WINDOW_HEIGHT * 0.95// 95% height of background

// Animate the display lowering
_ctrlFuel ctrlSetPositionH (FUEL_HEIGHT * ([_jetpack, true] call BNAKC_fnc_GetJetpackFuel));
_ctrlFuel ctrlCommit 1;