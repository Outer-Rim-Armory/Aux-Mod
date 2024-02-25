#include "..\..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * OnLoad handler for the Jetpack fuel dialog (BNA_KC_Jet_Dialog).
 *
 * Arguments:
 * display: Array - The dialog to display
 *
 * Return Value:
 * None
 *
 * Example:
 * [_this] call BNAKC_Jetpacks_fnc_jetDialogOnLoad;
 */


params ["_display"];

missionNamespace setVariable ["BNA_KC_Jet_fuelDisplay", _display];