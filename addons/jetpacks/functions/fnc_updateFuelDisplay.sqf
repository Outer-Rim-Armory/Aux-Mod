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
 *
 * Public: No
 */

params ["_unit"];

if (_unit isNotEqualTo ace_player) exitWith {};

private _display = uiNamespace getVariable [QGVAR(RscFuelDisplay), displayNull];
private _ctrlFuel = _display displayCtrl IDC_FUELDISPLAY_FUEL;
private _ctrlFuelPos = ctrlPosition _ctrlFuel;

// Decrease height
private _heightModifier = FUELDISPLAY_FUEL_H * ([_unit, true] call FUNC(getFuel));
_ctrlFuel ctrlSetPositionH _heightModifier;

// Move display down
private _oldHeight = _ctrlFuelPos select 3;
private _newHeight = _oldHeight - _heightModifier;
_ctrlFuel ctrlSetPositionY (_ctrlFuelPos#1 + _newHeight);

_ctrlFuel ctrlCommit 1;
nil;