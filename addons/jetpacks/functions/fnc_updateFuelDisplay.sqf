#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Updates the local player's fuel display.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: The unit's jetpack <OBJECT>
 * 2: The old fuel amount <NUMBER>
 * 3: The current fuel amount <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["BNA_KC_jetpacks_fuelChanged", BNA_KC_jetpacks_fnc_updateFuelDisplay] call CBA_fnc_addEventHandler;
 */

params ["_unit"];
private ["_display", "_ctrlFuel", "_ctrlFuelPos", "_heightModifier", "_oldHeight", "_newHeight"];

if (_unit isNotEqualTo ace_player) exitWith {};

_display = uiNamespace getVariable [QGVAR(RscFuelDisplay), displayNull];
_ctrlFuel = _display displayCtrl IDC_FUELDISPLAY_FUEL;
_ctrlFuelPos = ctrlPosition _ctrlFuel;

// Decrease height
_heightModifier = FUELDISPLAY_FUEL_H * ([_unit, true] call FUNC(getFuel));
_ctrlFuel ctrlSetPositionH _heightModifier;

// Move display down
_oldHeight = _ctrlFuelPos select 3;
_newHeight = _oldHeight - _heightModifier;
_ctrlFuel ctrlSetPositionY (_ctrlFuelPos#1 + _newHeight);

_ctrlFuel ctrlCommit 1;
nil;