#include "..\script_component.hpp"
/*
 * Author: SzwedzikPL
 * Edited by DartRuffian
 * Resets suppression effect
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Examples:
 * [] call BNA_KC_suppress_fnc_resetEffects;
 *
 * Public: No
 */

private ["_display", "_overlayCtrl"];
TRACE_0("fnc_resetEffects");

_display = uiNamespace getVariable [QGVAR(overlay), displayNull];

if (isNull _display) exitWith {};

_overlayCtrl = _display displayCtrl IDC_OVERLAY;
_overlayCtrl ctrlSetFade 1;
_overlayCtrl ctrlCommit 0;

nil;