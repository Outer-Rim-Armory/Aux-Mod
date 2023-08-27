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
 * ['BNA_KC_Jet_FuelChanged', BNAKC_Jetpacks_fnc_jetDialogUpdateFuelLevel] call CBA_fnc_AddEventHandler;
 */


params ["_unit", "_jetpack", "_oldFuel", "_currentFuel"];

// Remove display if it shouldn't be shown (i.e. piloting a vehicle, etc.)
if !(_unit call BNAKC_Jetpacks_fnc_shouldShowJetDialog) exitWith
{
    ("BNA_KC_Jet_DialogLayer" call BIS_fnc_RscLayer) cutFadeOut 0.5;
};

// Variables
private _display = missionNamespace getVariable ["BNA_KC_Jet_fuelDisplay", [displayNull]] select 0;

// Get current display values
private _ctrlFuel = _display displayCtrl 9001; // Idc for the fuel control
private _ctrlFuelPos = ctrlPosition _ctrlFuel; // Returns array of x, y, width, height

// Sizes for the fuel display, these values MUST match the ones defined in BNA_KC_Jet_Dialog
#define WINDOW_HEIGHT 0.3
#define FUEL_HEIGHT WINDOW_HEIGHT * 0.95// 95% height of background

// Decrease height
private _ctrlFuelOldHeight = _ctrlFuelPos select 3;
_ctrlFuel ctrlSetPositionH FUEL_HEIGHT * ([_jetpack, true] call BNAKC_Jetpacks_fnc_getJetpackFuel); // Returns value from 0 to 1

// Move display downwards
// Get difference in height
private _ctrlFuelNewHeight = _ctrlFuelOldHeight - (FUEL_HEIGHT * ([_jetpack, true] call BNAKC_Jetpacks_fnc_getJetpackFuel));
// Move display downwards by height difference
_ctrlFuel ctrlSetPositionY (_ctrlFuelPos # 1) + (_ctrlFuelNewHeight);

// Animate the bar
_ctrlFuel ctrlCommit 1;