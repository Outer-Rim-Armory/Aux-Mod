#include "..\..\..\script_component.hpp"
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

// Variables
private _display = missionNamespace getVariable ["BNA_KC_Jet_fuelDisplay", [displayNull]] select 0;

// Get current display values
private _ctrlFuel = _display displayCtrl IDC_FUELDISPLAY_FUEL;
private _ctrlFuelPos = ctrlPosition _ctrlFuel;
// Decrease height
private _ctrlFuelOldHeight = _ctrlFuelPos select 3;
_ctrlFuel ctrlSetPositionH FUELDISPLAY_FUEL_H * ([_jetpack, true] call BNAKC_Jetpacks_fnc_getJetpackFuel); // Returns value from 0 to 1

// Move display downwards
// Get difference in height
private _ctrlFuelNewHeight = _ctrlFuelOldHeight - (FUELDISPLAY_FUEL_H * ([_jetpack, true] call BNAKC_Jetpacks_fnc_getJetpackFuel));
// Move display downwards by height difference
_ctrlFuel ctrlSetPositionY (_ctrlFuelPos # 1) + (_ctrlFuelNewHeight);

// Animate the bar
_ctrlFuel ctrlCommit 1;